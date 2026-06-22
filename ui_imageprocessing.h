/********************************************************************************
** Form generated from reading UI file 'imageprocessing.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEPROCESSING_H
#define UI_IMAGEPROCESSING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "improvedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_ImageProcessing
{
public:
    QAction *actionOpen;
    QAction *actionOnly_Left;
    QAction *actionOnly_Right;
    QAction *actionAll;
    QAction *actionSave;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QGraphicsView *gv1;
    QGroupBox *groupBox;
    QPushButton *defaultColor;
    QListView *colors;
    QPushButton *remove;
    QPushButton *fromColor;
    QPushButton *toColor;
    QPushButton *add;
    QLabel *label_32;
    ImprovedLineEdit *tolerance;
    ImprovedLineEdit *average;
    QLabel *label_33;
    QGraphicsView *gv2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ImageProcessing)
    {
        if (ImageProcessing->objectName().isEmpty())
            ImageProcessing->setObjectName(QString::fromUtf8("ImageProcessing"));
        ImageProcessing->resize(800, 600);
        actionOpen = new QAction(ImageProcessing);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOnly_Left = new QAction(ImageProcessing);
        actionOnly_Left->setObjectName(QString::fromUtf8("actionOnly_Left"));
        actionOnly_Right = new QAction(ImageProcessing);
        actionOnly_Right->setObjectName(QString::fromUtf8("actionOnly_Right"));
        actionAll = new QAction(ImageProcessing);
        actionAll->setObjectName(QString::fromUtf8("actionAll"));
        actionSave = new QAction(ImageProcessing);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralwidget = new QWidget(ImageProcessing);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        gv1 = new QGraphicsView(splitter);
        gv1->setObjectName(QString::fromUtf8("gv1"));
        splitter->addWidget(gv1);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(120, 0));
        defaultColor = new QPushButton(groupBox);
        defaultColor->setObjectName(QString::fromUtf8("defaultColor"));
        defaultColor->setGeometry(QRect(10, 30, 101, 23));
        colors = new QListView(groupBox);
        colors->setObjectName(QString::fromUtf8("colors"));
        colors->setGeometry(QRect(10, 70, 101, 151));
        remove = new QPushButton(groupBox);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setGeometry(QRect(10, 230, 101, 23));
        fromColor = new QPushButton(groupBox);
        fromColor->setObjectName(QString::fromUtf8("fromColor"));
        fromColor->setGeometry(QRect(10, 260, 101, 23));
        toColor = new QPushButton(groupBox);
        toColor->setObjectName(QString::fromUtf8("toColor"));
        toColor->setGeometry(QRect(10, 290, 101, 23));
        add = new QPushButton(groupBox);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(10, 320, 101, 23));
        label_32 = new QLabel(groupBox);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(20, 360, 91, 16));
        tolerance = new ImprovedLineEdit(groupBox);
        tolerance->setObjectName(QString::fromUtf8("tolerance"));
        tolerance->setGeometry(QRect(20, 380, 81, 20));
        average = new ImprovedLineEdit(groupBox);
        average->setObjectName(QString::fromUtf8("average"));
        average->setGeometry(QRect(20, 430, 81, 20));
        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(20, 410, 91, 16));
        splitter->addWidget(groupBox);
        gv2 = new QGraphicsView(splitter);
        gv2->setObjectName(QString::fromUtf8("gv2"));
        splitter->addWidget(gv2);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        ImageProcessing->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ImageProcessing);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        ImageProcessing->setMenuBar(menubar);
        statusbar = new QStatusBar(ImageProcessing);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ImageProcessing->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuView->addAction(actionOnly_Left);
        menuView->addAction(actionOnly_Right);
        menuView->addAction(actionAll);

        retranslateUi(ImageProcessing);

        QMetaObject::connectSlotsByName(ImageProcessing);
    } // setupUi

    void retranslateUi(QMainWindow *ImageProcessing)
    {
        ImageProcessing->setWindowTitle(QCoreApplication::translate("ImageProcessing", "Image Processing", nullptr));
        actionOpen->setText(QCoreApplication::translate("ImageProcessing", "Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("ImageProcessing", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOnly_Left->setText(QCoreApplication::translate("ImageProcessing", "Only Left", nullptr));
#if QT_CONFIG(shortcut)
        actionOnly_Left->setShortcut(QCoreApplication::translate("ImageProcessing", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOnly_Right->setText(QCoreApplication::translate("ImageProcessing", "Only Right", nullptr));
#if QT_CONFIG(shortcut)
        actionOnly_Right->setShortcut(QCoreApplication::translate("ImageProcessing", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAll->setText(QCoreApplication::translate("ImageProcessing", "All", nullptr));
#if QT_CONFIG(shortcut)
        actionAll->setShortcut(QCoreApplication::translate("ImageProcessing", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("ImageProcessing", "Save...", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("ImageProcessing", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox->setTitle(QCoreApplication::translate("ImageProcessing", "Processing", nullptr));
        defaultColor->setText(QCoreApplication::translate("ImageProcessing", "Default", nullptr));
        remove->setText(QCoreApplication::translate("ImageProcessing", "Remove", nullptr));
        fromColor->setText(QCoreApplication::translate("ImageProcessing", "> From", nullptr));
        toColor->setText(QCoreApplication::translate("ImageProcessing", "To >", nullptr));
        add->setText(QCoreApplication::translate("ImageProcessing", "Add", nullptr));
        label_32->setText(QCoreApplication::translate("ImageProcessing", "Tolerance:", nullptr));
#if QT_CONFIG(tooltip)
        tolerance->setToolTip(QCoreApplication::translate("ImageProcessing", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Relaxation parameter of the BGK approximation.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">It must be greater than 0.5 (and not so close to this value).</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tolerance->setText(QCoreApplication::translate("ImageProcessing", "1000", nullptr));
#if QT_CONFIG(tooltip)
        average->setToolTip(QCoreApplication::translate("ImageProcessing", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Relaxation parameter of the BGK approximation.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">It must be greater than 0.5 (and not so close to this value).</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        average->setText(QCoreApplication::translate("ImageProcessing", "1", nullptr));
        label_33->setText(QCoreApplication::translate("ImageProcessing", "Average:", nullptr));
        menuFile->setTitle(QCoreApplication::translate("ImageProcessing", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("ImageProcessing", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageProcessing: public Ui_ImageProcessing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEPROCESSING_H
