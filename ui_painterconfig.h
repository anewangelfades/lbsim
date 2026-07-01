/********************************************************************************
** Form generated from reading UI file 'painterconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTERCONFIG_H
#define UI_PAINTERCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "improvedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_PainterConfig
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QComboBox *strategy;
    QLabel *label_2;
    QTableWidget *properties;
    QPushButton *update;
    QWidget *tab_2;
    QRadioButton *equallySpaced;
    QLabel *label_3;
    ImprovedLineEdit *count;
    QPushButton *fixedUpdate;
    QRadioButton *custom;
    QTableWidget *values;
    QPushButton *updateIsolines;
    QPushButton *addRow;
    QPushButton *deleteRow;
    QPushButton *sortIsolines;
    QPushButton *randomIsolines;
    QLineEdit *randomQuantity;
    QWidget *Stream;
    QComboBox *streamIntegrationX;
    QComboBox *streamIntegrationY;
    QLabel *label_4;

    void setupUi(QDialog *PainterConfig)
    {
        if (PainterConfig->objectName().isEmpty())
            PainterConfig->setObjectName(QString::fromUtf8("PainterConfig"));
        PainterConfig->resize(400, 400);
        tabWidget = new QTabWidget(PainterConfig);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 381, 381));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 101, 16));
        strategy = new QComboBox(tab);
        strategy->addItem(QString());
        strategy->setObjectName(QString::fromUtf8("strategy"));
        strategy->setGeometry(QRect(10, 30, 151, 22));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 151, 16));
        properties = new QTableWidget(tab);
        if (properties->columnCount() < 2)
            properties->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        properties->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        properties->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        properties->setObjectName(QString::fromUtf8("properties"));
        properties->setGeometry(QRect(10, 90, 351, 221));
        properties->setColumnCount(2);
        update = new QPushButton(tab);
        update->setObjectName(QString::fromUtf8("update"));
        update->setGeometry(QRect(10, 320, 351, 23));
        update->setAutoDefault(false);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        equallySpaced = new QRadioButton(tab_2);
        equallySpaced->setObjectName(QString::fromUtf8("equallySpaced"));
        equallySpaced->setGeometry(QRect(10, 10, 351, 18));
        equallySpaced->setChecked(true);
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 40, 81, 16));
        count = new ImprovedLineEdit(tab_2);
        count->setObjectName(QString::fromUtf8("count"));
        count->setGeometry(QRect(60, 40, 61, 20));
        fixedUpdate = new QPushButton(tab_2);
        fixedUpdate->setObjectName(QString::fromUtf8("fixedUpdate"));
        fixedUpdate->setEnabled(false);
        fixedUpdate->setGeometry(QRect(460, 210, 75, 23));
        custom = new QRadioButton(tab_2);
        custom->setObjectName(QString::fromUtf8("custom"));
        custom->setGeometry(QRect(200, 10, 161, 20));
        custom->setChecked(false);
        values = new QTableWidget(tab_2);
        if (values->columnCount() < 1)
            values->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        values->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        values->setObjectName(QString::fromUtf8("values"));
        values->setEnabled(false);
        values->setGeometry(QRect(200, 40, 161, 271));
        values->setColumnCount(1);
        updateIsolines = new QPushButton(tab_2);
        updateIsolines->setObjectName(QString::fromUtf8("updateIsolines"));
        updateIsolines->setGeometry(QRect(10, 320, 351, 23));
        updateIsolines->setAutoDefault(false);
        addRow = new QPushButton(tab_2);
        addRow->setObjectName(QString::fromUtf8("addRow"));
        addRow->setEnabled(false);
        addRow->setGeometry(QRect(10, 260, 181, 23));
        deleteRow = new QPushButton(tab_2);
        deleteRow->setObjectName(QString::fromUtf8("deleteRow"));
        deleteRow->setEnabled(false);
        deleteRow->setGeometry(QRect(10, 290, 181, 23));
        sortIsolines = new QPushButton(tab_2);
        sortIsolines->setObjectName(QString::fromUtf8("sortIsolines"));
        sortIsolines->setEnabled(false);
        sortIsolines->setGeometry(QRect(10, 230, 181, 23));
        randomIsolines = new QPushButton(tab_2);
        randomIsolines->setObjectName(QString::fromUtf8("randomIsolines"));
        randomIsolines->setEnabled(false);
        randomIsolines->setGeometry(QRect(100, 200, 91, 23));
        randomQuantity = new QLineEdit(tab_2);
        randomQuantity->setObjectName(QString::fromUtf8("randomQuantity"));
        randomQuantity->setGeometry(QRect(10, 200, 81, 20));
        tabWidget->addTab(tab_2, QString());
        Stream = new QWidget();
        Stream->setObjectName(QString::fromUtf8("Stream"));
        streamIntegrationX = new QComboBox(Stream);
        streamIntegrationX->addItem(QString());
        streamIntegrationX->addItem(QString());
        streamIntegrationX->setObjectName(QString::fromUtf8("streamIntegrationX"));
        streamIntegrationX->setGeometry(QRect(10, 30, 131, 22));
        streamIntegrationY = new QComboBox(Stream);
        streamIntegrationY->addItem(QString());
        streamIntegrationY->addItem(QString());
        streamIntegrationY->setObjectName(QString::fromUtf8("streamIntegrationY"));
        streamIntegrationY->setGeometry(QRect(10, 60, 131, 22));
        label_4 = new QLabel(Stream);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 351, 16));
        tabWidget->addTab(Stream, QString());
        QWidget::setTabOrder(tabWidget, strategy);
        QWidget::setTabOrder(strategy, properties);
        QWidget::setTabOrder(properties, update);
        QWidget::setTabOrder(update, equallySpaced);
        QWidget::setTabOrder(equallySpaced, count);
        QWidget::setTabOrder(count, custom);
        QWidget::setTabOrder(custom, values);
        QWidget::setTabOrder(values, randomQuantity);
        QWidget::setTabOrder(randomQuantity, randomIsolines);
        QWidget::setTabOrder(randomIsolines, sortIsolines);
        QWidget::setTabOrder(sortIsolines, addRow);
        QWidget::setTabOrder(addRow, deleteRow);
        QWidget::setTabOrder(deleteRow, updateIsolines);
        QWidget::setTabOrder(updateIsolines, streamIntegrationX);
        QWidget::setTabOrder(streamIntegrationX, streamIntegrationY);
        QWidget::setTabOrder(streamIntegrationY, fixedUpdate);

        retranslateUi(PainterConfig);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PainterConfig);
    } // setupUi

    void retranslateUi(QDialog *PainterConfig)
    {
        PainterConfig->setWindowTitle(QCoreApplication::translate("PainterConfig", "Configure", nullptr));
        label->setText(QCoreApplication::translate("PainterConfig", "Strategy:", nullptr));
        strategy->setItemText(0, QCoreApplication::translate("PainterConfig", "Seed - Euler", nullptr));

        label_2->setText(QCoreApplication::translate("PainterConfig", "Properties:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = properties->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PainterConfig", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = properties->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PainterConfig", "Value", nullptr));
        update->setText(QCoreApplication::translate("PainterConfig", "Update", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("PainterConfig", "Streamlines", nullptr));
        equallySpaced->setText(QCoreApplication::translate("PainterConfig", "Equally spaced:", nullptr));
        label_3->setText(QCoreApplication::translate("PainterConfig", "Count:", nullptr));
        count->setText(QCoreApplication::translate("PainterConfig", "10", nullptr));
        fixedUpdate->setText(QCoreApplication::translate("PainterConfig", "Update", nullptr));
        custom->setText(QCoreApplication::translate("PainterConfig", "Custom:", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = values->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PainterConfig", "Isoline Value", nullptr));
        updateIsolines->setText(QCoreApplication::translate("PainterConfig", "Update", nullptr));
        addRow->setText(QCoreApplication::translate("PainterConfig", "Add Row", nullptr));
        deleteRow->setText(QCoreApplication::translate("PainterConfig", "Delete", nullptr));
        sortIsolines->setText(QCoreApplication::translate("PainterConfig", "Sort", nullptr));
        randomIsolines->setText(QCoreApplication::translate("PainterConfig", "Suggest", nullptr));
        randomQuantity->setText(QCoreApplication::translate("PainterConfig", "10", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("PainterConfig", "Isolines", nullptr));
        streamIntegrationX->setItemText(0, QCoreApplication::translate("PainterConfig", "x- -> x+", nullptr));
        streamIntegrationX->setItemText(1, QCoreApplication::translate("PainterConfig", "x+ -> x-", nullptr));

        streamIntegrationY->setItemText(0, QCoreApplication::translate("PainterConfig", "y- -> y+", nullptr));
        streamIntegrationY->setItemText(1, QCoreApplication::translate("PainterConfig", "y+ -> y-", nullptr));

        label_4->setText(QCoreApplication::translate("PainterConfig", "Integration direction:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Stream), QCoreApplication::translate("PainterConfig", "Stream Func", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PainterConfig: public Ui_PainterConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTERCONFIG_H
