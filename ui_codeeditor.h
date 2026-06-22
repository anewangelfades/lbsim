/********************************************************************************
** Form generated from reading UI file 'codeeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODEEDITOR_H
#define UI_CODEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CodeEditor
{
public:
    QAction *actionLoad_lb;
    QAction *actionLoad_lb2;
    QAction *actionSave_lb;
    QAction *actionSave_lb2;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *text;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CodeEditor)
    {
        if (CodeEditor->objectName().isEmpty())
            CodeEditor->setObjectName(QString::fromUtf8("CodeEditor"));
        CodeEditor->resize(800, 600);
        actionLoad_lb = new QAction(CodeEditor);
        actionLoad_lb->setObjectName(QString::fromUtf8("actionLoad_lb"));
        actionLoad_lb2 = new QAction(CodeEditor);
        actionLoad_lb2->setObjectName(QString::fromUtf8("actionLoad_lb2"));
        actionSave_lb = new QAction(CodeEditor);
        actionSave_lb->setObjectName(QString::fromUtf8("actionSave_lb"));
        actionSave_lb2 = new QAction(CodeEditor);
        actionSave_lb2->setObjectName(QString::fromUtf8("actionSave_lb2"));
        centralwidget = new QWidget(CodeEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        text = new QPlainTextEdit(centralwidget);
        text->setObjectName(QString::fromUtf8("text"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(12);
        text->setFont(font);

        gridLayout->addWidget(text, 0, 0, 1, 1);

        CodeEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CodeEditor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        CodeEditor->setMenuBar(menubar);
        statusbar = new QStatusBar(CodeEditor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CodeEditor->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLoad_lb);
        menuFile->addAction(actionLoad_lb2);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_lb);
        menuFile->addAction(actionSave_lb2);

        retranslateUi(CodeEditor);

        QMetaObject::connectSlotsByName(CodeEditor);
    } // setupUi

    void retranslateUi(QMainWindow *CodeEditor)
    {
        CodeEditor->setWindowTitle(QCoreApplication::translate("CodeEditor", ".lb/.lb2 Editor", nullptr));
        actionLoad_lb->setText(QCoreApplication::translate("CodeEditor", "Load .lb", nullptr));
        actionLoad_lb2->setText(QCoreApplication::translate("CodeEditor", "Load .lb2", nullptr));
        actionSave_lb->setText(QCoreApplication::translate("CodeEditor", "Save .lb", nullptr));
        actionSave_lb2->setText(QCoreApplication::translate("CodeEditor", "Save .lb2", nullptr));
        menuFile->setTitle(QCoreApplication::translate("CodeEditor", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CodeEditor: public Ui_CodeEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEEDITOR_H
