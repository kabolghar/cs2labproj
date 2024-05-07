/********************************************************************************
** Form generated from reading UI file 'editproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPRODUCT_H
#define UI_EDITPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editproduct
{
public:
    QLabel *label;
    QPushButton *saveProd;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *oldName;
    QLabel *label_5;
    QLineEdit *newName;
    QLabel *label_3;
    QLineEdit *newPrice;
    QLabel *label_4;
    QLineEdit *newAva;
    QLabel *label_6;
    QComboBox *newCat;

    void setupUi(QDialog *editproduct)
    {
        if (editproduct->objectName().isEmpty())
            editproduct->setObjectName("editproduct");
        editproduct->resize(328, 263);
        label = new QLabel(editproduct);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 231, 16));
        saveProd = new QPushButton(editproduct);
        saveProd->setObjectName("saveProd");
        saveProd->setGeometry(QRect(110, 220, 100, 32));
        widget = new QWidget(editproduct);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 50, 282, 152));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        oldName = new QLineEdit(widget);
        oldName->setObjectName("oldName");

        formLayout->setWidget(0, QFormLayout::FieldRole, oldName);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        newName = new QLineEdit(widget);
        newName->setObjectName("newName");

        formLayout->setWidget(1, QFormLayout::FieldRole, newName);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        newPrice = new QLineEdit(widget);
        newPrice->setObjectName("newPrice");

        formLayout->setWidget(2, QFormLayout::FieldRole, newPrice);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        newAva = new QLineEdit(widget);
        newAva->setObjectName("newAva");

        formLayout->setWidget(3, QFormLayout::FieldRole, newAva);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        newCat = new QComboBox(widget);
        newCat->setObjectName("newCat");

        formLayout->setWidget(4, QFormLayout::FieldRole, newCat);


        retranslateUi(editproduct);

        QMetaObject::connectSlotsByName(editproduct);
    } // setupUi

    void retranslateUi(QDialog *editproduct)
    {
        editproduct->setWindowTitle(QCoreApplication::translate("editproduct", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("editproduct", "<html><head/><body><p><span style=\" font-weight:700;\">Only Enter Fields to be Edited:</span></p></body></html>", nullptr));
        saveProd->setText(QCoreApplication::translate("editproduct", "Save", nullptr));
        label_2->setText(QCoreApplication::translate("editproduct", "Name of Product to Edit:", nullptr));
        label_5->setText(QCoreApplication::translate("editproduct", "New Name:", nullptr));
        label_3->setText(QCoreApplication::translate("editproduct", "New Price:", nullptr));
        label_4->setText(QCoreApplication::translate("editproduct", "New Availability:", nullptr));
        label_6->setText(QCoreApplication::translate("editproduct", "New Category:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editproduct: public Ui_editproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPRODUCT_H
