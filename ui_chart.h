/********************************************************************************
** Form generated from reading UI file 'chart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHART_H
#define UI_CHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include "improvedlineedit.h"
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_Chart
{
public:
    QComboBox *chartType;
    QLabel *label;
    QwtPlot *chart;
    QRadioButton *autoScale;
    QLineEdit *maxScale;
    QPushButton *fixedUpdate;
    QLineEdit *minScale;
    QRadioButton *fixedScale;
    QLabel *label_2;
    QLabel *label_3;
    ImprovedLineEdit *other;
    QGroupBox *groupBox;
    QRadioButton *y;
    ImprovedLineEdit *xValue;
    QRadioButton *z;
    QRadioButton *x;
    ImprovedLineEdit *yValue;
    ImprovedLineEdit *zValue;
    QRadioButton *time;
    QLineEdit *maxScale2;
    QLineEdit *minScale2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *axis;
    QSpinBox *interval;
    QCheckBox *showGrid;
    QPushButton *clear;

    void setupUi(QDialog *Chart)
    {
        if (Chart->objectName().isEmpty())
            Chart->setObjectName(QString::fromUtf8("Chart"));
        Chart->resize(681, 431);
        chartType = new QComboBox(Chart);
        chartType->addItem(QString());
        chartType->addItem(QString());
        chartType->addItem(QString());
        chartType->addItem(QString());
        chartType->addItem(QString());
        chartType->setObjectName(QString::fromUtf8("chartType"));
        chartType->setEnabled(false);
        chartType->setGeometry(QRect(60, 10, 191, 22));
        label = new QLabel(Chart);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 46, 13));
        chart = new QwtPlot(Chart);
        chart->setObjectName(QString::fromUtf8("chart"));
        chart->setGeometry(QRect(10, 120, 661, 300));
        chart->setSizeIncrement(QSize(1, 1));
        chart->setFrameShape(QFrame::NoFrame);
        chart->setFrameShadow(QFrame::Raised);
        autoScale = new QRadioButton(Chart);
        autoScale->setObjectName(QString::fromUtf8("autoScale"));
        autoScale->setGeometry(QRect(10, 90, 102, 18));
        autoScale->setChecked(false);
        maxScale = new QLineEdit(Chart);
        maxScale->setObjectName(QString::fromUtf8("maxScale"));
        maxScale->setEnabled(false);
        maxScale->setGeometry(QRect(480, 90, 61, 20));
        fixedUpdate = new QPushButton(Chart);
        fixedUpdate->setObjectName(QString::fromUtf8("fixedUpdate"));
        fixedUpdate->setEnabled(false);
        fixedUpdate->setGeometry(QRect(550, 90, 75, 23));
        fixedUpdate->setAutoDefault(false);
        minScale = new QLineEdit(Chart);
        minScale->setObjectName(QString::fromUtf8("minScale"));
        minScale->setEnabled(false);
        minScale->setGeometry(QRect(390, 90, 61, 20));
        fixedScale = new QRadioButton(Chart);
        fixedScale->setObjectName(QString::fromUtf8("fixedScale"));
        fixedScale->setGeometry(QRect(100, 90, 102, 18));
        label_2 = new QLabel(Chart);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 20, 91, 16));
        label_3 = new QLabel(Chart);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(430, 50, 91, 16));
        other = new ImprovedLineEdit(Chart);
        other->setObjectName(QString::fromUtf8("other"));
        other->setGeometry(QRect(490, 50, 61, 20));
        groupBox = new QGroupBox(Chart);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 401, 41));
        y = new QRadioButton(groupBox);
        y->setObjectName(QString::fromUtf8("y"));
        y->setGeometry(QRect(120, 10, 82, 18));
        xValue = new ImprovedLineEdit(groupBox);
        xValue->setObjectName(QString::fromUtf8("xValue"));
        xValue->setGeometry(QRect(50, 10, 61, 20));
        z = new QRadioButton(groupBox);
        z->setObjectName(QString::fromUtf8("z"));
        z->setGeometry(QRect(230, 10, 82, 18));
        x = new QRadioButton(groupBox);
        x->setObjectName(QString::fromUtf8("x"));
        x->setGeometry(QRect(10, 10, 31, 18));
        x->setChecked(true);
        yValue = new ImprovedLineEdit(groupBox);
        yValue->setObjectName(QString::fromUtf8("yValue"));
        yValue->setGeometry(QRect(160, 10, 61, 20));
        zValue = new ImprovedLineEdit(groupBox);
        zValue->setObjectName(QString::fromUtf8("zValue"));
        zValue->setGeometry(QRect(270, 10, 61, 20));
        time = new QRadioButton(groupBox);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(340, 10, 82, 17));
        maxScale2 = new QLineEdit(Chart);
        maxScale2->setObjectName(QString::fromUtf8("maxScale2"));
        maxScale2->setEnabled(false);
        maxScale2->setGeometry(QRect(300, 90, 61, 20));
        minScale2 = new QLineEdit(Chart);
        minScale2->setObjectName(QString::fromUtf8("minScale2"));
        minScale2->setEnabled(false);
        minScale2->setGeometry(QRect(210, 90, 61, 20));
        label_4 = new QLabel(Chart);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 90, 46, 13));
        label_5 = new QLabel(Chart);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 90, 46, 13));
        label_6 = new QLabel(Chart);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 90, 46, 13));
        label_7 = new QLabel(Chart);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(460, 90, 46, 13));
        axis = new QComboBox(Chart);
        axis->addItem(QString());
        axis->addItem(QString());
        axis->addItem(QString());
        axis->addItem(QString());
        axis->setObjectName(QString::fromUtf8("axis"));
        axis->setGeometry(QRect(270, 10, 69, 22));
        interval = new QSpinBox(Chart);
        interval->setObjectName(QString::fromUtf8("interval"));
        interval->setGeometry(QRect(490, 20, 61, 22));
        interval->setMinimum(1);
        interval->setMaximum(999999999);
        interval->setValue(100);
        showGrid = new QCheckBox(Chart);
        showGrid->setObjectName(QString::fromUtf8("showGrid"));
        showGrid->setGeometry(QRect(570, 20, 70, 17));
        clear = new QPushButton(Chart);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setEnabled(true);
        clear->setGeometry(QRect(570, 50, 75, 23));
        clear->setAutoDefault(false);
        QWidget::setTabOrder(chartType, x);
        QWidget::setTabOrder(x, xValue);
        QWidget::setTabOrder(xValue, y);
        QWidget::setTabOrder(y, yValue);
        QWidget::setTabOrder(yValue, z);
        QWidget::setTabOrder(z, zValue);
        QWidget::setTabOrder(zValue, other);
        QWidget::setTabOrder(other, autoScale);
        QWidget::setTabOrder(autoScale, fixedScale);
        QWidget::setTabOrder(fixedScale, minScale2);
        QWidget::setTabOrder(minScale2, maxScale2);
        QWidget::setTabOrder(maxScale2, minScale);
        QWidget::setTabOrder(minScale, maxScale);
        QWidget::setTabOrder(maxScale, fixedUpdate);

        retranslateUi(Chart);

        QMetaObject::connectSlotsByName(Chart);
    } // setupUi

    void retranslateUi(QDialog *Chart)
    {
        Chart->setWindowTitle(QCoreApplication::translate("Chart", "Chart", nullptr));
        chartType->setItemText(0, QCoreApplication::translate("Chart", "None", nullptr));
        chartType->setItemText(1, QCoreApplication::translate("Chart", "-log(DeltaP)", nullptr));
        chartType->setItemText(2, QCoreApplication::translate("Chart", "Velocity", nullptr));
        chartType->setItemText(3, QCoreApplication::translate("Chart", "Pressure", nullptr));
        chartType->setItemText(4, QCoreApplication::translate("Chart", "Drag", nullptr));

        label->setText(QCoreApplication::translate("Chart", "Chart:", nullptr));
        autoScale->setText(QCoreApplication::translate("Chart", "AutoScale", nullptr));
        fixedUpdate->setText(QCoreApplication::translate("Chart", "Update", nullptr));
        fixedScale->setText(QCoreApplication::translate("Chart", "Fixed Scale", nullptr));
        label_2->setText(QCoreApplication::translate("Chart", "Interval:", nullptr));
        label_3->setText(QCoreApplication::translate("Chart", "Other:", nullptr));
        other->setText(QCoreApplication::translate("Chart", "0", nullptr));
        groupBox->setTitle(QString());
        y->setText(QCoreApplication::translate("Chart", "Y", nullptr));
        xValue->setText(QCoreApplication::translate("Chart", "10", nullptr));
        z->setText(QCoreApplication::translate("Chart", "Z", nullptr));
        x->setText(QCoreApplication::translate("Chart", "X", nullptr));
        yValue->setText(QCoreApplication::translate("Chart", "10", nullptr));
        zValue->setText(QCoreApplication::translate("Chart", "1", nullptr));
        time->setText(QCoreApplication::translate("Chart", "Time", nullptr));
        label_4->setText(QCoreApplication::translate("Chart", "x-", nullptr));
        label_5->setText(QCoreApplication::translate("Chart", "x+", nullptr));
        label_6->setText(QCoreApplication::translate("Chart", "y-", nullptr));
        label_7->setText(QCoreApplication::translate("Chart", "y+", nullptr));
        axis->setItemText(0, QString());
        axis->setItemText(1, QCoreApplication::translate("Chart", "x", nullptr));
        axis->setItemText(2, QCoreApplication::translate("Chart", "y", nullptr));
        axis->setItemText(3, QCoreApplication::translate("Chart", "z", nullptr));

        showGrid->setText(QCoreApplication::translate("Chart", "Grid", nullptr));
        clear->setText(QCoreApplication::translate("Chart", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chart: public Ui_Chart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHART_H
