/********************************************************************************
** Form generated from reading UI file 'interpolation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERPOLATION_H
#define UI_INTERPOLATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Interpolation
{
public:
    QTableWidget *points;
    QPushButton *addLine;
    QPushButton *removeLine;
    QLineEdit *y;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *x;
    QLineEdit *z;
    QLabel *label_4;
    QLineEdit *density;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *variation;
    QLabel *label_7;
    QLineEdit *period;

    void setupUi(QDialog *Interpolation)
    {
        if (Interpolation->objectName().isEmpty())
            Interpolation->setObjectName(QString::fromUtf8("Interpolation"));
        Interpolation->resize(641, 311);
        points = new QTableWidget(Interpolation);
        if (points->columnCount() < 6)
            points->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        points->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        points->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        points->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        points->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        points->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        points->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        points->setObjectName(QString::fromUtf8("points"));
        points->setGeometry(QRect(10, 10, 621, 171));
        points->setRowCount(0);
        points->setColumnCount(6);
        addLine = new QPushButton(Interpolation);
        addLine->setObjectName(QString::fromUtf8("addLine"));
        addLine->setGeometry(QRect(230, 270, 151, 23));
        removeLine = new QPushButton(Interpolation);
        removeLine->setObjectName(QString::fromUtf8("removeLine"));
        removeLine->setEnabled(true);
        removeLine->setGeometry(QRect(230, 190, 151, 23));
        y = new QLineEdit(Interpolation);
        y->setObjectName(QString::fromUtf8("y"));
        y->setGeometry(QRect(110, 240, 91, 22));
        label = new QLabel(Interpolation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 220, 111, 16));
        label_3 = new QLabel(Interpolation);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 220, 71, 16));
        x = new QLineEdit(Interpolation);
        x->setObjectName(QString::fromUtf8("x"));
        x->setGeometry(QRect(10, 240, 91, 22));
        z = new QLineEdit(Interpolation);
        z->setObjectName(QString::fromUtf8("z"));
        z->setGeometry(QRect(210, 240, 91, 22));
        label_4 = new QLabel(Interpolation);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 220, 71, 16));
        density = new QLineEdit(Interpolation);
        density->setObjectName(QString::fromUtf8("density"));
        density->setGeometry(QRect(310, 240, 91, 22));
        label_5 = new QLabel(Interpolation);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(310, 220, 71, 16));
        label_6 = new QLabel(Interpolation);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(410, 220, 71, 16));
        variation = new QLineEdit(Interpolation);
        variation->setObjectName(QString::fromUtf8("variation"));
        variation->setGeometry(QRect(410, 240, 91, 22));
        label_7 = new QLabel(Interpolation);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(510, 220, 71, 16));
        period = new QLineEdit(Interpolation);
        period->setObjectName(QString::fromUtf8("period"));
        period->setGeometry(QRect(510, 240, 91, 22));
        QWidget::setTabOrder(points, removeLine);
        QWidget::setTabOrder(removeLine, x);
        QWidget::setTabOrder(x, y);
        QWidget::setTabOrder(y, z);
        QWidget::setTabOrder(z, density);
        QWidget::setTabOrder(density, addLine);

        retranslateUi(Interpolation);

        QMetaObject::connectSlotsByName(Interpolation);
    } // setupUi

    void retranslateUi(QDialog *Interpolation)
    {
        Interpolation->setWindowTitle(QCoreApplication::translate("Interpolation", "Interpolation", nullptr));
        QTableWidgetItem *___qtablewidgetitem = points->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Interpolation", "X", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = points->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Interpolation", "Y", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = points->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Interpolation", "Z", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = points->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Interpolation", "density", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = points->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Interpolation", "variation", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = points->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Interpolation", "period", nullptr));
        addLine->setText(QCoreApplication::translate("Interpolation", "Add Line", nullptr));
        removeLine->setText(QCoreApplication::translate("Interpolation", "Remove Line", nullptr));
        y->setText(QString());
        label->setText(QCoreApplication::translate("Interpolation", "X:", nullptr));
        label_3->setText(QCoreApplication::translate("Interpolation", "Y:", nullptr));
        x->setText(QString());
        z->setText(QString());
        label_4->setText(QCoreApplication::translate("Interpolation", "Z:", nullptr));
        density->setText(QString());
        label_5->setText(QCoreApplication::translate("Interpolation", "density:", nullptr));
        label_6->setText(QCoreApplication::translate("Interpolation", "variation:", nullptr));
        variation->setText(QString());
        label_7->setText(QCoreApplication::translate("Interpolation", "period:", nullptr));
        period->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Interpolation: public Ui_Interpolation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERPOLATION_H
