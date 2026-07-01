/********************************************************************************
** Form generated from reading UI file 'view2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW2_H
#define UI_VIEW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_View2
{
public:
    QGroupBox *groupBox;
    QSlider *fixedX;
    QSlider *maxX;
    QSlider *minX;
    QLabel *minXLabel;
    QLabel *maxXLabel;
    QPushButton *allX;
    QGroupBox *groupBox_2;
    QSlider *fixedY;
    QSlider *maxY;
    QSlider *minY;
    QLabel *minYLabel;
    QLabel *maxYLabel;
    QPushButton *allY;
    QGroupBox *groupBox_3;
    QSlider *fixedZ;
    QSlider *maxZ;
    QSlider *minZ;
    QLabel *minZLabel;
    QLabel *maxZLabel;
    QPushButton *allZ;
    QGroupBox *groupBox_4;
    QCheckBox *xyPlane;
    QCheckBox *xzPlane;
    QCheckBox *yzPlane;
    QCheckBox *wholePlane1;
    QCheckBox *wholePlane2;
    QCheckBox *wholePlane3;

    void setupUi(QDialog *View2)
    {
        if (View2->objectName().isEmpty())
            View2->setObjectName(QString::fromUtf8("View2"));
        View2->resize(441, 462);
        groupBox = new QGroupBox(View2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 90, 421, 101));
        fixedX = new QSlider(groupBox);
        fixedX->setObjectName(QString::fromUtf8("fixedX"));
        fixedX->setEnabled(true);
        fixedX->setGeometry(QRect(20, 70, 321, 21));
        fixedX->setMaximum(1000);
        fixedX->setValue(500);
        fixedX->setOrientation(Qt::Horizontal);
        maxX = new QSlider(groupBox);
        maxX->setObjectName(QString::fromUtf8("maxX"));
        maxX->setGeometry(QRect(20, 50, 321, 21));
        maxX->setMaximum(1000);
        maxX->setSingleStep(1);
        maxX->setValue(1000);
        maxX->setOrientation(Qt::Horizontal);
        minX = new QSlider(groupBox);
        minX->setObjectName(QString::fromUtf8("minX"));
        minX->setGeometry(QRect(20, 30, 321, 21));
        minX->setMaximum(1000);
        minX->setOrientation(Qt::Horizontal);
        minXLabel = new QLabel(groupBox);
        minXLabel->setObjectName(QString::fromUtf8("minXLabel"));
        minXLabel->setGeometry(QRect(350, 30, 62, 16));
        minXLabel->setAlignment(Qt::AlignCenter);
        maxXLabel = new QLabel(groupBox);
        maxXLabel->setObjectName(QString::fromUtf8("maxXLabel"));
        maxXLabel->setGeometry(QRect(350, 50, 62, 16));
        maxXLabel->setAlignment(Qt::AlignCenter);
        allX = new QPushButton(groupBox);
        allX->setObjectName(QString::fromUtf8("allX"));
        allX->setGeometry(QRect(350, 70, 61, 23));
        allX->setAutoDefault(false);
        groupBox_2 = new QGroupBox(View2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 220, 421, 101));
        fixedY = new QSlider(groupBox_2);
        fixedY->setObjectName(QString::fromUtf8("fixedY"));
        fixedY->setEnabled(true);
        fixedY->setGeometry(QRect(20, 70, 321, 21));
        fixedY->setMaximum(1000);
        fixedY->setValue(500);
        fixedY->setOrientation(Qt::Horizontal);
        maxY = new QSlider(groupBox_2);
        maxY->setObjectName(QString::fromUtf8("maxY"));
        maxY->setGeometry(QRect(20, 50, 321, 21));
        maxY->setMaximum(1000);
        maxY->setValue(1000);
        maxY->setOrientation(Qt::Horizontal);
        minY = new QSlider(groupBox_2);
        minY->setObjectName(QString::fromUtf8("minY"));
        minY->setGeometry(QRect(20, 30, 321, 21));
        minY->setMaximum(1000);
        minY->setOrientation(Qt::Horizontal);
        minYLabel = new QLabel(groupBox_2);
        minYLabel->setObjectName(QString::fromUtf8("minYLabel"));
        minYLabel->setGeometry(QRect(350, 30, 62, 16));
        minYLabel->setAlignment(Qt::AlignCenter);
        maxYLabel = new QLabel(groupBox_2);
        maxYLabel->setObjectName(QString::fromUtf8("maxYLabel"));
        maxYLabel->setGeometry(QRect(350, 50, 62, 16));
        maxYLabel->setAlignment(Qt::AlignCenter);
        allY = new QPushButton(groupBox_2);
        allY->setObjectName(QString::fromUtf8("allY"));
        allY->setGeometry(QRect(350, 70, 61, 23));
        allY->setAutoDefault(false);
        groupBox_3 = new QGroupBox(View2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 350, 421, 101));
        fixedZ = new QSlider(groupBox_3);
        fixedZ->setObjectName(QString::fromUtf8("fixedZ"));
        fixedZ->setEnabled(true);
        fixedZ->setGeometry(QRect(20, 70, 321, 21));
        fixedZ->setMaximum(1000);
        fixedZ->setValue(500);
        fixedZ->setOrientation(Qt::Horizontal);
        maxZ = new QSlider(groupBox_3);
        maxZ->setObjectName(QString::fromUtf8("maxZ"));
        maxZ->setGeometry(QRect(20, 50, 321, 21));
        maxZ->setMaximum(1000);
        maxZ->setValue(1000);
        maxZ->setOrientation(Qt::Horizontal);
        minZ = new QSlider(groupBox_3);
        minZ->setObjectName(QString::fromUtf8("minZ"));
        minZ->setGeometry(QRect(20, 30, 321, 21));
        minZ->setMaximum(1000);
        minZ->setOrientation(Qt::Horizontal);
        minZLabel = new QLabel(groupBox_3);
        minZLabel->setObjectName(QString::fromUtf8("minZLabel"));
        minZLabel->setGeometry(QRect(350, 30, 62, 16));
        minZLabel->setAlignment(Qt::AlignCenter);
        maxZLabel = new QLabel(groupBox_3);
        maxZLabel->setObjectName(QString::fromUtf8("maxZLabel"));
        maxZLabel->setGeometry(QRect(350, 50, 62, 16));
        maxZLabel->setAlignment(Qt::AlignCenter);
        allZ = new QPushButton(groupBox_3);
        allZ->setObjectName(QString::fromUtf8("allZ"));
        allZ->setGeometry(QRect(350, 70, 61, 23));
        allZ->setAutoDefault(false);
        groupBox_4 = new QGroupBox(View2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 421, 51));
        xyPlane = new QCheckBox(groupBox_4);
        xyPlane->setObjectName(QString::fromUtf8("xyPlane"));
        xyPlane->setGeometry(QRect(10, 20, 130, 17));
        xyPlane->setChecked(true);
        xzPlane = new QCheckBox(groupBox_4);
        xzPlane->setObjectName(QString::fromUtf8("xzPlane"));
        xzPlane->setGeometry(QRect(150, 20, 130, 17));
        yzPlane = new QCheckBox(groupBox_4);
        yzPlane->setObjectName(QString::fromUtf8("yzPlane"));
        yzPlane->setGeometry(QRect(290, 20, 130, 17));
        wholePlane1 = new QCheckBox(View2);
        wholePlane1->setObjectName(QString::fromUtf8("wholePlane1"));
        wholePlane1->setGeometry(QRect(10, 70, 261, 17));
        wholePlane1->setChecked(false);
        wholePlane2 = new QCheckBox(View2);
        wholePlane2->setObjectName(QString::fromUtf8("wholePlane2"));
        wholePlane2->setGeometry(QRect(10, 200, 321, 17));
        wholePlane2->setChecked(false);
        wholePlane3 = new QCheckBox(View2);
        wholePlane3->setObjectName(QString::fromUtf8("wholePlane3"));
        wholePlane3->setGeometry(QRect(10, 330, 261, 17));
        wholePlane3->setChecked(false);
        QWidget::setTabOrder(xyPlane, xzPlane);
        QWidget::setTabOrder(xzPlane, yzPlane);
        QWidget::setTabOrder(yzPlane, wholePlane1);
        QWidget::setTabOrder(wholePlane1, minX);
        QWidget::setTabOrder(minX, maxX);
        QWidget::setTabOrder(maxX, fixedX);
        QWidget::setTabOrder(fixedX, allX);
        QWidget::setTabOrder(allX, wholePlane2);
        QWidget::setTabOrder(wholePlane2, minY);
        QWidget::setTabOrder(minY, maxY);
        QWidget::setTabOrder(maxY, fixedY);
        QWidget::setTabOrder(fixedY, allY);
        QWidget::setTabOrder(allY, wholePlane3);
        QWidget::setTabOrder(wholePlane3, minZ);
        QWidget::setTabOrder(minZ, maxZ);
        QWidget::setTabOrder(maxZ, fixedZ);
        QWidget::setTabOrder(fixedZ, allZ);

        retranslateUi(View2);

        QMetaObject::connectSlotsByName(View2);
    } // setupUi

    void retranslateUi(QDialog *View2)
    {
        View2->setWindowTitle(QCoreApplication::translate("View2", "View2", nullptr));
        groupBox->setTitle(QCoreApplication::translate("View2", "X axis", nullptr));
        minXLabel->setText(QString());
        maxXLabel->setText(QString());
        allX->setText(QCoreApplication::translate("View2", "All", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("View2", "Y axis", nullptr));
        minYLabel->setText(QString());
        maxYLabel->setText(QString());
        allY->setText(QCoreApplication::translate("View2", "All", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("View2", "Z axis", nullptr));
        minZLabel->setText(QString());
        maxZLabel->setText(QString());
        allZ->setText(QCoreApplication::translate("View2", "All", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("View2", "Rendering Orientation", nullptr));
        xyPlane->setText(QCoreApplication::translate("View2", "XY plane", nullptr));
        xzPlane->setText(QCoreApplication::translate("View2", "XZ plane", nullptr));
        yzPlane->setText(QCoreApplication::translate("View2", "YZ plane", nullptr));
        wholePlane1->setText(QCoreApplication::translate("View2", "YZ plane", nullptr));
        wholePlane2->setText(QCoreApplication::translate("View2", "XZ plane", nullptr));
        wholePlane3->setText(QCoreApplication::translate("View2", "XY plane", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View2: public Ui_View2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW2_H
