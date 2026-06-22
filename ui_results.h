/********************************************************************************
** Form generated from reading UI file 'results.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTS_H
#define UI_RESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include "improvedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_Results
{
public:
    QGroupBox *groupBox;
    QCheckBox *images;
    QCheckBox *velocities;
    QLabel *label_9;
    ImprovedLineEdit *interval;
    ImprovedLineEdit *maxSteps;
    QCheckBox *reportSimulation;
    QLabel *label_8;
    QLabel *label_11;
    ImprovedLineEdit *stopCriterion;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *simX;
    QLineEdit *simY;
    QLineEdit *simZ;
    QTableWidget *points;
    QPushButton *addPoint;
    QPushButton *removePoint;
    QPushButton *updatePoints;

    void setupUi(QDialog *Results)
    {
        if (Results->objectName().isEmpty())
            Results->setObjectName(QString::fromUtf8("Results"));
        Results->resize(352, 441);
        groupBox = new QGroupBox(Results);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 331, 421));
        images = new QCheckBox(groupBox);
        images->setObjectName(QString::fromUtf8("images"));
        images->setGeometry(QRect(10, 90, 121, 17));
        velocities = new QCheckBox(groupBox);
        velocities->setObjectName(QString::fromUtf8("velocities"));
        velocities->setGeometry(QRect(10, 110, 111, 17));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(120, 100, 71, 13));
        interval = new ImprovedLineEdit(groupBox);
        interval->setObjectName(QString::fromUtf8("interval"));
        interval->setGeometry(QRect(120, 120, 91, 20));
        maxSteps = new ImprovedLineEdit(groupBox);
        maxSteps->setObjectName(QString::fromUtf8("maxSteps"));
        maxSteps->setGeometry(QRect(10, 50, 91, 20));
        reportSimulation = new QCheckBox(groupBox);
        reportSimulation->setObjectName(QString::fromUtf8("reportSimulation"));
        reportSimulation->setGeometry(QRect(10, 130, 111, 17));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 30, 71, 13));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(120, 30, 161, 16));
        stopCriterion = new ImprovedLineEdit(groupBox);
        stopCriterion->setObjectName(QString::fromUtf8("stopCriterion"));
        stopCriterion->setGeometry(QRect(120, 50, 91, 20));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(230, 160, 81, 16));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 160, 81, 16));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(120, 160, 81, 16));
        simX = new QLineEdit(groupBox);
        simX->setObjectName(QString::fromUtf8("simX"));
        simX->setGeometry(QRect(10, 180, 91, 20));
        simY = new QLineEdit(groupBox);
        simY->setObjectName(QString::fromUtf8("simY"));
        simY->setGeometry(QRect(120, 180, 91, 20));
        simZ = new QLineEdit(groupBox);
        simZ->setObjectName(QString::fromUtf8("simZ"));
        simZ->setGeometry(QRect(230, 180, 91, 20));
        points = new QTableWidget(groupBox);
        if (points->columnCount() < 3)
            points->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        points->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        points->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        points->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        points->setObjectName(QString::fromUtf8("points"));
        points->setGeometry(QRect(10, 250, 311, 121));
        addPoint = new QPushButton(groupBox);
        addPoint->setObjectName(QString::fromUtf8("addPoint"));
        addPoint->setGeometry(QRect(10, 210, 151, 23));
        addPoint->setAutoDefault(false);
        removePoint = new QPushButton(groupBox);
        removePoint->setObjectName(QString::fromUtf8("removePoint"));
        removePoint->setGeometry(QRect(170, 210, 151, 23));
        removePoint->setAutoDefault(false);
        updatePoints = new QPushButton(groupBox);
        updatePoints->setObjectName(QString::fromUtf8("updatePoints"));
        updatePoints->setGeometry(QRect(10, 380, 311, 23));
        updatePoints->setAutoDefault(false);
        QWidget::setTabOrder(maxSteps, stopCriterion);
        QWidget::setTabOrder(stopCriterion, images);
        QWidget::setTabOrder(images, velocities);
        QWidget::setTabOrder(velocities, reportSimulation);
        QWidget::setTabOrder(reportSimulation, interval);
        QWidget::setTabOrder(interval, simX);
        QWidget::setTabOrder(simX, simY);
        QWidget::setTabOrder(simY, simZ);
        QWidget::setTabOrder(simZ, addPoint);
        QWidget::setTabOrder(addPoint, removePoint);
        QWidget::setTabOrder(removePoint, points);
        QWidget::setTabOrder(points, updatePoints);

        retranslateUi(Results);

        QMetaObject::connectSlotsByName(Results);
    } // setupUi

    void retranslateUi(QDialog *Results)
    {
        Results->setWindowTitle(QCoreApplication::translate("Results", "Results", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Results", "Simulation", nullptr));
        images->setText(QCoreApplication::translate("Results", "Images", nullptr));
        velocities->setText(QCoreApplication::translate("Results", "V, P etc.", nullptr));
        label_9->setText(QCoreApplication::translate("Results", "Interval:", nullptr));
        interval->setText(QCoreApplication::translate("Results", "1", nullptr));
        maxSteps->setText(QCoreApplication::translate("Results", "0", nullptr));
        reportSimulation->setText(QCoreApplication::translate("Results", "Simulation", nullptr));
        label_8->setText(QCoreApplication::translate("Results", "Max It.:", nullptr));
        label_11->setText(QCoreApplication::translate("Results", "Stop When DeltaP <:", nullptr));
        stopCriterion->setText(QCoreApplication::translate("Results", "0", nullptr));
        label_15->setText(QCoreApplication::translate("Results", "z:", nullptr));
        label_16->setText(QCoreApplication::translate("Results", "x:", nullptr));
        label_17->setText(QCoreApplication::translate("Results", "y:", nullptr));
        simX->setText(QCoreApplication::translate("Results", "0", nullptr));
        simY->setText(QCoreApplication::translate("Results", "0", nullptr));
        simZ->setText(QCoreApplication::translate("Results", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem = points->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Results", "x", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = points->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Results", "y", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = points->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Results", "z", nullptr));
        addPoint->setText(QCoreApplication::translate("Results", "Add", nullptr));
        removePoint->setText(QCoreApplication::translate("Results", "Remove", nullptr));
        updatePoints->setText(QCoreApplication::translate("Results", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Results: public Ui_Results {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTS_H
