/********************************************************************************
** Form generated from reading UI file 'cart.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CART_H
#define UI_CART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cart
{
public:
    QLabel *label_5;
    QPushButton *gotocatalog;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *productname;
    QLabel *price;
    QLabel *quantity;
    QPushButton *remove;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *totalprice;
    QPushButton *checkout;

    void setupUi(QDialog *cart)
    {
        if (cart->objectName().isEmpty())
            cart->setObjectName("cart");
        cart->resize(383, 230);
        label_5 = new QLabel(cart);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 10, 37, 21));
        gotocatalog = new QPushButton(cart);
        gotocatalog->setObjectName("gotocatalog");
        gotocatalog->setGeometry(QRect(20, 180, 121, 31));
        layoutWidget = new QWidget(cart);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 57, 311, 85));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        productname = new QLabel(layoutWidget);
        productname->setObjectName("productname");

        formLayout->setWidget(0, QFormLayout::LabelRole, productname);

        price = new QLabel(layoutWidget);
        price->setObjectName("price");

        formLayout->setWidget(1, QFormLayout::LabelRole, price);

        quantity = new QLabel(layoutWidget);
        quantity->setObjectName("quantity");

        formLayout->setWidget(2, QFormLayout::LabelRole, quantity);

        remove = new QPushButton(layoutWidget);
        remove->setObjectName("remove");

        formLayout->setWidget(2, QFormLayout::FieldRole, remove);

        layoutWidget1 = new QWidget(cart);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(220, 160, 131, 61));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        totalprice = new QLabel(layoutWidget1);
        totalprice->setObjectName("totalprice");

        gridLayout->addWidget(totalprice, 0, 0, 1, 1);

        checkout = new QPushButton(layoutWidget1);
        checkout->setObjectName("checkout");

        gridLayout->addWidget(checkout, 1, 0, 1, 1);


        retranslateUi(cart);

        QMetaObject::connectSlotsByName(cart);
    } // setupUi

    void retranslateUi(QDialog *cart)
    {
        cart->setWindowTitle(QCoreApplication::translate("cart", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("cart", "<html><head/><body><p><span style=\" font-weight:700;\">Cart</span></p></body></html>", nullptr));
        gotocatalog->setText(QCoreApplication::translate("cart", "Go To Catalog ", nullptr));
        productname->setText(QCoreApplication::translate("cart", "Product Name :", nullptr));
        price->setText(QCoreApplication::translate("cart", "Price :", nullptr));
        quantity->setText(QCoreApplication::translate("cart", "Quantity : ", nullptr));
        remove->setText(QCoreApplication::translate("cart", "Remove ", nullptr));
        totalprice->setText(QCoreApplication::translate("cart", "Total Price :", nullptr));
        checkout->setText(QCoreApplication::translate("cart", "Checkout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cart: public Ui_cart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CART_H
