/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *nameVersion;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *nameVersion_2;
    QLabel *label_4;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(320, 242);
        About->setModal(false);
        nameVersion = new QLabel(About);
        nameVersion->setObjectName(QString::fromUtf8("nameVersion"));
        nameVersion->setGeometry(QRect(10, 10, 301, 20));
        groupBox = new QGroupBox(About);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 301, 121));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 30, 301, 20));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 90, 301, 20));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 60, 301, 20));
        label_3->setAlignment(Qt::AlignCenter);
        nameVersion_2 = new QLabel(About);
        nameVersion_2->setObjectName(QString::fromUtf8("nameVersion_2"));
        nameVersion_2->setGeometry(QRect(10, 170, 301, 20));
        label_4 = new QLabel(About);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 200, 301, 31));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "Credits", nullptr));
        nameVersion->setText(QCoreApplication::translate("About", "LBSim", nullptr));
        groupBox->setTitle(QCoreApplication::translate("About", "Credits", nullptr));
        label->setText(QCoreApplication::translate("About", "Fabio S. Komori, developer", nullptr));
        label_2->setText(QCoreApplication::translate("About", "Prof. Dr. Marcelo N. P. Carre\303\261o, coordinator", nullptr));
        label_3->setText(QCoreApplication::translate("About", "Fabio B. Colombo, developer", nullptr));
        nameVersion_2->setText(QCoreApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This program uses Qt under the </span><a href=\"http://www.gnu.org/licenses/lgpl-2.1.html\"><span style=\" text-decoration: underline; color:#0000ff;\">LGPL license 2.1</span></a></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("About", "LBSim is based in part on the work of the\n"
"Qwt project (http://qwt.sf.net).", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
