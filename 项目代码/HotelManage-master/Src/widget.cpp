﻿#include "widget.h"
#include "ui_widget.h"
#include "app/iconhelper.h"
#include "app/myhelper.h"
#include "app/myapp.h"

#include "logindialog.h"
#include "ui_logindialog.h"




#include <QDesktopServices>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->InitStyle();
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonDblClick) {
        this->on_btnMenu_Max_clicked();
        return true;
    }
    return QObject::eventFilter(obj, event);
}


//当鼠标左键被按下时，移动主窗口
void Widget::mouseMoveEvent(QMouseEvent *e)
{
    if (mousePressed && (e->buttons() && Qt::LeftButton) && !max) {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

//当鼠标左键被按下时，获取主窗口左上角的位置
void Widget::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton) {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void Widget::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

void Widget::on_btnMenu_Close_clicked()
{

    LoginDialog* logindialog = new LoginDialog();
    logindialog->show();

    this->close();

    //qApp->exit();
}

//管理界面最大化
void Widget::on_btnMenu_Max_clicked()
{

    if (max)
    {
        this->setGeometry(location);
        IconHelper::Instance()->SetIcon(ui->btnMenu_Max, QChar(0xf096), 10);
        ui->btnMenu_Max->setToolTip("最大化");
    }
    else
    {
        location = this->geometry();
        this->setGeometry(qApp->desktop()->availableGeometry());
        IconHelper::Instance()->SetIcon(ui->btnMenu_Max, QChar(0xf079), 10);
        ui->btnMenu_Max->setToolTip("还原");
    }
    max = !max;
}

//管理界面最小化
void Widget::on_btnMenu_Min_clicked()
{
    this->showMinimized();
}

void Widget::InitStyle()
{
    //设置窗体标题栏隐藏
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);
    this->setMinimumSize(1000,600);
    location = this->geometry();
    max = false;
    mousePressed = false;
    //安装事件监听器,让标题栏识别鼠标双击
    ui->lab_Title->installEventFilter(this);

    IconHelper::Instance()->SetIcon(ui->btnMenu_Close, QChar(0xf00d), 10);
    IconHelper::Instance()->SetIcon(ui->btnMenu_Max, QChar(0xf096), 10);
    IconHelper::Instance()->SetIcon(ui->btnMenu_Min, QChar(0xf068), 10);
    IconHelper::Instance()->SetIcon(ui->btnMenu, QChar(0xf0c9), 10);
    IconHelper::Instance()->SetIcon(ui->lab_Ico, QChar(0xf015), 12);


    //信号和槽的用代码connect的连接方式
    connect(ui->pbnAsk,SIGNAL(clicked()),this,SLOT(on_pbnAsk_clicked()));
    connect(ui->pbnHint,SIGNAL(clicked()),this,SLOT(on_pbnHint_clicked()));

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(showCurrentTime()));
    timer->start(1000);

    promanage = new ProManage();                        //前台中心管理界面
    constumerInfo = new CostomerRegisterInfoDialog();   //注册客户信息界面
    romminfo = new RommInfo();                         //洗衣机信息界面
    modifyRoom = new ModiftRoomPrice();                 //修改洗衣机价格界面
    checkcustom = new CheckCutomDialog();               //客户登记入住界面
    logblog = new LogBlogDialog();                      //操作日志界面
    modifypwd = new ModifyPwdDialog();                  //修改密码界面
    roompicture = new RoomPicDialog();                  //展示洗衣机照片界面
    backdatabase = new BackupDatanaseDialog();          //数据库备份界面
    checkoutRoom = new CheckOutDialog();                //顾客取衣服界面


    //outinfo在widget.h中定义了，上面的变量也是
    outinfo = new Out();//取衣服记录界面

    //添加到堆栈窗口中，以便进行切换，后面代码用setCurrentIndex()切换界面
    ui->stackedWidget->addWidget(promanage);            //0
    ui->stackedWidget->addWidget(constumerInfo);        //1
    ui->stackedWidget->addWidget(romminfo);             //2
    ui->stackedWidget->addWidget(modifyRoom);           //3
    ui->stackedWidget->addWidget(checkcustom);          //4
    ui->stackedWidget->addWidget(logblog);              //5
    ui->stackedWidget->addWidget(modifypwd);            //6
    ui->stackedWidget->addWidget(roompicture);          //7
    ui->stackedWidget->addWidget(backdatabase);         //8
    ui->stackedWidget->addWidget(checkoutRoom);         //9

    ui->stackedWidget->addWidget(outinfo);         //10取衣服记录界面out.ui，是setCurrentIndex(12)


    ui->label_CompanyName->setText(tr("洗衣店管理系统"));
    ui->label_CurrentUser->setText(QString(tr("当前用户:%1【%2】")).arg(Myapp::CurrentUserName).arg("管理员"));
    ui->label_SoftTime->setText(QString(tr("已运行:0天0时0分0秒")));
}

void Widget::on_pbnAsk_clicked()
{

    ui->stackedWidget->setCurrentIndex(2);
}

void Widget::on_pbnError_clicked()
{
    //myHelper::ShowMessageBoxError("功能开发中");
}

//取衣服记录界面out.ui
void Widget::on_pbnHint_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}


int day = 0;
int hour = 0;
int minute = 0;
int second = 0;
/*
 *函数功能：显示系统时间
 *输入参数：无
 *输出参数：无
 *返回值：无
 *说明：显示时间的槽函数，用来显示当前系统的时间和软件运行的时间
*/
void Widget::showCurrentTime()
{
    second++;
    if(second == 60)
    {
        minute++;
        second = 0;
    }
    if(minute == 60)
    {
        hour++;
        minute = 0;
    }
    if(hour == 24)
    {
        day++;
        hour = 0;
    }
    ui->label_CurrentTime->setText(QDateTime::currentDateTime().toString(tr("当前时间:yyyy年MM月dd日 dddd HH:mm:ss")));
    ui->label_SoftTime->setText(QString(tr("已运行:%1天%2时%3分%4秒")).arg(day).arg(hour).arg(minute).arg(second));
}

/*
 *函数功能：显示已经注册客户信息
*/
void Widget::on_pbnRegisterInfo_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

/*
 *函数功能：显示房间信息(房间的介绍)
*/
void Widget::on_pbnRoomInfo_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

/*
 *函数功能：修改洗衣机价格信息
*/
void Widget::on_pbnModify_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

/*
 *函数功能：修改当前用户密码
*/
void Widget::on_pbnModiftPwd_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

/*
 *函数功能：来客登记
 *说明：用于登记住店客人信息
*/
void Widget::on_pbnCheck_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

/*
 *函数功能：显示登录日志
*/
void Widget::on_pbnLonBlog_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

/*
 *函数功能：显示房间外观
*/
void Widget::on_pbnRoomLock_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

/*
 *函数功能：返回主页
*/
void Widget::on_pbnbackhome_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_pbnBackDatabase_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

/*
 *函数功能：顾客取衣服界面
*/
void Widget::on_pbnCheckOut_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

/*
 *函数功能：使用帮助
*/
void Widget::on_pbnHelp_clicked()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/Administrator/Desktop/HotelManagesys/help/help.CHM"));
    qDebug() <<"open help info";
}
