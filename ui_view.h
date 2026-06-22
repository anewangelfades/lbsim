/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "improvedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QCheckBox *showStatic;
    QLabel *painterLabel;
    ImprovedLineEdit *colorOffset;
    QComboBox *painter;
    QLabel *label_6;
    QLabel *label_5;
    QCheckBox *showDynamic;
    QLabel *label_7;
    ImprovedLineEdit *colorInterval;
    QLabel *painterLabel_2;
    ImprovedLineEdit *updatePeriod;
    QPushButton *autoAdjust;
    QCheckBox *continuousAutoAdjust;
    QLabel *label_8;
    ImprovedLineEdit *cellsSize;
    QCheckBox *showParticles;
    QLabel *label_9;
    ImprovedLineEdit *colorSteps;
    QLabel *painterLabel_3;
    ImprovedLineEdit *arrowSteps;
    QPushButton *resetProjection;
    QCheckBox *showAxis;
    QLabel *label_11;
    ImprovedLineEdit *cellsSize2;
    QLabel *label_10;
    ImprovedLineEdit *zoom;
    QLabel *label_12;
    ImprovedLineEdit *roll;
    ImprovedLineEdit *pitch;
    QLabel *label_13;
    QLabel *label_14;
    ImprovedLineEdit *yaw;
    QCheckBox *allView;
    QCheckBox *showColorBar;
    QLabel *label_15;
    ImprovedLineEdit *tx;
    ImprovedLineEdit *tz;
    QLabel *label_16;
    ImprovedLineEdit *ty;
    QLabel *label_17;
    QCheckBox *show2ndDistribution;
    QLabel *label_18;
    ImprovedLineEdit *colorComponent;
    QPushButton *configurePainter;
    QCheckBox *showIsolines;
    QCheckBox *heightmap;
    QCheckBox *illumination;
    QCheckBox *showForces;

    void setupUi(QWidget *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(164, 722);
        showStatic = new QCheckBox(View);
        showStatic->setObjectName(QString::fromUtf8("showStatic"));
        showStatic->setGeometry(QRect(10, 180, 101, 17));
        showStatic->setChecked(true);
        painterLabel = new QLabel(View);
        painterLabel->setObjectName(QString::fromUtf8("painterLabel"));
        painterLabel->setGeometry(QRect(10, 80, 91, 13));
        colorOffset = new ImprovedLineEdit(View);
        colorOffset->setObjectName(QString::fromUtf8("colorOffset"));
        colorOffset->setGeometry(QRect(10, 310, 141, 20));
        painter = new QComboBox(View);
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->addItem(QString());
        painter->setObjectName(QString::fromUtf8("painter"));
        painter->setGeometry(QRect(10, 100, 141, 22));
        painter->setMaxVisibleItems(20);
        label_6 = new QLabel(View);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 290, 111, 16));
        label_5 = new QLabel(View);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 270, 131, 13));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        showDynamic = new QCheckBox(View);
        showDynamic->setObjectName(QString::fromUtf8("showDynamic"));
        showDynamic->setGeometry(QRect(10, 200, 81, 17));
        showDynamic->setChecked(true);
        label_7 = new QLabel(View);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 340, 51, 16));
        colorInterval = new ImprovedLineEdit(View);
        colorInterval->setObjectName(QString::fromUtf8("colorInterval"));
        colorInterval->setGeometry(QRect(10, 360, 141, 20));
        painterLabel_2 = new QLabel(View);
        painterLabel_2->setObjectName(QString::fromUtf8("painterLabel_2"));
        painterLabel_2->setGeometry(QRect(10, 30, 151, 13));
        updatePeriod = new ImprovedLineEdit(View);
        updatePeriod->setObjectName(QString::fromUtf8("updatePeriod"));
        updatePeriod->setGeometry(QRect(10, 50, 61, 20));
        autoAdjust = new QPushButton(View);
        autoAdjust->setObjectName(QString::fromUtf8("autoAdjust"));
        autoAdjust->setGeometry(QRect(10, 440, 141, 23));
        continuousAutoAdjust = new QCheckBox(View);
        continuousAutoAdjust->setObjectName(QString::fromUtf8("continuousAutoAdjust"));
        continuousAutoAdjust->setGeometry(QRect(10, 470, 161, 17));
        continuousAutoAdjust->setChecked(true);
        label_8 = new QLabel(View);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 500, 111, 16));
        cellsSize = new ImprovedLineEdit(View);
        cellsSize->setObjectName(QString::fromUtf8("cellsSize"));
        cellsSize->setGeometry(QRect(10, 520, 41, 20));
        showParticles = new QCheckBox(View);
        showParticles->setObjectName(QString::fromUtf8("showParticles"));
        showParticles->setGeometry(QRect(80, 160, 81, 17));
        showParticles->setChecked(true);
        label_9 = new QLabel(View);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 390, 61, 16));
        colorSteps = new ImprovedLineEdit(View);
        colorSteps->setObjectName(QString::fromUtf8("colorSteps"));
        colorSteps->setGeometry(QRect(10, 410, 61, 20));
        painterLabel_3 = new QLabel(View);
        painterLabel_3->setObjectName(QString::fromUtf8("painterLabel_3"));
        painterLabel_3->setGeometry(QRect(90, 30, 91, 13));
        arrowSteps = new ImprovedLineEdit(View);
        arrowSteps->setObjectName(QString::fromUtf8("arrowSteps"));
        arrowSteps->setGeometry(QRect(90, 50, 61, 20));
        resetProjection = new QPushButton(View);
        resetProjection->setObjectName(QString::fromUtf8("resetProjection"));
        resetProjection->setGeometry(QRect(10, 650, 141, 23));
        showAxis = new QCheckBox(View);
        showAxis->setObjectName(QString::fromUtf8("showAxis"));
        showAxis->setGeometry(QRect(10, 160, 81, 17));
        showAxis->setChecked(false);
        label_11 = new QLabel(View);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(110, 500, 111, 16));
        cellsSize2 = new ImprovedLineEdit(View);
        cellsSize2->setObjectName(QString::fromUtf8("cellsSize2"));
        cellsSize2->setGeometry(QRect(60, 520, 41, 20));
        label_10 = new QLabel(View);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 500, 111, 16));
        zoom = new ImprovedLineEdit(View);
        zoom->setObjectName(QString::fromUtf8("zoom"));
        zoom->setGeometry(QRect(110, 520, 41, 20));
        label_12 = new QLabel(View);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 600, 31, 16));
        roll = new ImprovedLineEdit(View);
        roll->setObjectName(QString::fromUtf8("roll"));
        roll->setGeometry(QRect(10, 620, 41, 20));
        pitch = new ImprovedLineEdit(View);
        pitch->setObjectName(QString::fromUtf8("pitch"));
        pitch->setGeometry(QRect(60, 620, 41, 20));
        label_13 = new QLabel(View);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 600, 41, 16));
        label_14 = new QLabel(View);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(110, 600, 31, 16));
        yaw = new ImprovedLineEdit(View);
        yaw->setObjectName(QString::fromUtf8("yaw"));
        yaw->setGeometry(QRect(110, 620, 41, 20));
        allView = new QCheckBox(View);
        allView->setObjectName(QString::fromUtf8("allView"));
        allView->setGeometry(QRect(80, 240, 81, 17));
        allView->setChecked(false);
        showColorBar = new QCheckBox(View);
        showColorBar->setObjectName(QString::fromUtf8("showColorBar"));
        showColorBar->setGeometry(QRect(80, 180, 141, 17));
        showColorBar->setChecked(false);
        label_15 = new QLabel(View);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 550, 41, 16));
        tx = new ImprovedLineEdit(View);
        tx->setObjectName(QString::fromUtf8("tx"));
        tx->setGeometry(QRect(10, 570, 41, 20));
        tz = new ImprovedLineEdit(View);
        tz->setObjectName(QString::fromUtf8("tz"));
        tz->setGeometry(QRect(110, 570, 41, 20));
        label_16 = new QLabel(View);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(60, 550, 41, 16));
        ty = new ImprovedLineEdit(View);
        ty->setObjectName(QString::fromUtf8("ty"));
        ty->setGeometry(QRect(60, 570, 41, 20));
        label_17 = new QLabel(View);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(110, 550, 31, 16));
        show2ndDistribution = new QCheckBox(View);
        show2ndDistribution->setObjectName(QString::fromUtf8("show2ndDistribution"));
        show2ndDistribution->setGeometry(QRect(80, 200, 81, 17));
        show2ndDistribution->setChecked(false);
        label_18 = new QLabel(View);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(80, 390, 71, 16));
        colorComponent = new ImprovedLineEdit(View);
        colorComponent->setObjectName(QString::fromUtf8("colorComponent"));
        colorComponent->setGeometry(QRect(80, 410, 61, 20));
        configurePainter = new QPushButton(View);
        configurePainter->setObjectName(QString::fromUtf8("configurePainter"));
        configurePainter->setGeometry(QRect(10, 130, 141, 23));
        showIsolines = new QCheckBox(View);
        showIsolines->setObjectName(QString::fromUtf8("showIsolines"));
        showIsolines->setGeometry(QRect(10, 220, 81, 17));
        showIsolines->setChecked(false);
        heightmap = new QCheckBox(View);
        heightmap->setObjectName(QString::fromUtf8("heightmap"));
        heightmap->setGeometry(QRect(80, 220, 81, 17));
        illumination = new QCheckBox(View);
        illumination->setObjectName(QString::fromUtf8("illumination"));
        illumination->setGeometry(QRect(10, 690, 161, 17));
        illumination->setChecked(false);
        showForces = new QCheckBox(View);
        showForces->setObjectName(QString::fromUtf8("showForces"));
        showForces->setGeometry(QRect(10, 240, 81, 17));
        showForces->setChecked(false);
        QWidget::setTabOrder(updatePeriod, arrowSteps);
        QWidget::setTabOrder(arrowSteps, painter);
        QWidget::setTabOrder(painter, configurePainter);
        QWidget::setTabOrder(configurePainter, showAxis);
        QWidget::setTabOrder(showAxis, showStatic);
        QWidget::setTabOrder(showStatic, showDynamic);
        QWidget::setTabOrder(showDynamic, showIsolines);
        QWidget::setTabOrder(showIsolines, showForces);
        QWidget::setTabOrder(showForces, showParticles);
        QWidget::setTabOrder(showParticles, showColorBar);
        QWidget::setTabOrder(showColorBar, show2ndDistribution);
        QWidget::setTabOrder(show2ndDistribution, heightmap);
        QWidget::setTabOrder(heightmap, allView);
        QWidget::setTabOrder(allView, colorOffset);
        QWidget::setTabOrder(colorOffset, colorInterval);
        QWidget::setTabOrder(colorInterval, colorSteps);
        QWidget::setTabOrder(colorSteps, colorComponent);
        QWidget::setTabOrder(colorComponent, autoAdjust);
        QWidget::setTabOrder(autoAdjust, continuousAutoAdjust);
        QWidget::setTabOrder(continuousAutoAdjust, cellsSize);
        QWidget::setTabOrder(cellsSize, cellsSize2);
        QWidget::setTabOrder(cellsSize2, zoom);
        QWidget::setTabOrder(zoom, tx);
        QWidget::setTabOrder(tx, ty);
        QWidget::setTabOrder(ty, tz);
        QWidget::setTabOrder(tz, roll);
        QWidget::setTabOrder(roll, pitch);
        QWidget::setTabOrder(pitch, yaw);
        QWidget::setTabOrder(yaw, resetProjection);
        QWidget::setTabOrder(resetProjection, illumination);

        retranslateUi(View);

        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QWidget *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "Form", nullptr));
        showStatic->setText(QCoreApplication::translate("View", "Static", nullptr));
        painterLabel->setText(QCoreApplication::translate("View", "Painter:", nullptr));
        colorOffset->setText(QCoreApplication::translate("View", "0.15", nullptr));
        painter->setItemText(0, QCoreApplication::translate("View", "velocity", nullptr));
        painter->setItemText(1, QCoreApplication::translate("View", "pressure", nullptr));
        painter->setItemText(2, QCoreApplication::translate("View", "temperature", nullptr));
        painter->setItemText(3, QCoreApplication::translate("View", "arrow", nullptr));
        painter->setItemText(4, QCoreApplication::translate("View", "passive scalar", nullptr));
        painter->setItemText(5, QCoreApplication::translate("View", "multicomponent", nullptr));
        painter->setItemText(6, QCoreApplication::translate("View", "normal arrow", nullptr));
        painter->setItemText(7, QCoreApplication::translate("View", "stream function", nullptr));
        painter->setItemText(8, QCoreApplication::translate("View", "vorticity", nullptr));
        painter->setItemText(9, QCoreApplication::translate("View", "vorticity magnitude", nullptr));
        painter->setItemText(10, QCoreApplication::translate("View", "detail", nullptr));
        painter->setItemText(11, QCoreApplication::translate("View", "permeability", nullptr));
        painter->setItemText(12, QCoreApplication::translate("View", "microflux", nullptr));
        painter->setItemText(13, QCoreApplication::translate("View", "macroflux", nullptr));
        painter->setItemText(14, QCoreApplication::translate("View", "korner", nullptr));
        painter->setItemText(15, QCoreApplication::translate("View", "temp", nullptr));

        label_6->setText(QCoreApplication::translate("View", "Min:", nullptr));
        label_5->setText(QCoreApplication::translate("View", "Colors:", nullptr));
        showDynamic->setText(QCoreApplication::translate("View", "Dyn.", nullptr));
        label_7->setText(QCoreApplication::translate("View", "Max:", nullptr));
        colorInterval->setText(QCoreApplication::translate("View", "0.15", nullptr));
        painterLabel_2->setText(QCoreApplication::translate("View", "Upd (ms):", nullptr));
        updatePeriod->setText(QCoreApplication::translate("View", "0", nullptr));
        autoAdjust->setText(QCoreApplication::translate("View", "Auto Adjust", nullptr));
        continuousAutoAdjust->setText(QCoreApplication::translate("View", "Continuous AA", nullptr));
        label_8->setText(QCoreApplication::translate("View", "Sc1:", nullptr));
        cellsSize->setText(QCoreApplication::translate("View", "10", nullptr));
        showParticles->setText(QCoreApplication::translate("View", "Particles", nullptr));
        label_9->setText(QCoreApplication::translate("View", "Steps:", nullptr));
        colorSteps->setText(QCoreApplication::translate("View", "0", nullptr));
        painterLabel_3->setText(QCoreApplication::translate("View", "Group:", nullptr));
        arrowSteps->setText(QCoreApplication::translate("View", "1", nullptr));
        resetProjection->setText(QCoreApplication::translate("View", "Reset Projection", nullptr));
        showAxis->setText(QCoreApplication::translate("View", "Axis", nullptr));
        label_11->setText(QCoreApplication::translate("View", "Zoom:", nullptr));
        cellsSize2->setText(QCoreApplication::translate("View", "1", nullptr));
        label_10->setText(QCoreApplication::translate("View", "Sc2:", nullptr));
        zoom->setText(QCoreApplication::translate("View", "1", nullptr));
        label_12->setText(QCoreApplication::translate("View", "Roll:", nullptr));
        roll->setText(QCoreApplication::translate("View", "0", nullptr));
        pitch->setText(QCoreApplication::translate("View", "0", nullptr));
        label_13->setText(QCoreApplication::translate("View", "Pitch:", nullptr));
        label_14->setText(QCoreApplication::translate("View", "Yaw:", nullptr));
        yaw->setText(QCoreApplication::translate("View", "0", nullptr));
        allView->setText(QCoreApplication::translate("View", "All", nullptr));
        showColorBar->setText(QCoreApplication::translate("View", "ColorBar", nullptr));
        label_15->setText(QCoreApplication::translate("View", "tX:", nullptr));
        tx->setText(QCoreApplication::translate("View", "0", nullptr));
        tz->setText(QCoreApplication::translate("View", "0", nullptr));
        label_16->setText(QCoreApplication::translate("View", "tY:", nullptr));
        ty->setText(QCoreApplication::translate("View", "0", nullptr));
        label_17->setText(QCoreApplication::translate("View", "tZ:", nullptr));
        show2ndDistribution->setText(QCoreApplication::translate("View", "2nd Distr.", nullptr));
        label_18->setText(QCoreApplication::translate("View", "Component:", nullptr));
        colorComponent->setText(QCoreApplication::translate("View", "0", nullptr));
        configurePainter->setText(QCoreApplication::translate("View", "Configure", nullptr));
        showIsolines->setText(QCoreApplication::translate("View", "Isolines", nullptr));
        heightmap->setText(QCoreApplication::translate("View", "Heightmap", nullptr));
        illumination->setText(QCoreApplication::translate("View", "Illumination", nullptr));
        showForces->setText(QCoreApplication::translate("View", "Forces", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
