/********************************************************************************
** Form generated from reading UI file 'particles.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTICLES_H
#define UI_PARTICLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include "improvedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_Particles
{
public:
    QLabel *label_9;
    QLineEdit *minX;
    QLineEdit *maxX;
    QLabel *label_12;
    ImprovedLineEdit *velocity;
    QGraphicsView *colorView2;
    QLineEdit *minZ;
    QPushButton *update;
    QPushButton *reset;
    QLineEdit *maxY;
    QPushButton *color2;
    QPushButton *deleteAll;
    QLineEdit *minY;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *resetAll;
    QLabel *label_10;
    ImprovedLineEdit *gridSpacing;
    QGraphicsView *colorView;
    ImprovedLineEdit *injectionPeriod;
    QLineEdit *maxZ;
    QPushButton *particlesNew;
    QPushButton *color;
    ImprovedLineEdit *diffusionEffect;
    QLabel *label_11;
    QLabel *gridSpacingLabel;
    QPushButton *particlesDelete;
    QLabel *label_14;
    QLabel *injectionPeriodLabel;
    QListView *particles;
    QLabel *velocityLabel;
    QRadioButton *particlesType;
    QRadioButton *passiveScalarType;
    ImprovedLineEdit *injectionTime;
    QLabel *injectionPeriodLabel_2;
    QLabel *label;
    QComboBox *passiveScalarMomentPropagation;
    QLabel *label_2;
    QLabel *label_3;
    ImprovedLineEdit *initialConcentration;
    ImprovedLineEdit *fixedConcentration;

    void setupUi(QDialog *Particles)
    {
        if (Particles->objectName().isEmpty())
            Particles->setObjectName(QString::fromUtf8("Particles"));
        Particles->resize(242, 522);
        label_9 = new QLabel(Particles);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 80, 46, 13));
        minX = new QLineEdit(Particles);
        minX->setObjectName(QString::fromUtf8("minX"));
        minX->setEnabled(false);
        minX->setGeometry(QRect(10, 100, 41, 20));
        maxX = new QLineEdit(Particles);
        maxX->setObjectName(QString::fromUtf8("maxX"));
        maxX->setEnabled(false);
        maxX->setGeometry(QRect(70, 100, 41, 20));
        label_12 = new QLabel(Particles);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 130, 46, 13));
        velocity = new ImprovedLineEdit(Particles);
        velocity->setObjectName(QString::fromUtf8("velocity"));
        velocity->setEnabled(true);
        velocity->setGeometry(QRect(130, 390, 101, 20));
        colorView2 = new QGraphicsView(Particles);
        colorView2->setObjectName(QString::fromUtf8("colorView2"));
        colorView2->setGeometry(QRect(80, 260, 21, 21));
        colorView2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        colorView2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        minZ = new QLineEdit(Particles);
        minZ->setObjectName(QString::fromUtf8("minZ"));
        minZ->setEnabled(false);
        minZ->setGeometry(QRect(10, 200, 41, 20));
        update = new QPushButton(Particles);
        update->setObjectName(QString::fromUtf8("update"));
        update->setEnabled(false);
        update->setGeometry(QRect(10, 290, 101, 23));
        update->setAutoDefault(false);
        reset = new QPushButton(Particles);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setEnabled(false);
        reset->setGeometry(QRect(130, 200, 101, 23));
        reset->setAutoDefault(false);
        maxY = new QLineEdit(Particles);
        maxY->setObjectName(QString::fromUtf8("maxY"));
        maxY->setEnabled(false);
        maxY->setGeometry(QRect(70, 150, 41, 20));
        color2 = new QPushButton(Particles);
        color2->setObjectName(QString::fromUtf8("color2"));
        color2->setEnabled(false);
        color2->setGeometry(QRect(70, 230, 41, 23));
        color2->setAutoDefault(false);
        deleteAll = new QPushButton(Particles);
        deleteAll->setObjectName(QString::fromUtf8("deleteAll"));
        deleteAll->setGeometry(QRect(130, 290, 101, 23));
        deleteAll->setAutoDefault(false);
        minY = new QLineEdit(Particles);
        minY->setObjectName(QString::fromUtf8("minY"));
        minY->setEnabled(false);
        minY->setGeometry(QRect(10, 150, 41, 20));
        label_7 = new QLabel(Particles);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 180, 46, 13));
        label_8 = new QLabel(Particles);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 80, 46, 13));
        resetAll = new QPushButton(Particles);
        resetAll->setObjectName(QString::fromUtf8("resetAll"));
        resetAll->setGeometry(QRect(130, 260, 101, 23));
        resetAll->setAutoDefault(false);
        label_10 = new QLabel(Particles);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 180, 46, 13));
        gridSpacing = new ImprovedLineEdit(Particles);
        gridSpacing->setObjectName(QString::fromUtf8("gridSpacing"));
        gridSpacing->setEnabled(true);
        gridSpacing->setGeometry(QRect(10, 340, 101, 20));
        colorView = new QGraphicsView(Particles);
        colorView->setObjectName(QString::fromUtf8("colorView"));
        colorView->setGeometry(QRect(20, 260, 21, 21));
        colorView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        colorView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        injectionPeriod = new ImprovedLineEdit(Particles);
        injectionPeriod->setObjectName(QString::fromUtf8("injectionPeriod"));
        injectionPeriod->setEnabled(true);
        injectionPeriod->setGeometry(QRect(10, 390, 101, 20));
        maxZ = new QLineEdit(Particles);
        maxZ->setObjectName(QString::fromUtf8("maxZ"));
        maxZ->setEnabled(false);
        maxZ->setGeometry(QRect(70, 200, 41, 20));
        particlesNew = new QPushButton(Particles);
        particlesNew->setObjectName(QString::fromUtf8("particlesNew"));
        particlesNew->setGeometry(QRect(20, 40, 81, 23));
        particlesNew->setAutoDefault(false);
        color = new QPushButton(Particles);
        color->setObjectName(QString::fromUtf8("color"));
        color->setEnabled(false);
        color->setGeometry(QRect(10, 230, 41, 23));
        color->setAutoDefault(false);
        diffusionEffect = new ImprovedLineEdit(Particles);
        diffusionEffect->setObjectName(QString::fromUtf8("diffusionEffect"));
        diffusionEffect->setEnabled(true);
        diffusionEffect->setGeometry(QRect(130, 340, 101, 20));
        label_11 = new QLabel(Particles);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(70, 130, 46, 13));
        gridSpacingLabel = new QLabel(Particles);
        gridSpacingLabel->setObjectName(QString::fromUtf8("gridSpacingLabel"));
        gridSpacingLabel->setGeometry(QRect(10, 320, 101, 16));
        particlesDelete = new QPushButton(Particles);
        particlesDelete->setObjectName(QString::fromUtf8("particlesDelete"));
        particlesDelete->setEnabled(false);
        particlesDelete->setGeometry(QRect(130, 230, 101, 23));
        particlesDelete->setAutoDefault(false);
        label_14 = new QLabel(Particles);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(130, 320, 101, 16));
        injectionPeriodLabel = new QLabel(Particles);
        injectionPeriodLabel->setObjectName(QString::fromUtf8("injectionPeriodLabel"));
        injectionPeriodLabel->setGeometry(QRect(10, 370, 101, 16));
        particles = new QListView(Particles);
        particles->setObjectName(QString::fromUtf8("particles"));
        particles->setGeometry(QRect(130, 40, 101, 151));
        velocityLabel = new QLabel(Particles);
        velocityLabel->setObjectName(QString::fromUtf8("velocityLabel"));
        velocityLabel->setGeometry(QRect(130, 370, 101, 16));
        particlesType = new QRadioButton(Particles);
        particlesType->setObjectName(QString::fromUtf8("particlesType"));
        particlesType->setGeometry(QRect(10, 10, 102, 18));
        particlesType->setChecked(true);
        passiveScalarType = new QRadioButton(Particles);
        passiveScalarType->setObjectName(QString::fromUtf8("passiveScalarType"));
        passiveScalarType->setGeometry(QRect(110, 10, 121, 18));
        injectionTime = new ImprovedLineEdit(Particles);
        injectionTime->setObjectName(QString::fromUtf8("injectionTime"));
        injectionTime->setEnabled(true);
        injectionTime->setGeometry(QRect(10, 440, 101, 20));
        injectionPeriodLabel_2 = new QLabel(Particles);
        injectionPeriodLabel_2->setObjectName(QString::fromUtf8("injectionPeriodLabel_2"));
        injectionPeriodLabel_2->setGeometry(QRect(10, 420, 101, 16));
        label = new QLabel(Particles);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 420, 46, 13));
        passiveScalarMomentPropagation = new QComboBox(Particles);
        passiveScalarMomentPropagation->addItem(QString());
        passiveScalarMomentPropagation->addItem(QString());
        passiveScalarMomentPropagation->setObjectName(QString::fromUtf8("passiveScalarMomentPropagation"));
        passiveScalarMomentPropagation->setGeometry(QRect(130, 440, 101, 22));
        label_2 = new QLabel(Particles);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 470, 111, 16));
        label_3 = new QLabel(Particles);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 470, 101, 16));
        initialConcentration = new ImprovedLineEdit(Particles);
        initialConcentration->setObjectName(QString::fromUtf8("initialConcentration"));
        initialConcentration->setEnabled(true);
        initialConcentration->setGeometry(QRect(10, 490, 101, 20));
        fixedConcentration = new ImprovedLineEdit(Particles);
        fixedConcentration->setObjectName(QString::fromUtf8("fixedConcentration"));
        fixedConcentration->setEnabled(true);
        fixedConcentration->setGeometry(QRect(130, 490, 101, 20));
        QWidget::setTabOrder(particlesType, passiveScalarType);
        QWidget::setTabOrder(passiveScalarType, particlesNew);
        QWidget::setTabOrder(particlesNew, minX);
        QWidget::setTabOrder(minX, maxX);
        QWidget::setTabOrder(maxX, minY);
        QWidget::setTabOrder(minY, maxY);
        QWidget::setTabOrder(maxY, minZ);
        QWidget::setTabOrder(minZ, maxZ);
        QWidget::setTabOrder(maxZ, color);
        QWidget::setTabOrder(color, color2);
        QWidget::setTabOrder(color2, colorView);
        QWidget::setTabOrder(colorView, colorView2);
        QWidget::setTabOrder(colorView2, update);
        QWidget::setTabOrder(update, particles);
        QWidget::setTabOrder(particles, reset);
        QWidget::setTabOrder(reset, particlesDelete);
        QWidget::setTabOrder(particlesDelete, resetAll);
        QWidget::setTabOrder(resetAll, deleteAll);
        QWidget::setTabOrder(deleteAll, gridSpacing);
        QWidget::setTabOrder(gridSpacing, diffusionEffect);
        QWidget::setTabOrder(diffusionEffect, injectionPeriod);
        QWidget::setTabOrder(injectionPeriod, velocity);

        retranslateUi(Particles);

        QMetaObject::connectSlotsByName(Particles);
    } // setupUi

    void retranslateUi(QDialog *Particles)
    {
        Particles->setWindowTitle(QCoreApplication::translate("Particles", "Particles", nullptr));
        label_9->setText(QCoreApplication::translate("Particles", "Min X:", nullptr));
        label_12->setText(QCoreApplication::translate("Particles", "Min Y:", nullptr));
        velocity->setText(QCoreApplication::translate("Particles", "50", nullptr));
        update->setText(QCoreApplication::translate("Particles", "Update", nullptr));
        reset->setText(QCoreApplication::translate("Particles", "Reset", nullptr));
        color2->setText(QCoreApplication::translate("Particles", "Color", nullptr));
        deleteAll->setText(QCoreApplication::translate("Particles", "Delete All", nullptr));
        label_7->setText(QCoreApplication::translate("Particles", "Max Z:", nullptr));
        label_8->setText(QCoreApplication::translate("Particles", "Max X:", nullptr));
        resetAll->setText(QCoreApplication::translate("Particles", "Reset All", nullptr));
        label_10->setText(QCoreApplication::translate("Particles", "Min Z:", nullptr));
        gridSpacing->setText(QCoreApplication::translate("Particles", "1", nullptr));
        injectionPeriod->setText(QCoreApplication::translate("Particles", "0", nullptr));
        particlesNew->setText(QCoreApplication::translate("Particles", "New", nullptr));
        color->setText(QCoreApplication::translate("Particles", "Color", nullptr));
        diffusionEffect->setText(QCoreApplication::translate("Particles", "0", nullptr));
        label_11->setText(QCoreApplication::translate("Particles", "Max Y:", nullptr));
        gridSpacingLabel->setText(QCoreApplication::translate("Particles", "Grid Spacing:", nullptr));
        particlesDelete->setText(QCoreApplication::translate("Particles", "Delete", nullptr));
        label_14->setText(QCoreApplication::translate("Particles", "Diffusion:", nullptr));
        injectionPeriodLabel->setText(QCoreApplication::translate("Particles", "Injection Period:", nullptr));
        velocityLabel->setText(QCoreApplication::translate("Particles", "Velocity:", nullptr));
        particlesType->setText(QCoreApplication::translate("Particles", "Particles", nullptr));
        passiveScalarType->setText(QCoreApplication::translate("Particles", "Passive Scalar", nullptr));
        injectionTime->setText(QCoreApplication::translate("Particles", "0", nullptr));
        injectionPeriodLabel_2->setText(QCoreApplication::translate("Particles", "Injection Time:", nullptr));
        label->setText(QCoreApplication::translate("Particles", "Type:", nullptr));
        passiveScalarMomentPropagation->setItemText(0, QCoreApplication::translate("Particles", "passive scalar", nullptr));
        passiveScalarMomentPropagation->setItemText(1, QCoreApplication::translate("Particles", "moment propagation", nullptr));

        label_2->setText(QCoreApplication::translate("Particles", "Initial Concentration:", nullptr));
        label_3->setText(QCoreApplication::translate("Particles", "Fixed Concentration:", nullptr));
        initialConcentration->setText(QCoreApplication::translate("Particles", "0", nullptr));
        fixedConcentration->setText(QCoreApplication::translate("Particles", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Particles: public Ui_Particles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTICLES_H
