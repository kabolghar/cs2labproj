/********************************************************************************
** Form generated from reading UI file 'products.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTS_H
#define UI_PRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_products
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QPushButton *searchbutton;
    QPushButton *gotocart;
    QPushButton *nextPage;
    QLabel *productsCart;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *prod1;
    QPushButton *product1;
    QLabel *na1;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *prod2;
    QPushButton *product2;
    QLabel *na2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *prod3;
    QPushButton *product3;
    QLabel *na3;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *prod4;
    QPushButton *product4;
    QLabel *na4;

    void setupUi(QDialog *products)
    {
        if (products->objectName().isEmpty())
            products->setObjectName("products");
        products->resize(460, 289);
        label = new QLabel(products);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 101, 31));
        layoutWidget = new QWidget(products);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(270, 10, 169, 31));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        searchbutton = new QPushButton(layoutWidget);
        searchbutton->setObjectName("searchbutton");

        formLayout->setWidget(0, QFormLayout::LabelRole, searchbutton);

        gotocart = new QPushButton(layoutWidget);
        gotocart->setObjectName("gotocart");

        formLayout->setWidget(0, QFormLayout::FieldRole, gotocart);

        nextPage = new QPushButton(products);
        nextPage->setObjectName("nextPage");
        nextPage->setGeometry(QRect(330, 240, 100, 32));
        productsCart = new QLabel(products);
        productsCart->setObjectName("productsCart");
        productsCart->setGeometry(QRect(30, 250, 241, 20));
        widget = new QWidget(products);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 60, 421, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        prod1 = new QLabel(widget);
        prod1->setObjectName("prod1");

        horizontalLayout->addWidget(prod1);

        product1 = new QPushButton(widget);
        product1->setObjectName("product1");

        horizontalLayout->addWidget(product1);

        na1 = new QLabel(widget);
        na1->setObjectName("na1");

        horizontalLayout->addWidget(na1);

        widget1 = new QWidget(products);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(8, 107, 421, 32));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        prod2 = new QLabel(widget1);
        prod2->setObjectName("prod2");

        horizontalLayout_2->addWidget(prod2);

        product2 = new QPushButton(widget1);
        product2->setObjectName("product2");

        horizontalLayout_2->addWidget(product2);

        na2 = new QLabel(widget1);
        na2->setObjectName("na2");

        horizontalLayout_2->addWidget(na2);

        widget2 = new QWidget(products);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(8, 154, 421, 32));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        prod3 = new QLabel(widget2);
        prod3->setObjectName("prod3");

        horizontalLayout_3->addWidget(prod3);

        product3 = new QPushButton(widget2);
        product3->setObjectName("product3");

        horizontalLayout_3->addWidget(product3);

        na3 = new QLabel(widget2);
        na3->setObjectName("na3");

        horizontalLayout_3->addWidget(na3);

        widget3 = new QWidget(products);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(7, 197, 421, 32));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        prod4 = new QLabel(widget3);
        prod4->setObjectName("prod4");

        horizontalLayout_4->addWidget(prod4);

        product4 = new QPushButton(widget3);
        product4->setObjectName("product4");

        horizontalLayout_4->addWidget(product4);

        na4 = new QLabel(widget3);
        na4->setObjectName("na4");

        horizontalLayout_4->addWidget(na4);


        retranslateUi(products);

        QMetaObject::connectSlotsByName(products);
    } // setupUi

    void retranslateUi(QDialog *products)
    {
        products->setWindowTitle(QCoreApplication::translate("products", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("products", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Catalog</span></p></body></html>", nullptr));
        searchbutton->setText(QCoreApplication::translate("products", "Search", nullptr));
        gotocart->setText(QCoreApplication::translate("products", "Cart", nullptr));
        nextPage->setText(QCoreApplication::translate("products", "Next Page", nullptr));
        productsCart->setText(QCoreApplication::translate("products", "Added to Cart", nullptr));
        prod1->setText(QCoreApplication::translate("products", "Prod1", nullptr));
        product1->setText(QCoreApplication::translate("products", "Add to Cart", nullptr));
        na1->setText(QCoreApplication::translate("products", "<html><head/><body><p><span style=\" color:#ff0000;\">*Product not available</span></p></body></html>", nullptr));
        prod2->setText(QCoreApplication::translate("products", "Prod2", nullptr));
        product2->setText(QCoreApplication::translate("products", "Add to Cart", nullptr));
        na2->setText(QCoreApplication::translate("products", "<html><head/><body><p><span style=\" color:#ff0000;\">*Product not available</span></p></body></html>", nullptr));
        prod3->setText(QCoreApplication::translate("products", "Prod3", nullptr));
        product3->setText(QCoreApplication::translate("products", "Add to Cart", nullptr));
        na3->setText(QCoreApplication::translate("products", "<html><head/><body><p><span style=\" color:#ff0000;\">*Product not available</span></p></body></html>", nullptr));
        prod4->setText(QCoreApplication::translate("products", "Prod4", nullptr));
        product4->setText(QCoreApplication::translate("products", "Add to Cart", nullptr));
        na4->setText(QCoreApplication::translate("products", "<html><head/><body><p><span style=\" color:#ff0000;\">*Product not available</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class products: public Ui_products {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTS_H
