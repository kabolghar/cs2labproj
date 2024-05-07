/********************************************************************************
** Form generated from reading UI file 'adminplat.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPLAT_H
#define UI_ADMINPLAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminplat
{
public:
    QLabel *incorrect;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *adminPass;
    QPushButton *pushButton;

    void setupUi(QDialog *adminplat)
    {
        if (adminplat->objectName().isEmpty())
            adminplat->setObjectName("adminplat");
        adminplat->resize(281, 115);
        incorrect = new QLabel(adminplat);
        incorrect->setObjectName("incorrect");
        incorrect->setGeometry(QRect(70, 90, 131, 16));
        layoutWidget = new QWidget(adminplat);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 265, 71));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        adminPass = new QLineEdit(layoutWidget);
        adminPass->setObjectName("adminPass");
        adminPass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(adminPass, 1, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);


        retranslateUi(adminplat);

        QMetaObject::connectSlotsByName(adminplat);
    } // setupUi

    void retranslateUi(QDialog *adminplat)
    {
        adminplat->setWindowTitle(QCoreApplication::translate("adminplat", "Dialog", nullptr));
        incorrect->setText(QCoreApplication::translate("adminplat", "<html><head/><body><p align=\"center\"><span style=\" color:#ff2600;\">Incorrect Credentials</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("adminplat", "<html><head/><body><p><span style=\" font-weight:700;\">Enter Admin Password:</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("adminplat", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminplat: public Ui_adminplat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPLAT_H
