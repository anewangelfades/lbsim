/********************************************************************************
** Form generated from reading UI file 'mesher.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESHER_H
#define UI_MESHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Mesher
{
public:
    QComboBox *resizeFactor;
    QPushButton *resizeGeometry;
    QGroupBox *groupBox;
    QLineEdit *maxy;
    QLabel *label_17;
    QLabel *label_15;
    QLineEdit *miny;
    QLineEdit *maxx;
    QLineEdit *maxz;
    QLabel *label_16;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *minz;
    QLineEdit *minx;
    QLabel *label_12;
    QLabel *label_18;
    QComboBox *cellType;
    QPushButton *changeCells;
    QPushButton *newGrid;
    QPushButton *optimize;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLineEdit *porousPercent;
    QPushButton *porous;

    void setupUi(QDialog *Mesher)
    {
        if (Mesher->objectName().isEmpty())
            Mesher->setObjectName(QString::fromUtf8("Mesher"));
        Mesher->resize(400, 271);
        resizeFactor = new QComboBox(Mesher);
        resizeFactor->addItem(QString());
        resizeFactor->addItem(QString());
        resizeFactor->addItem(QString());
        resizeFactor->addItem(QString());
        resizeFactor->addItem(QString());
        resizeFactor->addItem(QString());
        resizeFactor->addItem(QString());
        resizeFactor->addItem(QString());
        resizeFactor->addItem(QString());
        resizeFactor->setObjectName(QString::fromUtf8("resizeFactor"));
        resizeFactor->setGeometry(QRect(10, 10, 61, 22));
        resizeGeometry = new QPushButton(Mesher);
        resizeGeometry->setObjectName(QString::fromUtf8("resizeGeometry"));
        resizeGeometry->setGeometry(QRect(80, 10, 141, 23));
        resizeGeometry->setAutoDefault(false);
        groupBox = new QGroupBox(Mesher);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 381, 141));
        maxy = new QLineEdit(groupBox);
        maxy->setObjectName(QString::fromUtf8("maxy"));
        maxy->setGeometry(QRect(190, 50, 51, 20));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(130, 30, 51, 16));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 30, 41, 16));
        miny = new QLineEdit(groupBox);
        miny->setObjectName(QString::fromUtf8("miny"));
        miny->setGeometry(QRect(130, 50, 51, 20));
        maxx = new QLineEdit(groupBox);
        maxx->setObjectName(QString::fromUtf8("maxx"));
        maxx->setGeometry(QRect(70, 50, 51, 20));
        maxz = new QLineEdit(groupBox);
        maxz->setObjectName(QString::fromUtf8("maxz"));
        maxz->setGeometry(QRect(310, 50, 51, 20));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(70, 30, 51, 16));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(250, 30, 51, 16));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(310, 30, 51, 16));
        minz = new QLineEdit(groupBox);
        minz->setObjectName(QString::fromUtf8("minz"));
        minz->setGeometry(QRect(250, 50, 51, 20));
        minx = new QLineEdit(groupBox);
        minx->setObjectName(QString::fromUtf8("minx"));
        minx->setGeometry(QRect(10, 50, 51, 20));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(190, 30, 51, 16));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 80, 141, 16));
        cellType = new QComboBox(groupBox);
        cellType->addItem(QString());
        cellType->addItem(QString());
        cellType->setObjectName(QString::fromUtf8("cellType"));
        cellType->setGeometry(QRect(10, 100, 121, 22));
        changeCells = new QPushButton(groupBox);
        changeCells->setObjectName(QString::fromUtf8("changeCells"));
        changeCells->setGeometry(QRect(260, 90, 101, 23));
        changeCells->setAutoDefault(false);
        newGrid = new QPushButton(groupBox);
        newGrid->setObjectName(QString::fromUtf8("newGrid"));
        newGrid->setGeometry(QRect(150, 90, 101, 23));
        newGrid->setAutoDefault(false);
        optimize = new QPushButton(Mesher);
        optimize->setObjectName(QString::fromUtf8("optimize"));
        optimize->setGeometry(QRect(310, 10, 75, 23));
        optimize->setAutoDefault(false);
        groupBox_2 = new QGroupBox(Mesher);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 189, 381, 71));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 71, 16));
        porousPercent = new QLineEdit(groupBox_2);
        porousPercent->setObjectName(QString::fromUtf8("porousPercent"));
        porousPercent->setGeometry(QRect(10, 40, 51, 20));
        porous = new QPushButton(groupBox_2);
        porous->setObjectName(QString::fromUtf8("porous"));
        porous->setGeometry(QRect(70, 30, 75, 23));
        porous->setAutoDefault(false);
        QWidget::setTabOrder(resizeFactor, resizeGeometry);
        QWidget::setTabOrder(resizeGeometry, optimize);
        QWidget::setTabOrder(optimize, minx);
        QWidget::setTabOrder(minx, maxx);
        QWidget::setTabOrder(maxx, miny);
        QWidget::setTabOrder(miny, maxy);
        QWidget::setTabOrder(maxy, minz);
        QWidget::setTabOrder(minz, maxz);
        QWidget::setTabOrder(maxz, cellType);
        QWidget::setTabOrder(cellType, newGrid);
        QWidget::setTabOrder(newGrid, changeCells);
        QWidget::setTabOrder(changeCells, porousPercent);
        QWidget::setTabOrder(porousPercent, porous);

        retranslateUi(Mesher);

        QMetaObject::connectSlotsByName(Mesher);
    } // setupUi

    void retranslateUi(QDialog *Mesher)
    {
        Mesher->setWindowTitle(QCoreApplication::translate("Mesher", "Mesher", nullptr));
        resizeFactor->setItemText(0, QCoreApplication::translate("Mesher", "x2", nullptr));
        resizeFactor->setItemText(1, QCoreApplication::translate("Mesher", "x3", nullptr));
        resizeFactor->setItemText(2, QCoreApplication::translate("Mesher", "x4", nullptr));
        resizeFactor->setItemText(3, QCoreApplication::translate("Mesher", "x5", nullptr));
        resizeFactor->setItemText(4, QCoreApplication::translate("Mesher", "x6", nullptr));
        resizeFactor->setItemText(5, QCoreApplication::translate("Mesher", "x7", nullptr));
        resizeFactor->setItemText(6, QCoreApplication::translate("Mesher", "x8", nullptr));
        resizeFactor->setItemText(7, QCoreApplication::translate("Mesher", "x9", nullptr));
        resizeFactor->setItemText(8, QCoreApplication::translate("Mesher", "x10", nullptr));

        resizeGeometry->setText(QCoreApplication::translate("Mesher", "Resize Geometry", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Mesher", "Change Cells", nullptr));
        maxy->setText(QCoreApplication::translate("Mesher", "0", nullptr));
        label_17->setText(QCoreApplication::translate("Mesher", "min y:", nullptr));
        label_15->setText(QCoreApplication::translate("Mesher", "min x:", nullptr));
        miny->setText(QCoreApplication::translate("Mesher", "0", nullptr));
        maxx->setText(QCoreApplication::translate("Mesher", "0", nullptr));
        maxz->setText(QCoreApplication::translate("Mesher", "0", nullptr));
        label_16->setText(QCoreApplication::translate("Mesher", "max x:", nullptr));
        label_13->setText(QCoreApplication::translate("Mesher", "min z:", nullptr));
        label_14->setText(QCoreApplication::translate("Mesher", "maz z:", nullptr));
        minz->setText(QCoreApplication::translate("Mesher", "0", nullptr));
        minx->setText(QCoreApplication::translate("Mesher", "0", nullptr));
        label_12->setText(QCoreApplication::translate("Mesher", "max y:", nullptr));
        label_18->setText(QCoreApplication::translate("Mesher", "New Type:", nullptr));
        cellType->setItemText(0, QCoreApplication::translate("Mesher", "fluid", nullptr));
        cellType->setItemText(1, QCoreApplication::translate("Mesher", "wall", nullptr));

        changeCells->setText(QCoreApplication::translate("Mesher", "Update", nullptr));
        newGrid->setText(QCoreApplication::translate("Mesher", "New Grid", nullptr));
        optimize->setText(QCoreApplication::translate("Mesher", "Optimize", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Mesher", "Porous", nullptr));
        label->setText(QCoreApplication::translate("Mesher", "Percent:", nullptr));
        porous->setText(QCoreApplication::translate("Mesher", "Porous!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mesher: public Ui_Mesher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESHER_H
