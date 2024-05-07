/********************************************************************************
** Form generated from reading UI file 'searchwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWINDOW_H
#define UI_SEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchwindow
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QPushButton *search;
    QLineEdit *queryBox;
    QPushButton *back;

    void setupUi(QDialog *searchwindow)
    {
        if (searchwindow->objectName().isEmpty())
            searchwindow->setObjectName("searchwindow");
        searchwindow->resize(367, 144);
        label = new QLabel(searchwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 161, 16));
        layoutWidget = new QWidget(searchwindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 30, 241, 67));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        search = new QPushButton(layoutWidget);
        search->setObjectName("search");

        formLayout->setWidget(1, QFormLayout::FieldRole, search);

        queryBox = new QLineEdit(layoutWidget);
        queryBox->setObjectName("queryBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, queryBox);

        back = new QPushButton(searchwindow);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 110, 83, 29));

        retranslateUi(searchwindow);

        QMetaObject::connectSlotsByName(searchwindow);
    } // setupUi

    void retranslateUi(QDialog *searchwindow)
    {
        searchwindow->setWindowTitle(QCoreApplication::translate("searchwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("searchwindow", "<html><head/><body><p><span style=\" font-weight:700;\">Search for Products</span></p></body></html>", nullptr));
        search->setText(QCoreApplication::translate("searchwindow", "Search", nullptr));
        back->setText(QCoreApplication::translate("searchwindow", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchwindow: public Ui_searchwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
