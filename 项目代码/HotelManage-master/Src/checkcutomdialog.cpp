#include "checkcutomdialog.h"
#include "ui_checkcutomdialog.h"
#include "app/myhelper.h"

#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QDate>

#include "checkoutdialog.h"



CheckCutomDialog::CheckCutomDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckCutomDialog)
{
    ui->setupUi(this);
    this->InitForm();

}

CheckCutomDialog::~CheckCutomDialog()
{
    delete ui;
}

void CheckCutomDialog::InitForm()
{
    ui->lineEditCustomOrderId->setEnabled(false);


    //正则表达式，对输入的内容进行限制，电话号码11位,身份证18位,房间号4位，房间类型编号1位
    QRegExp rxPhone("\\d{11}$");
    //QRegExp rxIdcard("\\d{18}$");
    //QRegExp rxRoomID("\\d{4}$");
    QRegExp rxRoomTypeId("\\d{1}$");

    QRegExpValidator *regPhone = new QRegExpValidator(rxPhone,this);
    //QRegExpValidator *regIdcard = new QRegExpValidator(rxIdcard,this);
    //QRegExpValidator *regRoomId = new QRegExpValidator(rxRoomID,this);
    QRegExpValidator *regRoomTypeId = new QRegExpValidator(rxRoomTypeId,this);

    ui->lineEditCustomPhone->setValidator(regPhone);
    //ui->lineEditCustomIcard->setValidator(regIdcard);
    //ui->lineEditRoomId->setValidator(regRoomId);
    ui->lineEditroomTypeId->setValidator(regRoomTypeId);
}

void CheckCutomDialog::on_pbnCheckOk_clicked()
{
    QString roomId = ui->lineEditRoomId->text();
    QString roomTypeId = ui->lineEditroomTypeId->text();
    QString customerName = ui->lineEditCustomName->text();
    QString roomphone = ui->lineEditCustomPhone->text();
    QString roomPrice = ui->lineEditCustomCash->text();
    //QString roomCustomOrderId = ui->lineEditCustomOrderId->text();
    QString Remark = ui->lineEditRemark->text();
    QString currentdatetime = QDateTime::currentDateTime().toString("yyyy-MM-dd-hh:mm");
    QString serialNumber = "2021"+currentdatetime;



    QSqlQuery query;

    if(roomId.isEmpty() || roomTypeId.isEmpty()
            || customerName.isEmpty() || roomPrice.isEmpty())
    {
        myHelper::ShowMessageBoxInfo(tr("必须填满带*字段"));
    }
    else
    {
        QString sqlsql = "INSERT INTO book (Id,roomno,BookName,roomtypeid,BookTimeFrom,Price,phone,BookRemark) VALUES ('"+serialNumber+"', '"+roomId+"', '"+customerName+"', '"+roomTypeId+"', '"+currentdatetime+"', '"+roomPrice+"', '"+roomphone+"', '"+Remark+"')";
        qDebug() <<sqlsql;
        qDebug()<<query.exec("INSERT INTO book (Id,roomno,BookName,roomtypeid,BookTimeFrom,Price,phone,BookRemark) VALUES ('"+serialNumber+"', '"+roomId+"', '"+customerName+"', '"+roomTypeId+"', '"+currentdatetime+"', '"+roomPrice+"', '"+roomphone+"', '"+Remark+"')");
        qDebug() <<"update!";

        QString sql = "update room set RoomState = '满' where RoomNo='"+roomId+"';";
        qDebug() <<sql;
        query.exec(sql);
        qDebug() <<"update ok!";



        myHelper::ShowMessageBoxInfo(tr("预定洗衣机成功!"));

        //this->UpdateRoomeTableInfo("Room","满",roomId);

        myHelper::MyLoginBlog("log","来客登记","客人预定洗衣机","管理员");

    }


}


/*
 *函数功能：更新房间状态
 *输入参数
*/
void CheckCutomDialog::UpdateRoomeTableInfo(QString tablename, QString updatename,QString roomNo)
{
    QString sql = "update "+tablename+" set RoomState = '"+updatename+"' where RoomNo ='"+roomNo+"';";
    qDebug() <<sql;
    QSqlQuery query;
    query.exec(sql);
    qDebug() <<"update roomstate success";
}


