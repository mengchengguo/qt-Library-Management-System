[TOC]

一、按钮组
===

radio button：单选按钮，各个选项之间是互斥的（选了一个就不能选另一个）。多组radio button之间存在互斥域的问题，如果想将某些单选按钮隔离开，就用容器将他们隔离，常用Group Box


check box：多选按钮，可以同时选中多个按钮。有三态 （默认只有两态：选中2与未选中0，可以通过勾选按钮属性中的tristate，增加半选中状态1） ，每次点击按钮的时候通过stateChange信号传状态。

二、listWidget、treeWidget以及tableWidget
===

1 listWidget
类似于列表的形式，可以在ui界面双击添加元素：

也可以通过代码添加元素：

```
    ui->listWidget->addItem("2");
```


2 treeWidget
类似于树的形式，内容分级，在根结点之下加入其他内容。
可以在ui界面双击添加元素：

也可以通过代码添加元素：

    QTreeWidgetItem *topItem = new QTreeWidgetItem(QStringList()<<"2.1");
    ui->treeWidget->addTopLevelItem(topItem);
    QTreeWidgetItem *childItem = new QTreeWidgetItem(QStringList()<<"2.1.1");
    topItem->addChild(childItem);
3 tableWidgeet
类似于树的形式，可以指定行和列。
可以在ui界面双击添加元素：


也可以通过代码添加元素：

	ui->tableWidget->setRowCount(2);  //2行
	ui->tableWidget->setColumnCount(3);   //3列
	
	// 设置标题
	ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"0"<<"1"<<"2");//水平
	ui->tableWidget->setVerticalHeaderLabels(QStringList()<<"0"<<"1"); //垂直
	
	// 添加数据
	QTableWidgetItem *item = new QTableWidgetItem("(1,1)");
	ui->tableWidget->setItem(1,1,item); 
三、容器
===

注： stacked Widget 页面切换需要我们自己去实现，一般使用按钮点击的时候切换，在槽函数中使用setCurrentIndex 方式切换到第几页，序号从0开始

四、显示控件
===

其中，Label最为常用，既可以显示文字也可以显示静态图、动态图。

（1）显示静态图，需要设置pixmap属性：

从资源文件中导入图片。
（2）显示动态图，可以在cpp文件中进行设置：

```
//设置label播放 gif
    QMovie *movie = new QMovie(":/...",QByteArray(),this);//指定动态图片在资源文件的路径
    ui->label->setMovie(movie);
    movie->start(); //播放，默认会循环播放
```

四、自定义控件
将一些基础的控件拼凑在一起，实现内部关联逻辑，并且对外部提供操作的接口。实现步骤为：
（1）创建控件类：创建一个qt 设计师界面类 （带UI文件）

创建时要注意选择其继承的父类，一般选择Widget。创建完成后，在ui文件中将各个控件组合在一起（放置在同一个父窗口中）。

（2）在主窗口中使用自定义控件类
在ui文件上先拖一个自定义控件类的父类，然后右键再将其提升为其子类（操作结束后在ui文件中并不能直接看到自定义控件，运行可见）：
