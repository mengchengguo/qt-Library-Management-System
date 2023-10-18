/********************************************************************************
** Form generated from reading UI file 'outroom.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTROOM_H
#define UI_OUTROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_outroom
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *outroom)
    {
        if (outroom->objectName().isEmpty())
            outroom->setObjectName(QStringLiteral("outroom"));
        outroom->resize(447, 343);
        pushButton = new QPushButton(outroom);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 160, 93, 28));

        retranslateUi(outroom);

        QMetaObject::connectSlotsByName(outroom);
    } // setupUi

    void retranslateUi(QWidget *outroom)
    {
        outroom->setWindowTitle(QApplication::translate("outroom", "Form", 0));
        pushButton->setText(QApplication::translate("outroom", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class outroom: public Ui_outroom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTROOM_H
