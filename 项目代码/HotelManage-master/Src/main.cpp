/***************************************************************
 *Copyright(c) 2014-2015 Company By LiQi
 *All rights reserved.
 *文件名称：主程序入口文件
 *简要描述：打开数据库，加载程序启动的各个配置参数
 *
 *当前版本：V1.0
 *作者：Kelvin Li
 *创作日期：2014/12
 *说明：酒店管理系统启动配置
 *版权归creazylq所有，转载请注明出处并保持作品完整性
 *Email：creazylq@163.com
******************************************************************/
#include <QApplication>
#include "app/myhelper.h"
#include "logindialog.h"
#include "app/Connection.h"
#include "app/myapp.h"
//
//
#include <QSqlQuery>  //在含有sql语句的文件中一定要加上#include <QtSql>头文件

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //myHelper::SetGBK2312Code();
    QTextCodec *codec = QTextCodec::codecForName("System");
    QTextCodec::setCodecForLocale(codec);

    //QTextCodec::setCodecForCStrings(codec);
    //QTextCodec::setCodecForTr(codec);

    myHelper::SetStyle("blue");//蓝色风格   myHelper.h里的函数

    QTranslator translator;             //加载中文字符
    translator.load(":/image/qt_zh_CN.qm");//Qt4用QTranslator加载qt_zh_CN.qm之后，QMessageBox显示的对话框按钮，如："Yes"应该翻译为"是"，
    a.installTranslator(&translator);


    LoginDialog login;


    if(!createConnection())  //connection.h里的函数，用来连接mysql数据库
    {
        myHelper::ShowMessageBoxError(QObject::tr("数据库打开失败，无法登录"));
        //return 1;
        //this->close();
    }

    login.show();

    //closeConnection();
    return a.exec();
}
