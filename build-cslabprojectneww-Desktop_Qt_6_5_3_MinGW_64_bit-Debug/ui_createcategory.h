/********************************************************************************
** Form generated from reading UI file 'createcategory.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECATEGORY_H
#define UI_CREATECATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createCategory
{
public:
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *catName;
    QPushButton *catAdd;

    void setupUi(QDialog *createCategory)
    {
        if (createCategory->objectName().isEmpty())
            createCategory->setObjectName("createCategory");
        createCategory->resize(259, 73);
        widget = new QWidget(createCategory);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 242, 53));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::SpanningRole, label);

        catName = new QLineEdit(widget);
        catName->setObjectName("catName");

        formLayout->setWidget(1, QFormLayout::LabelRole, catName);

        catAdd = new QPushButton(widget);
        catAdd->setObjectName("catAdd");

        formLayout->setWidget(1, QFormLayout::FieldRole, catAdd);


        retranslateUi(createCategory);

        QMetaObject::connectSlotsByName(createCategory);
    } // setupUi

    void retranslateUi(QDialog *createCategory)
    {
        createCategory->setWindowTitle(QCoreApplication::translate("createCategory", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("createCategory", "<html><head/><body><p><span style=\" font-weight:700;\">Enter the Name of the New Category: </span></p></body></html>", nullptr));
        catAdd->setText(QCoreApplication::translate("createCategory", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createCategory: public Ui_createCategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECATEGORY_H
