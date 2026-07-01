/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "improvedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QLabel *iterationsLabel;
    QLabel *iterations;
    QLabel *gridSize;
    QLabel *label_7;
    QLabel *fileLabel;
    QLabel *file;
    QLabel *messageLabel_2;
    QLabel *deltaP;
    QLabel *messageLabel_3;
    QLabel *performance;
    QLabel *messageLabel_4;
    QLabel *expendedTime;
    QLabel *messageLabel_5;
    QLabel *averageP;
    QCheckBox *disableCharts;
    QCheckBox *multicoreSupport;
    QLabel *messageLabel_6;
    QLabel *label_2;
    ImprovedLineEdit *renderUpdate;
    QLabel *remainingTime;
    QLabel *messageLabel_8;
    QLabel *label_3;
    ImprovedLineEdit *executionBurst;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_4;
    ImprovedLineEdit *infoX;
    ImprovedLineEdit *infoY;
    QLabel *label_5;
    ImprovedLineEdit *infoZ;
    QLabel *label_6;
    QLabel *velocityX;
    QLabel *messageLabel_7;
    QLabel *messageLabel_9;
    QLabel *density;
    QLabel *messageLabel_10;
    QLabel *vorticityX;
    QLabel *messageLabel_11;
    QLabel *stream;
    QLabel *velocityY;
    QLabel *velocityZ;
    QLabel *vorticityY;
    QLabel *vorticityZ;
    ImprovedLineEdit *infoZ2;
    QLabel *label_8;
    ImprovedLineEdit *infoY2;
    QLabel *label_9;
    ImprovedLineEdit *infoX2;
    QLabel *label_10;
    QLabel *messageLabel_12;
    QLabel *flux;

    void setupUi(QWidget *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName(QString::fromUtf8("Info"));
        Info->resize(191, 712);
        iterationsLabel = new QLabel(Info);
        iterationsLabel->setObjectName(QString::fromUtf8("iterationsLabel"));
        iterationsLabel->setGeometry(QRect(10, 30, 81, 13));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        iterationsLabel->setFont(font);
        iterations = new QLabel(Info);
        iterations->setObjectName(QString::fromUtf8("iterations"));
        iterations->setGeometry(QRect(10, 50, 61, 13));
        gridSize = new QLabel(Info);
        gridSize->setObjectName(QString::fromUtf8("gridSize"));
        gridSize->setGeometry(QRect(10, 100, 141, 16));
        label_7 = new QLabel(Info);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 80, 81, 13));
        label_7->setFont(font);
        fileLabel = new QLabel(Info);
        fileLabel->setObjectName(QString::fromUtf8("fileLabel"));
        fileLabel->setGeometry(QRect(10, 130, 61, 13));
        fileLabel->setFont(font);
        file = new QLabel(Info);
        file->setObjectName(QString::fromUtf8("file"));
        file->setGeometry(QRect(10, 150, 161, 13));
        messageLabel_2 = new QLabel(Info);
        messageLabel_2->setObjectName(QString::fromUtf8("messageLabel_2"));
        messageLabel_2->setGeometry(QRect(10, 180, 81, 13));
        messageLabel_2->setFont(font);
        deltaP = new QLabel(Info);
        deltaP->setObjectName(QString::fromUtf8("deltaP"));
        deltaP->setGeometry(QRect(10, 200, 101, 13));
        messageLabel_3 = new QLabel(Info);
        messageLabel_3->setObjectName(QString::fromUtf8("messageLabel_3"));
        messageLabel_3->setGeometry(QRect(110, 30, 151, 13));
        messageLabel_3->setFont(font);
        performance = new QLabel(Info);
        performance->setObjectName(QString::fromUtf8("performance"));
        performance->setGeometry(QRect(110, 50, 71, 16));
        messageLabel_4 = new QLabel(Info);
        messageLabel_4->setObjectName(QString::fromUtf8("messageLabel_4"));
        messageLabel_4->setGeometry(QRect(10, 230, 171, 13));
        messageLabel_4->setFont(font);
        expendedTime = new QLabel(Info);
        expendedTime->setObjectName(QString::fromUtf8("expendedTime"));
        expendedTime->setGeometry(QRect(10, 250, 101, 13));
        messageLabel_5 = new QLabel(Info);
        messageLabel_5->setObjectName(QString::fromUtf8("messageLabel_5"));
        messageLabel_5->setGeometry(QRect(110, 180, 81, 13));
        messageLabel_5->setFont(font);
        averageP = new QLabel(Info);
        averageP->setObjectName(QString::fromUtf8("averageP"));
        averageP->setGeometry(QRect(110, 200, 101, 13));
        disableCharts = new QCheckBox(Info);
        disableCharts->setObjectName(QString::fromUtf8("disableCharts"));
        disableCharts->setGeometry(QRect(10, 630, 161, 17));
        disableCharts->setChecked(true);
        multicoreSupport = new QCheckBox(Info);
        multicoreSupport->setObjectName(QString::fromUtf8("multicoreSupport"));
        multicoreSupport->setGeometry(QRect(10, 610, 151, 17));
        multicoreSupport->setChecked(true);
        messageLabel_6 = new QLabel(Info);
        messageLabel_6->setObjectName(QString::fromUtf8("messageLabel_6"));
        messageLabel_6->setGeometry(QRect(10, 590, 171, 13));
        messageLabel_6->setFont(font);
        label_2 = new QLabel(Info);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 660, 141, 16));
        renderUpdate = new ImprovedLineEdit(Info);
        renderUpdate->setObjectName(QString::fromUtf8("renderUpdate"));
        renderUpdate->setGeometry(QRect(10, 680, 71, 20));
        remainingTime = new QLabel(Info);
        remainingTime->setObjectName(QString::fromUtf8("remainingTime"));
        remainingTime->setGeometry(QRect(110, 250, 101, 13));
        messageLabel_8 = new QLabel(Info);
        messageLabel_8->setObjectName(QString::fromUtf8("messageLabel_8"));
        messageLabel_8->setGeometry(QRect(110, 230, 171, 13));
        messageLabel_8->setFont(font);
        label_3 = new QLabel(Info);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 660, 141, 16));
        executionBurst = new ImprovedLineEdit(Info);
        executionBurst->setObjectName(QString::fromUtf8("executionBurst"));
        executionBurst->setGeometry(QRect(110, 680, 71, 20));
        line = new QFrame(Info);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 270, 171, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Info);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 570, 171, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(Info);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 290, 141, 16));
        infoX = new ImprovedLineEdit(Info);
        infoX->setObjectName(QString::fromUtf8("infoX"));
        infoX->setGeometry(QRect(10, 310, 51, 20));
        infoY = new ImprovedLineEdit(Info);
        infoY->setObjectName(QString::fromUtf8("infoY"));
        infoY->setGeometry(QRect(70, 310, 51, 20));
        label_5 = new QLabel(Info);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 290, 141, 16));
        infoZ = new ImprovedLineEdit(Info);
        infoZ->setObjectName(QString::fromUtf8("infoZ"));
        infoZ->setGeometry(QRect(130, 310, 51, 20));
        label_6 = new QLabel(Info);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(130, 290, 141, 16));
        velocityX = new QLabel(Info);
        velocityX->setObjectName(QString::fromUtf8("velocityX"));
        velocityX->setGeometry(QRect(80, 360, 141, 20));
        messageLabel_7 = new QLabel(Info);
        messageLabel_7->setObjectName(QString::fromUtf8("messageLabel_7"));
        messageLabel_7->setGeometry(QRect(10, 360, 61, 16));
        messageLabel_7->setFont(font);
        messageLabel_9 = new QLabel(Info);
        messageLabel_9->setObjectName(QString::fromUtf8("messageLabel_9"));
        messageLabel_9->setGeometry(QRect(10, 420, 81, 16));
        messageLabel_9->setFont(font);
        density = new QLabel(Info);
        density->setObjectName(QString::fromUtf8("density"));
        density->setGeometry(QRect(80, 420, 141, 20));
        messageLabel_10 = new QLabel(Info);
        messageLabel_10->setObjectName(QString::fromUtf8("messageLabel_10"));
        messageLabel_10->setGeometry(QRect(10, 440, 81, 16));
        messageLabel_10->setFont(font);
        vorticityX = new QLabel(Info);
        vorticityX->setObjectName(QString::fromUtf8("vorticityX"));
        vorticityX->setGeometry(QRect(80, 440, 141, 20));
        messageLabel_11 = new QLabel(Info);
        messageLabel_11->setObjectName(QString::fromUtf8("messageLabel_11"));
        messageLabel_11->setGeometry(QRect(10, 500, 81, 16));
        messageLabel_11->setFont(font);
        stream = new QLabel(Info);
        stream->setObjectName(QString::fromUtf8("stream"));
        stream->setGeometry(QRect(80, 500, 121, 20));
        velocityY = new QLabel(Info);
        velocityY->setObjectName(QString::fromUtf8("velocityY"));
        velocityY->setGeometry(QRect(80, 380, 141, 20));
        velocityZ = new QLabel(Info);
        velocityZ->setObjectName(QString::fromUtf8("velocityZ"));
        velocityZ->setGeometry(QRect(80, 400, 141, 20));
        vorticityY = new QLabel(Info);
        vorticityY->setObjectName(QString::fromUtf8("vorticityY"));
        vorticityY->setGeometry(QRect(80, 460, 141, 20));
        vorticityZ = new QLabel(Info);
        vorticityZ->setObjectName(QString::fromUtf8("vorticityZ"));
        vorticityZ->setGeometry(QRect(80, 480, 141, 20));
        infoZ2 = new ImprovedLineEdit(Info);
        infoZ2->setObjectName(QString::fromUtf8("infoZ2"));
        infoZ2->setGeometry(QRect(130, 540, 51, 20));
        label_8 = new QLabel(Info);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 520, 141, 16));
        infoY2 = new ImprovedLineEdit(Info);
        infoY2->setObjectName(QString::fromUtf8("infoY2"));
        infoY2->setGeometry(QRect(70, 540, 51, 20));
        label_9 = new QLabel(Info);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 520, 141, 16));
        infoX2 = new ImprovedLineEdit(Info);
        infoX2->setObjectName(QString::fromUtf8("infoX2"));
        infoX2->setGeometry(QRect(10, 540, 51, 20));
        label_10 = new QLabel(Info);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(130, 520, 141, 16));
        messageLabel_12 = new QLabel(Info);
        messageLabel_12->setObjectName(QString::fromUtf8("messageLabel_12"));
        messageLabel_12->setGeometry(QRect(10, 340, 61, 16));
        messageLabel_12->setFont(font);
        flux = new QLabel(Info);
        flux->setObjectName(QString::fromUtf8("flux"));
        flux->setGeometry(QRect(80, 340, 141, 20));
        QWidget::setTabOrder(infoX, infoY);
        QWidget::setTabOrder(infoY, infoZ);
        QWidget::setTabOrder(infoZ, infoX2);
        QWidget::setTabOrder(infoX2, infoY2);
        QWidget::setTabOrder(infoY2, infoZ2);
        QWidget::setTabOrder(infoZ2, multicoreSupport);
        QWidget::setTabOrder(multicoreSupport, disableCharts);
        QWidget::setTabOrder(disableCharts, renderUpdate);
        QWidget::setTabOrder(renderUpdate, executionBurst);

        retranslateUi(Info);

        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QWidget *Info)
    {
        Info->setWindowTitle(QCoreApplication::translate("Info", "Form", nullptr));
        iterationsLabel->setText(QCoreApplication::translate("Info", "Iterations:", nullptr));
        iterations->setText(QCoreApplication::translate("Info", "0", nullptr));
        gridSize->setText(QCoreApplication::translate("Info", "0 x 0 x 0", nullptr));
        label_7->setText(QCoreApplication::translate("Info", "Grid Size:", nullptr));
        fileLabel->setText(QCoreApplication::translate("Info", "File:", nullptr));
        file->setText(QCoreApplication::translate("Info", "None", nullptr));
        messageLabel_2->setText(QCoreApplication::translate("Info", "Delta P:", nullptr));
        deltaP->setText(QCoreApplication::translate("Info", "0", nullptr));
        messageLabel_3->setText(QCoreApplication::translate("Info", "MLUPS (avg.):", nullptr));
        performance->setText(QCoreApplication::translate("Info", "0", nullptr));
        messageLabel_4->setText(QCoreApplication::translate("Info", "Time:", nullptr));
        expendedTime->setText(QCoreApplication::translate("Info", "00:00:00", nullptr));
        messageLabel_5->setText(QCoreApplication::translate("Info", "Avg. P:", nullptr));
        averageP->setText(QCoreApplication::translate("Info", "0", nullptr));
        disableCharts->setText(QCoreApplication::translate("Info", "Disable Charts", nullptr));
        multicoreSupport->setText(QCoreApplication::translate("Info", "Multicore Support", nullptr));
        messageLabel_6->setText(QCoreApplication::translate("Info", "Perfomance Tweaks:", nullptr));
        label_2->setText(QCoreApplication::translate("Info", "Render Update:", nullptr));
        renderUpdate->setText(QCoreApplication::translate("Info", "10", nullptr));
        remainingTime->setText(QCoreApplication::translate("Info", "00:00:00", nullptr));
        messageLabel_8->setText(QCoreApplication::translate("Info", "Remaining:", nullptr));
        label_3->setText(QCoreApplication::translate("Info", "Exec. Burst:", nullptr));
        executionBurst->setText(QCoreApplication::translate("Info", "1", nullptr));
        label_4->setText(QCoreApplication::translate("Info", "x:", nullptr));
        infoX->setText(QCoreApplication::translate("Info", "0", nullptr));
        infoY->setText(QCoreApplication::translate("Info", "0", nullptr));
        label_5->setText(QCoreApplication::translate("Info", "y:", nullptr));
        infoZ->setText(QCoreApplication::translate("Info", "0", nullptr));
        label_6->setText(QCoreApplication::translate("Info", "z:", nullptr));
        velocityX->setText(QString());
        messageLabel_7->setText(QCoreApplication::translate("Info", "Velocity:", nullptr));
        messageLabel_9->setText(QCoreApplication::translate("Info", "Density:", nullptr));
        density->setText(QString());
        messageLabel_10->setText(QCoreApplication::translate("Info", "Vorticity:", nullptr));
        vorticityX->setText(QString());
        messageLabel_11->setText(QCoreApplication::translate("Info", "Stream:", nullptr));
        stream->setText(QString());
        velocityY->setText(QString());
        velocityZ->setText(QString());
        vorticityY->setText(QString());
        vorticityZ->setText(QString());
        infoZ2->setText(QCoreApplication::translate("Info", "0", nullptr));
        label_8->setText(QCoreApplication::translate("Info", "y:", nullptr));
        infoY2->setText(QCoreApplication::translate("Info", "0", nullptr));
        label_9->setText(QCoreApplication::translate("Info", "x:", nullptr));
        infoX2->setText(QCoreApplication::translate("Info", "0", nullptr));
        label_10->setText(QCoreApplication::translate("Info", "z:", nullptr));
        messageLabel_12->setText(QCoreApplication::translate("Info", "Flux:", nullptr));
        flux->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
