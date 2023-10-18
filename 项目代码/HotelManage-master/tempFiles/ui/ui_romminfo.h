/********************************************************************************
** Form generated from reading UI file 'romminfo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROMMINFO_H
#define UI_ROMMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RommInfo
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *RommInfo)
    {
        if (RommInfo->objectName().isEmpty())
            RommInfo->setObjectName(QStringLiteral("RommInfo"));
        RommInfo->resize(1314, 536);
        verticalLayout_4 = new QVBoxLayout(RommInfo);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_3 = new QGroupBox(RommInfo);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        groupBox_3->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(180, 120));
        label_4->setMaximumSize(QSize(180, 120));
        label_4->setStyleSheet(QStringLiteral(""));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/image/room/xyj01.jpg")));

        horizontalLayout->addWidget(label_4);

        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox = new QGroupBox(RommInfo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(180, 120));
        label_5->setMaximumSize(QSize(180, 120));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/image/room/double room.jpg);"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/image/room/xyj02.jpg")));

        horizontalLayout_2->addWidget(label_5);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(RommInfo);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(180, 120));
        label_6->setMaximumSize(QSize(180, 120));
        label_6->setStyleSheet(QStringLiteral("background-image: url(:/image/room/xyj03.jpg);"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/image/room/xyj03.jpg")));

        horizontalLayout_4->addWidget(label_6);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(78, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(groupBox_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(RommInfo);

        QMetaObject::connectSlotsByName(RommInfo);
    } // setupUi

    void retranslateUi(QWidget *RommInfo)
    {
        RommInfo->setWindowTitle(QApplication::translate("RommInfo", "Form", 0));
        groupBox_3->setTitle(QApplication::translate("RommInfo", "\345\205\250\350\207\252\345\212\250\347\253\213\345\274\217\346\260\264\346\264\227\346\234\272", 0));
        label_4->setText(QString());
        label->setText(QApplication::translate("RommInfo", "\346\234\254\350\256\276\345\244\207\351\207\207\347\224\250\345\205\250\347\224\265\350\204\221\346\216\247\345\210\266\345\231\250\357\274\214\350\207\252\345\212\250\345\214\226\347\250\213\345\272\246\351\253\230\343\200\201\345\256\211\345\205\250\345\217\257\351\235\240\357\274\214\345\217\257\n"
"\345\256\236\347\216\260\345\210\235\346\264\227\343\200\201\346\264\227\346\266\244\343\200\201\346\266\210\346\257\222\343\200\201\350\277\207\346\270\205\343\200\201\346\274\202\347\231\275\343\200\201\350\204\261\346\260\264\347\255\211\345\205\250\350\277\207\347\250\213\347\232\204\350\207\252\n"
"\345\212\250\345\214\226\343\200\202", 0));
        groupBox->setTitle(QApplication::translate("RommInfo", "\345\205\250\345\260\201\351\227\255\347\237\263\346\262\271\345\271\262\346\264\227\346\234\272", 0));
        label_5->setText(QString());
        label_2->setText(QApplication::translate("RommInfo", "\351\207\207\347\224\250\346\226\260\346\212\200\346\234\257\347\240\224\345\210\266\345\274\200\345\217\221\347\232\204\346\226\260\344\270\200\344\273\243\345\260\201\351\227\255\345\274\217\347\216\257\344\277\235\345\236\213\347\237\263\346\262\271\345\271\262\346\264\227\346\234\272\357\274\214\n"
"\345\205\267\346\234\211\350\266\205\351\253\230\347\232\204\350\204\261\345\211\202\347\216\207\345\222\214\347\250\263\345\256\232\346\200\247", 0));
        groupBox_2->setTitle(QApplication::translate("RommInfo", "\347\253\213\345\274\217\345\267\245\344\270\232\346\264\227\350\241\243\346\234\272", 0));
        label_6->setText(QString());
        label_3->setText(QApplication::translate("RommInfo", "\346\266\262\347\274\270\351\207\207\347\224\250\347\211\271\346\256\212\351\230\262\350\205\220\345\244\204\347\220\206\357\274\214\347\273\217\344\271\205\350\200\220\347\224\250\343\200\202\346\225\264\344\270\252\346\264\227\346\266\244\347\274\270\347\263\273\347\273\237\346\202\254\347\251\272\n"
"\345\256\211\350\243\205\345\234\250\345\274\271\347\260\247\345\222\214\345\207\217\351\234\207\350\243\205\347\275\256\344\270\212\345\207\217\351\200\237\351\234\207\350\276\27695%\357\274\214\344\275\277\347\224\250\346\227\266\346\227\240\351\234\200\345\234\260\345\237\272\343\200\202", 0));
    } // retranslateUi

};

namespace Ui {
    class RommInfo: public Ui_RommInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROMMINFO_H
