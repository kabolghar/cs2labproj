/********************************************************************************
** Form generated from reading UI file 'registrationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONWINDOW_H
#define UI_REGISTRATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registrationwindow
{
public:
    QPushButton *registerclicked;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *fname;
    QLabel *label_2;
    QLineEdit *emailr;
    QLabel *label_3;
    QLineEdit *usernamer;
    QLabel *label_4;
    QLineEdit *passwordr;
    QLabel *emailexists;
    QLabel *usernameexists;

    void setupUi(QDialog *registrationwindow)
    {
        if (registrationwindow->objectName().isEmpty())
            registrationwindow->setObjectName("registrationwindow");
        registrationwindow->resize(370, 223);
        registerclicked = new QPushButton(registrationwindow);
        registerclicked->setObjectName("registerclicked");
        registerclicked->setGeometry(QRect(70, 170, 83, 29));
        layoutWidget = new QWidget(registrationwindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 196, 135));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        fname = new QLineEdit(layoutWidget);
        fname->setObjectName("fname");

        gridLayout->addWidget(fname, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        emailr = new QLineEdit(layoutWidget);
        emailr->setObjectName("emailr");

        gridLayout->addWidget(emailr, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        usernamer = new QLineEdit(layoutWidget);
        usernamer->setObjectName("usernamer");

        gridLayout->addWidget(usernamer, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        passwordr = new QLineEdit(layoutWidget);
        passwordr->setObjectName("passwordr");
        passwordr->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordr, 3, 1, 1, 1);

        emailexists = new QLabel(registrationwindow);
        emailexists->setObjectName("emailexists");
        emailexists->setGeometry(QRect(240, 50, 91, 21));
        usernameexists = new QLabel(registrationwindow);
        usernameexists->setObjectName("usernameexists");
        usernameexists->setGeometry(QRect(240, 90, 111, 21));

        retranslateUi(registrationwindow);

        QMetaObject::connectSlotsByName(registrationwindow);
    } // setupUi

    void retranslateUi(QDialog *registrationwindow)
    {
        registrationwindow->setWindowTitle(QCoreApplication::translate("registrationwindow", "Dialog", nullptr));
        registerclicked->setText(QCoreApplication::translate("registrationwindow", "Register", nullptr));
        label->setText(QCoreApplication::translate("registrationwindow", "Full Name", nullptr));
        label_2->setText(QCoreApplication::translate("registrationwindow", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("registrationwindow", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("registrationwindow", "Password", nullptr));
        emailexists->setText(QCoreApplication::translate("registrationwindow", "<html><head/><body><p><span style=\" color:#ff0000;\">email exists</span></p></body></html>", nullptr));
        usernameexists->setText(QCoreApplication::translate("registrationwindow", "<html><head/><body><p><span style=\" color:#ff0000;\">username exists</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registrationwindow: public Ui_registrationwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWINDOW_H
