/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_Ico;
    QLabel *lab_Title;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMenu_Close;
    QGroupBox *groupBox;
    QLabel *labUserName;
    QLabel *labUserPwd;
    QLineEdit *CustomerPwd;
    QLineEdit *CustomerName;
    QLineEdit *CustomerRePwd;
    QLabel *labUserName_2;
    QLabel *labUserPwd_2;
    QComboBox *comboBoxSex;
    QLineEdit *CustomerAddress;
    QLineEdit *CustomerPhone;
    QLabel *labUserPwd_3;
    QLabel *labUserPwd_4;
    QLabel *labUserPwd_5;
    QDateEdit *CustomerDateTime;
    QLabel *labUserPwd_6;
    QLineEdit *CustomerRemark;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QLabel *label;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QStringLiteral("RegisterDialog"));
        RegisterDialog->resize(547, 444);
        widget_title = new QWidget(RegisterDialog);
        widget_title->setObjectName(QStringLiteral("widget_title"));
        widget_title->setGeometry(QRect(0, 0, 548, 34));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(100, 33));
        widget_title->setMouseTracking(false);
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lab_Ico = new QLabel(widget_title);
        lab_Ico->setObjectName(QStringLiteral("lab_Ico"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_Ico->sizePolicy().hasHeightForWidth());
        lab_Ico->setSizePolicy(sizePolicy1);
        lab_Ico->setMinimumSize(QSize(30, 0));
        lab_Ico->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lab_Ico);

        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QStringLiteral("lab_Title"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lab_Title->setFont(font);
        lab_Title->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lab_Title);

        widget_menu = new QWidget(widget_title);
        widget_menu->setObjectName(QStringLiteral("widget_menu"));
        sizePolicy1.setHeightForWidth(widget_menu->sizePolicy().hasHeightForWidth());
        widget_menu->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget_menu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnMenu_Close = new QPushButton(widget_menu);
        btnMenu_Close->setObjectName(QStringLiteral("btnMenu_Close"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy3);
        btnMenu_Close->setMinimumSize(QSize(40, 0));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Close);


        horizontalLayout_2->addWidget(widget_menu);

        groupBox = new QGroupBox(RegisterDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(16, 90, 515, 285));
        labUserName = new QLabel(groupBox);
        labUserName->setObjectName(QStringLiteral("labUserName"));
        labUserName->setGeometry(QRect(0, 23, 71, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        labUserName->setFont(font1);
        labUserPwd = new QLabel(groupBox);
        labUserPwd->setObjectName(QStringLiteral("labUserPwd"));
        labUserPwd->setGeometry(QRect(12, 63, 51, 31));
        labUserPwd->setFont(font1);
        CustomerPwd = new QLineEdit(groupBox);
        CustomerPwd->setObjectName(QStringLiteral("CustomerPwd"));
        CustomerPwd->setGeometry(QRect(69, 63, 161, 28));
        CustomerPwd->setFont(font1);
        CustomerPwd->setEchoMode(QLineEdit::Password);
        CustomerName = new QLineEdit(groupBox);
        CustomerName->setObjectName(QStringLiteral("CustomerName"));
        CustomerName->setGeometry(QRect(70, 23, 161, 28));
        CustomerName->setFont(font1);
        CustomerName->setEchoMode(QLineEdit::Normal);
        CustomerRePwd = new QLineEdit(groupBox);
        CustomerRePwd->setObjectName(QStringLiteral("CustomerRePwd"));
        CustomerRePwd->setGeometry(QRect(350, 63, 161, 28));
        CustomerRePwd->setFont(font1);
        CustomerRePwd->setEchoMode(QLineEdit::Password);
        labUserName_2 = new QLabel(groupBox);
        labUserName_2->setObjectName(QStringLiteral("labUserName_2"));
        labUserName_2->setGeometry(QRect(250, 22, 51, 31));
        labUserName_2->setFont(font1);
        labUserPwd_2 = new QLabel(groupBox);
        labUserPwd_2->setObjectName(QStringLiteral("labUserPwd_2"));
        labUserPwd_2->setGeometry(QRect(250, 63, 91, 30));
        labUserPwd_2->setFont(font1);
        comboBoxSex = new QComboBox(groupBox);
        comboBoxSex->setObjectName(QStringLiteral("comboBoxSex"));
        comboBoxSex->setGeometry(QRect(350, 23, 71, 22));
        CustomerAddress = new QLineEdit(groupBox);
        CustomerAddress->setObjectName(QStringLiteral("CustomerAddress"));
        CustomerAddress->setGeometry(QRect(69, 152, 391, 28));
        CustomerAddress->setFont(font1);
        CustomerAddress->setEchoMode(QLineEdit::Normal);
        CustomerPhone = new QLineEdit(groupBox);
        CustomerPhone->setObjectName(QStringLiteral("CustomerPhone"));
        CustomerPhone->setGeometry(QRect(67, 113, 161, 28));
        CustomerPhone->setFont(font1);
        CustomerPhone->setEchoMode(QLineEdit::Normal);
        labUserPwd_3 = new QLabel(groupBox);
        labUserPwd_3->setObjectName(QStringLiteral("labUserPwd_3"));
        labUserPwd_3->setGeometry(QRect(11, 150, 41, 31));
        labUserPwd_3->setFont(font1);
        labUserPwd_4 = new QLabel(groupBox);
        labUserPwd_4->setObjectName(QStringLiteral("labUserPwd_4"));
        labUserPwd_4->setGeometry(QRect(12, 113, 51, 31));
        labUserPwd_4->setFont(font1);
        labUserPwd_5 = new QLabel(groupBox);
        labUserPwd_5->setObjectName(QStringLiteral("labUserPwd_5"));
        labUserPwd_5->setGeometry(QRect(12, 193, 41, 31));
        labUserPwd_5->setFont(font1);
        CustomerDateTime = new QDateEdit(groupBox);
        CustomerDateTime->setObjectName(QStringLiteral("CustomerDateTime"));
        CustomerDateTime->setGeometry(QRect(350, 112, 121, 22));
        CustomerDateTime->setMinimumSize(QSize(120, 0));
        CustomerDateTime->setFont(font1);
        CustomerDateTime->setCurrentSection(QDateTimeEdit::DaySection);
        CustomerDateTime->setCalendarPopup(true);
        labUserPwd_6 = new QLabel(groupBox);
        labUserPwd_6->setObjectName(QStringLiteral("labUserPwd_6"));
        labUserPwd_6->setGeometry(QRect(250, 110, 91, 31));
        labUserPwd_6->setFont(font1);
        CustomerRemark = new QLineEdit(groupBox);
        CustomerRemark->setObjectName(QStringLiteral("CustomerRemark"));
        CustomerRemark->setGeometry(QRect(65, 200, 411, 51));
        CustomerRemark->setFont(font1);
        btnOk = new QPushButton(RegisterDialog);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        btnOk->setGeometry(QRect(110, 390, 101, 28));
        btnOk->setFont(font1);
        btnOk->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOk->setIcon(icon);
        btnOk->setIconSize(QSize(20, 20));
        btnCancel = new QPushButton(RegisterDialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(270, 390, 101, 28));
        btnCancel->setFont(font1);
        btnCancel->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(20, 20));
        label = new QLabel(RegisterDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 50, 323, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(20);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        QWidget::setTabOrder(CustomerName, comboBoxSex);
        QWidget::setTabOrder(comboBoxSex, CustomerPwd);
        QWidget::setTabOrder(CustomerPwd, CustomerRePwd);
        QWidget::setTabOrder(CustomerRePwd, CustomerPhone);
        QWidget::setTabOrder(CustomerPhone, CustomerDateTime);
        QWidget::setTabOrder(CustomerDateTime, CustomerAddress);
        QWidget::setTabOrder(CustomerAddress, CustomerRemark);
        QWidget::setTabOrder(CustomerRemark, btnOk);
        QWidget::setTabOrder(btnOk, btnCancel);

        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QApplication::translate("RegisterDialog", "Dialog", 0));
        lab_Ico->setText(QString());
        lab_Title->setText(QApplication::translate("RegisterDialog", "\350\207\252\345\212\251\346\264\227\350\241\243\345\272\227\347\256\241\347\220\206\347\263\273\347\273\237", 0));
#ifndef QT_NO_TOOLTIP
        btnMenu_Close->setToolTip(QApplication::translate("RegisterDialog", "\345\205\263\351\227\255", 0));
#endif // QT_NO_TOOLTIP
        btnMenu_Close->setText(QString());
        groupBox->setTitle(QString());
        labUserName->setText(QApplication::translate("RegisterDialog", "\347\224\250\346\210\267\345\220\215\357\274\232*", 0));
        labUserPwd->setText(QApplication::translate("RegisterDialog", "\345\257\206\347\240\201\357\274\232*", 0));
        CustomerPwd->setPlaceholderText(QApplication::translate("RegisterDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        CustomerName->setPlaceholderText(QApplication::translate("RegisterDialog", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", 0));
        CustomerRePwd->setPlaceholderText(QApplication::translate("RegisterDialog", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        labUserName_2->setText(QApplication::translate("RegisterDialog", "\346\200\247\345\210\253\357\274\232*", 0));
        labUserPwd_2->setText(QApplication::translate("RegisterDialog", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232*", 0));
        comboBoxSex->clear();
        comboBoxSex->insertItems(0, QStringList()
         << QApplication::translate("RegisterDialog", "\347\224\267", 0)
         << QApplication::translate("RegisterDialog", "\345\245\263", 0)
        );
        CustomerAddress->setPlaceholderText(QApplication::translate("RegisterDialog", "\350\257\267\350\276\223\345\205\245\350\257\246\347\273\206\345\234\260\345\235\200", 0));
        CustomerPhone->setPlaceholderText(QApplication::translate("RegisterDialog", "\350\257\267\350\276\223\345\205\245\347\224\265\350\257\235", 0));
        labUserPwd_3->setText(QApplication::translate("RegisterDialog", "\345\234\260\345\235\200\357\274\232", 0));
        labUserPwd_4->setText(QApplication::translate("RegisterDialog", "\347\224\265\350\257\235\357\274\232", 0));
        labUserPwd_5->setText(QApplication::translate("RegisterDialog", "\345\244\207\346\263\250\357\274\232", 0));
        labUserPwd_6->setText(QApplication::translate("RegisterDialog", "\346\263\250\345\206\214\346\227\266\351\227\264\357\274\232", 0));
        CustomerRemark->setPlaceholderText(QApplication::translate("RegisterDialog", "\345\217\257\344\270\215\345\241\253\345\206\231", 0));
#ifndef QT_NO_TOOLTIP
        btnOk->setToolTip(QApplication::translate("RegisterDialog", "\347\241\256\350\256\244\346\263\250\345\206\214", 0));
#endif // QT_NO_TOOLTIP
        btnOk->setText(QApplication::translate("RegisterDialog", "\347\241\256\350\256\244(&L)", 0));
#ifndef QT_NO_TOOLTIP
        btnCancel->setToolTip(QApplication::translate("RegisterDialog", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        btnCancel->setWhatsThis(QApplication::translate("RegisterDialog", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        btnCancel->setText(QApplication::translate("RegisterDialog", "\345\217\226\346\266\210(&C)", 0));
        label->setText(QApplication::translate("RegisterDialog", "\345\256\242\346\210\267\346\263\250\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
