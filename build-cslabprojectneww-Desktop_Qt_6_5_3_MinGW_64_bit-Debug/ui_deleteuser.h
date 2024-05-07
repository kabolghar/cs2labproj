/********************************************************************************
** Form generated from reading UI file 'deleteuser.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEUSER_H
#define UI_DELETEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteuser
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *userDelete;
    QPushButton *deleteButton;

    void setupUi(QDialog *deleteuser)
    {
        if (deleteuser->objectName().isEmpty())
            deleteuser->setObjectName("deleteuser");
        deleteuser->resize(227, 88);
        layoutWidget = new QWidget(deleteuser);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 204, 53));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::SpanningRole, label);

        userDelete = new QLineEdit(layoutWidget);
        userDelete->setObjectName("userDelete");

        formLayout->setWidget(1, QFormLayout::LabelRole, userDelete);

        deleteButton = new QPushButton(layoutWidget);
        deleteButton->setObjectName("deleteButton");

        formLayout->setWidget(1, QFormLayout::FieldRole, deleteButton);


        retranslateUi(deleteuser);

        QMetaObject::connectSlotsByName(deleteuser);
    } // setupUi

    void retranslateUi(QDialog *deleteuser)
    {
        deleteuser->setWindowTitle(QCoreApplication::translate("deleteuser", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("deleteuser", "<html><head/><body><p><span style=\" font-weight:700;\">Enter Username to Delete:</span></p></body></html>", nullptr));
        deleteButton->setText(QCoreApplication::translate("deleteuser", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteuser: public Ui_deleteuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEUSER_H
