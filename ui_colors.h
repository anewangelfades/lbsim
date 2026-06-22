/********************************************************************************
** Form generated from reading UI file 'colors.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORS_H
#define UI_COLORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include "improvedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_Colors
{
public:
    QLabel *firstMarker;
    QLabel *secondMarker;
    QLabel *thirdMarker;
    QLabel *fourthMarker;
    QLabel *fifthMarker;
    QLabel *value;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox;
    ImprovedLineEdit *x;
    QLabel *label;
    QLabel *label_2;
    ImprovedLineEdit *y;
    QLabel *label_3;
    ImprovedLineEdit *width;
    ImprovedLineEdit *height;
    QLabel *label_4;
    QLabel *label_5;
    ImprovedLineEdit *captionX;
    ImprovedLineEdit *captionY;
    QLabel *label_6;
    ImprovedLineEdit *captionPt;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *colorStyle;

    void setupUi(QDialog *Colors)
    {
        if (Colors->objectName().isEmpty())
            Colors->setObjectName(QString::fromUtf8("Colors"));
        Colors->resize(801, 191);
        firstMarker = new QLabel(Colors);
        firstMarker->setObjectName(QString::fromUtf8("firstMarker"));
        firstMarker->setGeometry(QRect(10, 70, 71, 16));
        firstMarker->setAlignment(Qt::AlignCenter);
        secondMarker = new QLabel(Colors);
        secondMarker->setObjectName(QString::fromUtf8("secondMarker"));
        secondMarker->setGeometry(QRect(190, 70, 71, 16));
        secondMarker->setAlignment(Qt::AlignCenter);
        thirdMarker = new QLabel(Colors);
        thirdMarker->setObjectName(QString::fromUtf8("thirdMarker"));
        thirdMarker->setGeometry(QRect(370, 70, 71, 16));
        thirdMarker->setAlignment(Qt::AlignCenter);
        fourthMarker = new QLabel(Colors);
        fourthMarker->setObjectName(QString::fromUtf8("fourthMarker"));
        fourthMarker->setGeometry(QRect(550, 70, 71, 16));
        fourthMarker->setAlignment(Qt::AlignCenter);
        fifthMarker = new QLabel(Colors);
        fifthMarker->setObjectName(QString::fromUtf8("fifthMarker"));
        fifthMarker->setGeometry(QRect(720, 70, 71, 16));
        fifthMarker->setAlignment(Qt::AlignCenter);
        value = new QLabel(Colors);
        value->setObjectName(QString::fromUtf8("value"));
        value->setGeometry(QRect(350, 60, 91, 16));
        value->setAlignment(Qt::AlignCenter);
        graphicsView = new QGraphicsView(Colors);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(40, 70, 721, 21));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        groupBox = new QGroupBox(Colors);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 100, 781, 81));
        x = new ImprovedLineEdit(groupBox);
        x->setObjectName(QString::fromUtf8("x"));
        x->setGeometry(QRect(10, 50, 81, 20));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 46, 13));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 30, 46, 13));
        y = new ImprovedLineEdit(groupBox);
        y->setObjectName(QString::fromUtf8("y"));
        y->setGeometry(QRect(100, 50, 81, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 30, 121, 16));
        width = new ImprovedLineEdit(groupBox);
        width->setObjectName(QString::fromUtf8("width"));
        width->setGeometry(QRect(190, 50, 81, 20));
        height = new ImprovedLineEdit(groupBox);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(280, 50, 81, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 30, 121, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 30, 121, 16));
        captionX = new ImprovedLineEdit(groupBox);
        captionX->setObjectName(QString::fromUtf8("captionX"));
        captionX->setGeometry(QRect(370, 50, 81, 20));
        captionY = new ImprovedLineEdit(groupBox);
        captionY->setObjectName(QString::fromUtf8("captionY"));
        captionY->setGeometry(QRect(460, 50, 81, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(460, 30, 121, 16));
        captionPt = new ImprovedLineEdit(groupBox);
        captionPt->setObjectName(QString::fromUtf8("captionPt"));
        captionPt->setGeometry(QRect(550, 50, 81, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(550, 30, 121, 16));
        label_8 = new QLabel(Colors);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 121, 16));
        colorStyle = new QComboBox(Colors);
        colorStyle->addItem(QString());
        colorStyle->addItem(QString());
        colorStyle->addItem(QString());
        colorStyle->setObjectName(QString::fromUtf8("colorStyle"));
        colorStyle->setEnabled(true);
        colorStyle->setGeometry(QRect(10, 30, 781, 22));
        graphicsView->raise();
        firstMarker->raise();
        secondMarker->raise();
        thirdMarker->raise();
        fourthMarker->raise();
        fifthMarker->raise();
        value->raise();
        groupBox->raise();
        label_8->raise();
        colorStyle->raise();
        QWidget::setTabOrder(colorStyle, graphicsView);
        QWidget::setTabOrder(graphicsView, x);
        QWidget::setTabOrder(x, y);
        QWidget::setTabOrder(y, width);
        QWidget::setTabOrder(width, height);
        QWidget::setTabOrder(height, captionX);
        QWidget::setTabOrder(captionX, captionY);
        QWidget::setTabOrder(captionY, captionPt);

        retranslateUi(Colors);

        QMetaObject::connectSlotsByName(Colors);
    } // setupUi

    void retranslateUi(QDialog *Colors)
    {
        Colors->setWindowTitle(QCoreApplication::translate("Colors", "Colors", nullptr));
        firstMarker->setText(QString());
        secondMarker->setText(QString());
        thirdMarker->setText(QString());
        fourthMarker->setText(QString());
        fifthMarker->setText(QString());
        value->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("Colors", "Rendered Color Bar", nullptr));
        x->setText(QCoreApplication::translate("Colors", "0", nullptr));
        label->setText(QCoreApplication::translate("Colors", "X:", nullptr));
        label_2->setText(QCoreApplication::translate("Colors", "Y:", nullptr));
        y->setText(QCoreApplication::translate("Colors", "-0.1", nullptr));
        label_3->setText(QCoreApplication::translate("Colors", "Width:", nullptr));
        width->setText(QCoreApplication::translate("Colors", "1", nullptr));
        height->setText(QCoreApplication::translate("Colors", "0.01", nullptr));
        label_4->setText(QCoreApplication::translate("Colors", "Height:", nullptr));
        label_5->setText(QCoreApplication::translate("Colors", "Caption X:", nullptr));
        captionX->setText(QCoreApplication::translate("Colors", "0", nullptr));
        captionY->setText(QCoreApplication::translate("Colors", "0", nullptr));
        label_6->setText(QCoreApplication::translate("Colors", "Caption Y:", nullptr));
        captionPt->setText(QCoreApplication::translate("Colors", "12", nullptr));
        label_7->setText(QCoreApplication::translate("Colors", "Caption Pt:", nullptr));
        label_8->setText(QCoreApplication::translate("Colors", "Style:", nullptr));
        colorStyle->setItemText(0, QCoreApplication::translate("Colors", "Wavelength (visible spectrum)", nullptr));
        colorStyle->setItemText(1, QCoreApplication::translate("Colors", "blue -> cyan -> green -> yellow -> red", nullptr));
        colorStyle->setItemText(2, QCoreApplication::translate("Colors", "blue -> green -> yellow -> orange -> red", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Colors: public Ui_Colors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORS_H
