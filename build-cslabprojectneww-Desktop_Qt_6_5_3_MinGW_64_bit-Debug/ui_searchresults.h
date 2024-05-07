/********************************************************************************
** Form generated from reading UI file 'searchresults.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHRESULTS_H
#define UI_SEARCHRESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_searchresults
{
public:

    void setupUi(QDialog *searchresults)
    {
        if (searchresults->objectName().isEmpty())
            searchresults->setObjectName("searchresults");
        searchresults->resize(400, 300);

        retranslateUi(searchresults);

        QMetaObject::connectSlotsByName(searchresults);
    } // setupUi

    void retranslateUi(QDialog *searchresults)
    {
        searchresults->setWindowTitle(QCoreApplication::translate("searchresults", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchresults: public Ui_searchresults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHRESULTS_H
