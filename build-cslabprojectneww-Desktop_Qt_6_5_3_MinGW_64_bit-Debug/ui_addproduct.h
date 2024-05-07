/********************************************************************************
** Form generated from reading UI file 'addproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCT_H
#define UI_ADDPRODUCT_H

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

class Ui_addproduct
{
public:
    QLabel *label;
    QPushButton *addProd;
    QWidget *widget;
    QFormLayout *formLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *prodName;
    QLabel *label_3;
    QLineEdit *priceProd;
    QLabel *label_4;
    QLineEdit *avaProd;
    QLabel *label_5;
    QComboBox *categoryProd;
    QPushButton *createCat;

    void setupUi(QDialog *addproduct)
    {
        if (addproduct->objectName().isEmpty())
            addproduct->setObjectName("addproduct");
        addproduct->resize(333, 250);
        label = new QLabel(addproduct);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 191, 16));
        addProd = new QPushButton(addproduct);
        addProd->setObjectName("addProd");
        addProd->setGeometry(QRect(110, 200, 100, 32));
        widget = new QWidget(addproduct);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 40, 234, 151));
        formLayout_2 = new QFormLayout(widget);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        prodName = new QLineEdit(widget);
        prodName->setObjectName("prodName");

        formLayout->setWidget(0, QFormLayout::FieldRole, prodName);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        priceProd = new QLineEdit(widget);
        priceProd->setObjectName("priceProd");

        formLayout->setWidget(1, QFormLayout::FieldRole, priceProd);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        avaProd = new QLineEdit(widget);
        avaProd->setObjectName("avaProd");

        formLayout->setWidget(2, QFormLayout::FieldRole, avaProd);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        categoryProd = new QComboBox(widget);
        categoryProd->setObjectName("categoryProd");

        formLayout->setWidget(3, QFormLayout::FieldRole, categoryProd);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, formLayout);

        createCat = new QPushButton(widget);
        createCat->setObjectName("createCat");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, createCat);


        retranslateUi(addproduct);

        QMetaObject::connectSlotsByName(addproduct);
    } // setupUi

    void retranslateUi(QDialog *addproduct)
    {
        addproduct->setWindowTitle(QCoreApplication::translate("addproduct", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addproduct", "Add a Product to the Storefront:", nullptr));
        addProd->setText(QCoreApplication::translate("addproduct", "Add", nullptr));
        label_2->setText(QCoreApplication::translate("addproduct", "Product Name:", nullptr));
        label_3->setText(QCoreApplication::translate("addproduct", "Price:", nullptr));
        label_4->setText(QCoreApplication::translate("addproduct", "Availability:", nullptr));
        label_5->setText(QCoreApplication::translate("addproduct", "Category", nullptr));
        createCat->setText(QCoreApplication::translate("addproduct", "Create Category", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addproduct: public Ui_addproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H
