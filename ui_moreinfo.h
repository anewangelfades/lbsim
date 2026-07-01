/********************************************************************************
** Form generated from reading UI file 'moreinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOREINFO_H
#define UI_MOREINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_MoreInfo
{
public:
    QTextEdit *info;
    QPushButton *test;

    void setupUi(QDialog *MoreInfo)
    {
        if (MoreInfo->objectName().isEmpty())
            MoreInfo->setObjectName(QString::fromUtf8("MoreInfo"));
        MoreInfo->resize(400, 300);
        info = new QTextEdit(MoreInfo);
        info->setObjectName(QString::fromUtf8("info"));
        info->setGeometry(QRect(10, 10, 381, 251));
        test = new QPushButton(MoreInfo);
        test->setObjectName(QString::fromUtf8("test"));
        test->setGeometry(QRect(10, 270, 381, 23));

        retranslateUi(MoreInfo);

        QMetaObject::connectSlotsByName(MoreInfo);
    } // setupUi

    void retranslateUi(QDialog *MoreInfo)
    {
        MoreInfo->setWindowTitle(QCoreApplication::translate("MoreInfo", "More Info", nullptr));
        test->setText(QCoreApplication::translate("MoreInfo", "Don't click here... Authorized Personnel Only!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoreInfo: public Ui_MoreInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOREINFO_H
