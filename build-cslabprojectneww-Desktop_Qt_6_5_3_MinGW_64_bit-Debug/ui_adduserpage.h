/********************************************************************************
** Form generated from reading UI file 'adduserpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERPAGE_H
#define UI_ADDUSERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_adduserpage
{
public:
    QLabel *label;

    void setupUi(QDialog *adduserpage)
    {
        if (adduserpage->objectName().isEmpty())
            adduserpage->setObjectName("adduserpage");
        adduserpage->resize(400, 300);
        label = new QLabel(adduserpage);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 58, 16));

        retranslateUi(adduserpage);

        QMetaObject::connectSlotsByName(adduserpage);
    } // setupUi

    void retranslateUi(QDialog *adduserpage)
    {
        adduserpage->setWindowTitle(QCoreApplication::translate("adduserpage", "Dialog", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adduserpage: public Ui_adduserpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERPAGE_H
