/********************************************************************************
** Form generated from reading UI file 'deleteprod.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPROD_H
#define UI_DELETEPROD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteprod
{
public:
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *prodName;
    QPushButton *deleteButton;

    void setupUi(QDialog *deleteprod)
    {
        if (deleteprod->objectName().isEmpty())
            deleteprod->setObjectName("deleteprod");
        deleteprod->resize(233, 81);
        widget = new QWidget(deleteprod);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 211, 53));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::SpanningRole, label);

        prodName = new QLineEdit(widget);
        prodName->setObjectName("prodName");

        formLayout->setWidget(1, QFormLayout::LabelRole, prodName);

        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName("deleteButton");

        formLayout->setWidget(1, QFormLayout::FieldRole, deleteButton);


        retranslateUi(deleteprod);

        QMetaObject::connectSlotsByName(deleteprod);
    } // setupUi

    void retranslateUi(QDialog *deleteprod)
    {
        deleteprod->setWindowTitle(QCoreApplication::translate("deleteprod", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("deleteprod", "<html><head/><body><p><span style=\" font-weight:700;\">Enter Name of Product to Delete:</span></p></body></html>", nullptr));
        deleteButton->setText(QCoreApplication::translate("deleteprod", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteprod: public Ui_deleteprod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPROD_H
