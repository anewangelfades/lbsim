/********************************************************************************
** Form generated from reading UI file 'animation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATION_H
#define UI_ANIMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "improvedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_Animation
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    ImprovedLineEdit *roll;
    QLabel *label_2;
    QLabel *label_3;
    ImprovedLineEdit *pitch;
    ImprovedLineEdit *yaw;
    QPushButton *start;
    QPushButton *stop;
    QLabel *label_4;
    ImprovedLineEdit *fps;
    QGroupBox *groupBox_2;
    ImprovedLineEdit *xzPlane;
    ImprovedLineEdit *xyPlane;
    QLabel *label_5;
    ImprovedLineEdit *yzPlane;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *Animation)
    {
        if (Animation->objectName().isEmpty())
            Animation->setObjectName(QString::fromUtf8("Animation"));
        Animation->setWindowModality(Qt::NonModal);
        Animation->resize(261, 242);
        Animation->setModal(false);
        groupBox = new QGroupBox(Animation);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 60, 241, 71));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 46, 13));
        roll = new ImprovedLineEdit(groupBox);
        roll->setObjectName(QString::fromUtf8("roll"));
        roll->setGeometry(QRect(10, 40, 61, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 20, 46, 13));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 20, 46, 13));
        pitch = new ImprovedLineEdit(groupBox);
        pitch->setObjectName(QString::fromUtf8("pitch"));
        pitch->setGeometry(QRect(90, 40, 61, 20));
        yaw = new ImprovedLineEdit(groupBox);
        yaw->setObjectName(QString::fromUtf8("yaw"));
        yaw->setGeometry(QRect(170, 40, 61, 20));
        start = new QPushButton(Animation);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(10, 210, 75, 23));
        start->setAutoDefault(false);
        stop = new QPushButton(Animation);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setEnabled(false);
        stop->setGeometry(QRect(180, 210, 75, 23));
        stop->setAutoDefault(false);
        label_4 = new QLabel(Animation);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 46, 13));
        fps = new ImprovedLineEdit(Animation);
        fps->setObjectName(QString::fromUtf8("fps"));
        fps->setGeometry(QRect(10, 30, 61, 20));
        groupBox_2 = new QGroupBox(Animation);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 130, 241, 71));
        xzPlane = new ImprovedLineEdit(groupBox_2);
        xzPlane->setObjectName(QString::fromUtf8("xzPlane"));
        xzPlane->setGeometry(QRect(90, 40, 61, 20));
        xyPlane = new ImprovedLineEdit(groupBox_2);
        xyPlane->setObjectName(QString::fromUtf8("xyPlane"));
        xyPlane->setGeometry(QRect(170, 40, 61, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 20, 46, 13));
        yzPlane = new ImprovedLineEdit(groupBox_2);
        yzPlane->setObjectName(QString::fromUtf8("yzPlane"));
        yzPlane->setGeometry(QRect(10, 40, 61, 20));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 20, 46, 13));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 20, 46, 13));
        QWidget::setTabOrder(fps, roll);
        QWidget::setTabOrder(roll, pitch);
        QWidget::setTabOrder(pitch, yaw);
        QWidget::setTabOrder(yaw, yzPlane);
        QWidget::setTabOrder(yzPlane, xzPlane);
        QWidget::setTabOrder(xzPlane, xyPlane);
        QWidget::setTabOrder(xyPlane, start);
        QWidget::setTabOrder(start, stop);

        retranslateUi(Animation);

        QMetaObject::connectSlotsByName(Animation);
    } // setupUi

    void retranslateUi(QDialog *Animation)
    {
        Animation->setWindowTitle(QCoreApplication::translate("Animation", "Animation", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Animation", "Rotation", nullptr));
        label->setText(QCoreApplication::translate("Animation", "Roll:", nullptr));
        roll->setText(QCoreApplication::translate("Animation", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Animation", "Pitch:", nullptr));
        label_3->setText(QCoreApplication::translate("Animation", "Yaw:", nullptr));
        pitch->setText(QCoreApplication::translate("Animation", "0", nullptr));
        yaw->setText(QCoreApplication::translate("Animation", "0", nullptr));
        start->setText(QCoreApplication::translate("Animation", "Start", nullptr));
        stop->setText(QCoreApplication::translate("Animation", "Stop", nullptr));
        label_4->setText(QCoreApplication::translate("Animation", "FPS:", nullptr));
        fps->setText(QCoreApplication::translate("Animation", "20", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Animation", "Visualization Planes", nullptr));
        xzPlane->setText(QCoreApplication::translate("Animation", "0", nullptr));
        xyPlane->setText(QCoreApplication::translate("Animation", "0", nullptr));
        label_5->setText(QCoreApplication::translate("Animation", "XZ:", nullptr));
        yzPlane->setText(QCoreApplication::translate("Animation", "0", nullptr));
        label_6->setText(QCoreApplication::translate("Animation", "YZ:", nullptr));
        label_7->setText(QCoreApplication::translate("Animation", "XY:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Animation: public Ui_Animation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATION_H
