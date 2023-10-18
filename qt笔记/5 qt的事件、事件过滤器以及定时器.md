[TOC]



一、事件
===

- 事件是对各种应用程序需要知道的由应用程序内部或者外部产生的事情或者动作的通称。

- 在Qt中，事件作为一个对象，继承自 QEvent 类，常见的有键盘事件 QKeyEvent、鼠标事件 QMouseEvent 和定时器事件 QTimerEvent 等
- 当某个事件发生的时候，窗口就会收到这个事件，并且调用相应的事件处理函数
- 事件处理函数的命名都是以Event结尾的

事件与信号的不同

- 事件由具体的对象进行处理而信号由具体对象产生的

1、鼠标事件
---

### （1）mousePressEvnet

- 重写鼠标按键处理函数

```
void mousePressEvent(QMouseEvent *ev);
```

当且仅当鼠标上的按键被按下时触发mousePressEvnet的事件处理函数。

注： mouseReleseEvent在鼠标释放时触发。

### （2）mouseMoveEvent

重写鼠标移动的处理函数

```
void mouseMoveEvent(QMouseEvent *ev);
```

- 当且仅当鼠标在窗口内移动时触发mouseMoveEvent的事件处理函数。
- 默认情况下，窗口不会主动跟踪鼠标，只有当某个鼠标按键按下的情况下才开始跟踪
- 如果想一开始跟踪，可以使用以下方式进行设置：

```
this->setMouseTracking(true);
```

实现功能示例

```
//获取鼠标坐标
int x = ev->x();
int y = ev->y();

//获取鼠标按键
Qt::MouseButton btn = ev->button();
// btn有：Qt::LeftButton、Qt::LeftButton、Qt::MidButton等多种类型
```

2、event函数
---

- 返回值：true表示该事件得到处理，如果是false，则表示事件没被处理，事件会继续传递到父窗口进行处理
- 使用方法：重载event函数，通过判断QEvent 参数的类型得知事件的类型后，调用相应的事件处理函数

代码示例：

```
bool Child::event(QEvent *e)
{
  //QEvent就是所有Event类的父类
  //判断event的类型
  if(e->type()==QEvent::MouseMove)
  {
      this->mouseMoveEvent(static_cast<QMouseEvent *>(e));  //类型转换为QMouseEvent，调用鼠标事件处理函数mouseMoveEvent进行处理
      return true;
  }

  return Father::event(e);   //未被处理的事件转到父类的event函数
}
```



二、事件过滤器
===

使用事件过滤器分为两个步骤：

第一步：安装一个事件过滤器
---

窗口调用installEventFilter来安装一个事件过滤器

```
this->installEventFilter(this); //自己作为自己的事件过滤器
```

- 改函数的参数是一个事件过滤器对象QObject，该对象的类要重写eventFilter的函数
- 对象可以使用自己作为自己的过滤器
- 事件过滤的时候，事件会先到达事件过滤器的eventFilter函数

第二步：重写bool eventFilter(QObject *watched, QEvent *event)函数
---

代码示例

```
bool Child::eventFilter(QObject *watched, QEvent *event)
{
    if(event->type()==QEvent::MouseMove)
    {
        //返回true 表示拦截该事件
        return true;
    }
    return false;
}
```


eventFilter的返回值有三种：

- 如果返回true，表示事件被过滤，该事件不会被发送到对象本身。
- 如果返回false，表示事件未被过滤，会通过event()方法将事件分发到具体的对象。
- 返回给基类进行处理，例：return QObject::eventFilter(watched, event)。

三、定时器
===

1、定时器事件
---

类比

```
定时器->闹钟
定时器事件->闹钟响
```

（1）启动定时器：
//创建定时器

```
startTimer(1000);  //该函数有返回值，代表定时器的id；
			   //参数是毫秒，每隔相应的时间就会触发一个定时器事件
```

（2）重写定时器事件处理函数
头文件中添加：

```
protected:
  void timerEvent(QTimerEvent *event);
```

并进行相应的实现。
注： 如果要区分多个定时器，可以调用event->timerId()

```
if(event->timerId()==this->mTimerId)
{
	//定时器事件处理函数
}
```

（3）关闭定时器：
通过**killTimer()**来杀死一个定时器，该函数的参数是定时器的id

```
killTimer(this->mTimerId);
this->mTimerId=0; //每关闭一个定时器，最好定时器的id置为0
```


2、QTimer定时器
---

使用时需要引入头文件

```
include <QTimer>
```

创建一个Qtimer定时器

```
QTimer *timer = new QTimer(this);
```

通过信号和槽的连接方式实现定时器事件的处理

```
connect(timer,&QTimer::timeout,[=](){
        static int num = 1;
        qDebug()<<num++;
    });
```


启动定时器

```
timer->start(1000); //参数是毫秒
```

停止定时器

```
timer->stop();
```

