/********************************************************************************
** Form generated from reading UI file 'checkout.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUT_H
#define UI_CHECKOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_checkout
{
public:

    void setupUi(QDialog *checkout)
    {
        if (checkout->objectName().isEmpty())
            checkout->setObjectName("checkout");
        checkout->resize(400, 300);

        retranslateUi(checkout);

        QMetaObject::connectSlotsByName(checkout);
    } // setupUi

    void retranslateUi(QDialog *checkout)
    {
        checkout->setWindowTitle(QCoreApplication::translate("checkout", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checkout: public Ui_checkout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUT_H
