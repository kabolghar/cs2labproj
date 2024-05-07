/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *login2;
    QLabel *loginerror;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *usernamel;
    QLabel *label_2;
    QLineEdit *passwordl;
    QPushButton *backtoregister;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(339, 199);
        login2 = new QPushButton(login);
        login2->setObjectName("login2");
        login2->setGeometry(QRect(190, 140, 83, 29));
        loginerror = new QLabel(login);
        loginerror->setObjectName("loginerror");
        loginerror->setGeometry(QRect(20, 90, 191, 31));
        layoutWidget = new QWidget(login);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 196, 65));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        usernamel = new QLineEdit(layoutWidget);
        usernamel->setObjectName("usernamel");

        gridLayout->addWidget(usernamel, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        passwordl = new QLineEdit(layoutWidget);
        passwordl->setObjectName("passwordl");
        passwordl->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordl, 1, 1, 1, 1);

        backtoregister = new QPushButton(login);
        backtoregister->setObjectName("backtoregister");
        backtoregister->setGeometry(QRect(30, 140, 83, 29));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        login2->setText(QCoreApplication::translate("login", "Login", nullptr));
        loginerror->setText(QCoreApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" color:#ff2600;\">Incorrect Credentials</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("login", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Password", nullptr));
        backtoregister->setText(QCoreApplication::translate("login", "register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
