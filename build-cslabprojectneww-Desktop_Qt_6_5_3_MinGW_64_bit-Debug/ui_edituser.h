/********************************************************************************
** Form generated from reading UI file 'edituser.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITUSER_H
#define UI_EDITUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edituser
{
public:
    QLabel *label_6;
    QPushButton *saveButton;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *newName;
    QLabel *label_4;
    QLineEdit *newEmail;
    QLabel *label_5;
    QLineEdit *newPass;
    QLineEdit *newUser;
    QLineEdit *oldUser;

    void setupUi(QDialog *edituser)
    {
        if (edituser->objectName().isEmpty())
            edituser->setObjectName("edituser");
        edituser->resize(282, 225);
        label_6 = new QLabel(edituser);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 201, 16));
        saveButton = new QPushButton(edituser);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(90, 190, 100, 32));
        layoutWidget = new QWidget(edituser);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 259, 147));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        newName = new QLineEdit(layoutWidget);
        newName->setObjectName("newName");

        formLayout->setWidget(2, QFormLayout::FieldRole, newName);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        newEmail = new QLineEdit(layoutWidget);
        newEmail->setObjectName("newEmail");

        formLayout->setWidget(3, QFormLayout::FieldRole, newEmail);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        newPass = new QLineEdit(layoutWidget);
        newPass->setObjectName("newPass");

        formLayout->setWidget(4, QFormLayout::FieldRole, newPass);

        newUser = new QLineEdit(layoutWidget);
        newUser->setObjectName("newUser");

        formLayout->setWidget(1, QFormLayout::FieldRole, newUser);

        oldUser = new QLineEdit(layoutWidget);
        oldUser->setObjectName("oldUser");

        formLayout->setWidget(0, QFormLayout::FieldRole, oldUser);


        retranslateUi(edituser);

        QMetaObject::connectSlotsByName(edituser);
    } // setupUi

    void retranslateUi(QDialog *edituser)
    {
        edituser->setWindowTitle(QCoreApplication::translate("edituser", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("edituser", "<html><head/><body><p><span style=\" font-weight:700;\">Only Enter Fields To Be Edited:</span></p></body></html>", nullptr));
        saveButton->setText(QCoreApplication::translate("edituser", "Save", nullptr));
        label->setText(QCoreApplication::translate("edituser", "Enter Old Username:", nullptr));
        label_2->setText(QCoreApplication::translate("edituser", "New Username:", nullptr));
        label_3->setText(QCoreApplication::translate("edituser", "New Name:", nullptr));
        label_4->setText(QCoreApplication::translate("edituser", "New Email:", nullptr));
        label_5->setText(QCoreApplication::translate("edituser", "New Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edituser: public Ui_edituser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITUSER_H
