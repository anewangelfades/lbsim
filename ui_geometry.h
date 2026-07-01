/********************************************************************************
** Form generated from reading UI file 'geometry.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOMETRY_H
#define UI_GEOMETRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Geometry
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionNew;
    QAction *actionGenerate;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPlainTextEdit *code;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *output;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuGeometry;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Geometry)
    {
        if (Geometry->objectName().isEmpty())
            Geometry->setObjectName(QString::fromUtf8("Geometry"));
        Geometry->resize(800, 600);
        actionOpen = new QAction(Geometry);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(Geometry);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionNew = new QAction(Geometry);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionGenerate = new QAction(Geometry);
        actionGenerate->setObjectName(QString::fromUtf8("actionGenerate"));
        centralwidget = new QWidget(Geometry);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        code = new QPlainTextEdit(groupBox);
        code->setObjectName(QString::fromUtf8("code"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(12);
        code->setFont(font);

        gridLayout->addWidget(code, 0, 0, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setContentsMargins(8, 8, 8, 8);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        output = new QPlainTextEdit(groupBox_2);
        output->setObjectName(QString::fromUtf8("output"));
        output->setFont(font);

        gridLayout_2->addWidget(output, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);

        Geometry->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Geometry);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuGeometry = new QMenu(menubar);
        menuGeometry->setObjectName(QString::fromUtf8("menuGeometry"));
        Geometry->setMenuBar(menubar);
        statusbar = new QStatusBar(Geometry);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Geometry->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuGeometry->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuGeometry->addAction(actionGenerate);

        retranslateUi(Geometry);

        QMetaObject::connectSlotsByName(Geometry);
    } // setupUi

    void retranslateUi(QMainWindow *Geometry)
    {
        Geometry->setWindowTitle(QCoreApplication::translate("Geometry", "Geometry", nullptr));
        actionOpen->setText(QCoreApplication::translate("Geometry", "Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("Geometry", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("Geometry", "Save...", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("Geometry", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew->setText(QCoreApplication::translate("Geometry", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("Geometry", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGenerate->setText(QCoreApplication::translate("Geometry", "Generate", nullptr));
#if QT_CONFIG(shortcut)
        actionGenerate->setShortcut(QCoreApplication::translate("Geometry", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox->setTitle(QCoreApplication::translate("Geometry", "JavaScript code", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Geometry", "Output", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Geometry", "File", nullptr));
        menuGeometry->setTitle(QCoreApplication::translate("Geometry", "Geometry", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Geometry: public Ui_Geometry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOMETRY_H
