/********************************************************************************
** Form generated from reading UI file 'immersed.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMMERSED_H
#define UI_IMMERSED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Immersed
{
public:
    QComboBox *immersedType;
    QPlainTextEdit *immersedParameters;
    QPushButton *immersedAdd;
    QPushButton *immersedRemove;
    QListWidget *immersedList;

    void setupUi(QDialog *Immersed)
    {
        if (Immersed->objectName().isEmpty())
            Immersed->setObjectName(QString::fromUtf8("Immersed"));
        Immersed->resize(400, 300);
        immersedType = new QComboBox(Immersed);
        immersedType->addItem(QString());
        immersedType->setObjectName(QString::fromUtf8("immersedType"));
        immersedType->setGeometry(QRect(10, 10, 381, 22));
        immersedParameters = new QPlainTextEdit(Immersed);
        immersedParameters->setObjectName(QString::fromUtf8("immersedParameters"));
        immersedParameters->setGeometry(QRect(10, 40, 381, 91));
        immersedAdd = new QPushButton(Immersed);
        immersedAdd->setObjectName(QString::fromUtf8("immersedAdd"));
        immersedAdd->setGeometry(QRect(10, 140, 381, 23));
        immersedRemove = new QPushButton(Immersed);
        immersedRemove->setObjectName(QString::fromUtf8("immersedRemove"));
        immersedRemove->setGeometry(QRect(10, 270, 381, 23));
        immersedList = new QListWidget(Immersed);
        immersedList->setObjectName(QString::fromUtf8("immersedList"));
        immersedList->setGeometry(QRect(10, 170, 381, 91));

        retranslateUi(Immersed);

        QMetaObject::connectSlotsByName(Immersed);
    } // setupUi

    void retranslateUi(QDialog *Immersed)
    {
        Immersed->setWindowTitle(QCoreApplication::translate("Immersed", "Immersed", nullptr));
        immersedType->setItemText(0, QString());

        immersedAdd->setText(QCoreApplication::translate("Immersed", "Add", nullptr));
        immersedRemove->setText(QCoreApplication::translate("Immersed", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Immersed: public Ui_Immersed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMMERSED_H
