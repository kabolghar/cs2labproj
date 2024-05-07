/********************************************************************************
** Form generated from reading UI file 'adminsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSETTINGS_H
#define UI_ADMINSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminSettings
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *widget;
    QFormLayout *formLayout;
    QPushButton *addUser;
    QPushButton *editUser;
    QPushButton *deleteUser;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QFormLayout *formLayout_2;
    QPushButton *addProd;
    QPushButton *editProd;
    QPushButton *deleteProd;

    void setupUi(QDialog *adminSettings)
    {
        if (adminSettings->objectName().isEmpty())
            adminSettings->setObjectName("adminSettings");
        adminSettings->resize(322, 257);
        label = new QLabel(adminSettings);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 111, 16));
        groupBox = new QGroupBox(adminSettings);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 50, 291, 81));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(7, 20, 272, 56));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        addUser = new QPushButton(widget);
        addUser->setObjectName("addUser");

        formLayout->setWidget(0, QFormLayout::LabelRole, addUser);

        editUser = new QPushButton(widget);
        editUser->setObjectName("editUser");

        formLayout->setWidget(0, QFormLayout::FieldRole, editUser);

        deleteUser = new QPushButton(widget);
        deleteUser->setObjectName("deleteUser");

        formLayout->setWidget(1, QFormLayout::SpanningRole, deleteUser);

        groupBox_2 = new QGroupBox(adminSettings);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 150, 301, 81));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 20, 299, 56));
        formLayout_2 = new QFormLayout(widget1);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        addProd = new QPushButton(widget1);
        addProd->setObjectName("addProd");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, addProd);

        editProd = new QPushButton(widget1);
        editProd->setObjectName("editProd");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, editProd);

        deleteProd = new QPushButton(widget1);
        deleteProd->setObjectName("deleteProd");

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, deleteProd);


        retranslateUi(adminSettings);

        QMetaObject::connectSlotsByName(adminSettings);
    } // setupUi

    void retranslateUi(QDialog *adminSettings)
    {
        adminSettings->setWindowTitle(QCoreApplication::translate("adminSettings", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("adminSettings", "<html><head/><body><p><span style=\" font-weight:700;\">Select a Function:</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("adminSettings", "User Settings", nullptr));
        addUser->setText(QCoreApplication::translate("adminSettings", "Add a New User", nullptr));
        editUser->setText(QCoreApplication::translate("adminSettings", "Edit Existing User", nullptr));
        deleteUser->setText(QCoreApplication::translate("adminSettings", "Delete User", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("adminSettings", "Product Settings", nullptr));
        addProd->setText(QCoreApplication::translate("adminSettings", "Add New Product", nullptr));
        editProd->setText(QCoreApplication::translate("adminSettings", "Edit Existing Product", nullptr));
        deleteProd->setText(QCoreApplication::translate("adminSettings", "Delete Product", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminSettings: public Ui_adminSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSETTINGS_H
