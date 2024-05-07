/********************************************************************************
** Form generated from reading UI file 'userpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPAGE_H
#define UI_USERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userpage
{
public:
    QPushButton *adminbutton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *loginclicked;
    QPushButton *registerclicked;
    QLabel *labelIcon;

    void setupUi(QDialog *userpage)
    {
        if (userpage->objectName().isEmpty())
            userpage->setObjectName("userpage");
        userpage->resize(358, 205);
        adminbutton = new QPushButton(userpage);
        adminbutton->setObjectName("adminbutton");
        adminbutton->setGeometry(QRect(40, 160, 121, 32));
        layoutWidget = new QWidget(userpage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 120, 271, 32));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        loginclicked = new QPushButton(layoutWidget);
        loginclicked->setObjectName("loginclicked");

        gridLayout->addWidget(loginclicked, 0, 0, 1, 1);

        registerclicked = new QPushButton(layoutWidget);
        registerclicked->setObjectName("registerclicked");

        gridLayout->addWidget(registerclicked, 0, 1, 1, 1);

        labelIcon = new QLabel(userpage);
        labelIcon->setObjectName("labelIcon");
        labelIcon->setGeometry(QRect(130, 10, 181, 91));

        retranslateUi(userpage);

        QMetaObject::connectSlotsByName(userpage);
    } // setupUi

    void retranslateUi(QDialog *userpage)
    {
        userpage->setWindowTitle(QCoreApplication::translate("userpage", "Dialog", nullptr));
        adminbutton->setText(QCoreApplication::translate("userpage", "Admin", nullptr));
        loginclicked->setText(QCoreApplication::translate("userpage", "Login", nullptr));
        registerclicked->setText(QCoreApplication::translate("userpage", "Register", nullptr));
        labelIcon->setText(QCoreApplication::translate("userpage", "<html><head/><body><p align=\"center\">Image</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userpage: public Ui_userpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPAGE_H
