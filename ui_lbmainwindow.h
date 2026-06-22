/********************************************************************************
** Form generated from reading UI file 'lbmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LBMAINWINDOW_H
#define UI_LBMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LBMainWindow
{
public:
    QAction *actionEnableGPU;
    QAction *actionLoad;
    QAction *actionStart;
    QAction *actionStop;
    QAction *actionReset;
    QAction *actionNext;
    QAction *actionView;
    QAction *actionInfo;
    QAction *actionHelp;
    QAction *actionPhysics;
    QAction *actionModel;
    QAction *actionColors;
    QAction *actionChart;
    QAction *actionDraw_2;
    QAction *actionSave_All;
    QAction *actionLoad_All;
    QAction *actionView2;
    QAction *actionAbout;
    QAction *actionParticles;
    QAction *actionDebug;
    QAction *actionParameters;
    QAction *actionVelocity;
    QAction *actionPressure;
    QAction *actionArrow;
    QAction *actionDetail;
    QAction *actionAxis;
    QAction *actionStatic;
    QAction *actionDynamic;
    QAction *actionParticles_2;
    QAction *actionConditions;
    QAction *actionForces;
    QAction *actionSave_Image;
    QAction *actionConsole;
    QAction *actionReload_All;
    QAction *actionResults;
    QAction *actionDrawer;
    QAction *actionSave_All_2_testing;
    QAction *actionLoad_All_2_testing;
    QAction *actionConvert_lb_to_lb2;
    QAction *actionConvert_lb2_to_lb;
    QAction *actionScheduler;
    QAction *actionView_XML_Content;
    QAction *actionStart_Server;
    QAction *actionStop_Server;
    QAction *actionRegression;
    QAction *actionChanges;
    QAction *action_lb_lb2_Editor;
    QAction *actionInterpolation;
    QAction *actionOpenCL;
    QAction *actionInspector;
    QAction *actionUse_zipped_lb3;
    QAction *actionAnimation;
    QAction *actionModel_and_Parameters;
    QAction *actionSave;
    QAction *actionSave_x2;
    QAction *actionSave_VTK;
    QAction *actionView_2;
    QAction *actionInfo_2;
    QAction *actionDrawer_2;
    QAction *actionMesher;
    QAction *actionSave_All_v3;
    QAction *actionLoad_All_v3;
    QAction *actionD3_IDE;
    QAction *actionImage_Processing;
    QAction *actionGeometry;
    QAction *actionExec_2_it;
    QAction *actionExec_4_it;
    QAction *actionExec_8_it;
    QAction *actionExec_16_it;
    QAction *actionExec_32_it;
    QAction *actionExec_64_it;
    QAction *actionExec_128_it;
    QAction *actionExec_256_it;
    QAction *actionExec_512_it;
    QAction *actionExec_1024_it;
    QAction *actionImmersed;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuDialogs;
    QMenu *menuFile;
    QMenu *menuSimulation;
    QMenu *menuOther;
    QMenu *menuWindow;

    void setupUi(QMainWindow *LBMainWindow)
    {
        if (LBMainWindow->objectName().isEmpty())
            LBMainWindow->setObjectName(QString::fromUtf8("LBMainWindow"));
        LBMainWindow->resize(1024, 768);
        actionEnableGPU = new QAction(LBMainWindow);
        actionEnableGPU->setObjectName(QString::fromUtf8("actionEnableGPU"));
        actionEnableGPU->setCheckable(true);
        actionLoad = new QAction(LBMainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionStart = new QAction(LBMainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStop = new QAction(LBMainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionReset = new QAction(LBMainWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionNext = new QAction(LBMainWindow);
        actionNext->setObjectName(QString::fromUtf8("actionNext"));
        actionView = new QAction(LBMainWindow);
        actionView->setObjectName(QString::fromUtf8("actionView"));
        actionView->setCheckable(false);
        actionView->setChecked(false);
        actionInfo = new QAction(LBMainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        actionInfo->setCheckable(false);
        actionInfo->setChecked(false);
        actionInfo->setEnabled(true);
        actionHelp = new QAction(LBMainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionPhysics = new QAction(LBMainWindow);
        actionPhysics->setObjectName(QString::fromUtf8("actionPhysics"));
        actionModel = new QAction(LBMainWindow);
        actionModel->setObjectName(QString::fromUtf8("actionModel"));
        actionColors = new QAction(LBMainWindow);
        actionColors->setObjectName(QString::fromUtf8("actionColors"));
        actionChart = new QAction(LBMainWindow);
        actionChart->setObjectName(QString::fromUtf8("actionChart"));
        actionDraw_2 = new QAction(LBMainWindow);
        actionDraw_2->setObjectName(QString::fromUtf8("actionDraw_2"));
        actionSave_All = new QAction(LBMainWindow);
        actionSave_All->setObjectName(QString::fromUtf8("actionSave_All"));
        actionLoad_All = new QAction(LBMainWindow);
        actionLoad_All->setObjectName(QString::fromUtf8("actionLoad_All"));
        actionView2 = new QAction(LBMainWindow);
        actionView2->setObjectName(QString::fromUtf8("actionView2"));
        actionAbout = new QAction(LBMainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionParticles = new QAction(LBMainWindow);
        actionParticles->setObjectName(QString::fromUtf8("actionParticles"));
        actionDebug = new QAction(LBMainWindow);
        actionDebug->setObjectName(QString::fromUtf8("actionDebug"));
        actionParameters = new QAction(LBMainWindow);
        actionParameters->setObjectName(QString::fromUtf8("actionParameters"));
        actionVelocity = new QAction(LBMainWindow);
        actionVelocity->setObjectName(QString::fromUtf8("actionVelocity"));
        actionPressure = new QAction(LBMainWindow);
        actionPressure->setObjectName(QString::fromUtf8("actionPressure"));
        actionArrow = new QAction(LBMainWindow);
        actionArrow->setObjectName(QString::fromUtf8("actionArrow"));
        actionDetail = new QAction(LBMainWindow);
        actionDetail->setObjectName(QString::fromUtf8("actionDetail"));
        actionAxis = new QAction(LBMainWindow);
        actionAxis->setObjectName(QString::fromUtf8("actionAxis"));
        actionStatic = new QAction(LBMainWindow);
        actionStatic->setObjectName(QString::fromUtf8("actionStatic"));
        actionDynamic = new QAction(LBMainWindow);
        actionDynamic->setObjectName(QString::fromUtf8("actionDynamic"));
        actionParticles_2 = new QAction(LBMainWindow);
        actionParticles_2->setObjectName(QString::fromUtf8("actionParticles_2"));
        actionConditions = new QAction(LBMainWindow);
        actionConditions->setObjectName(QString::fromUtf8("actionConditions"));
        actionForces = new QAction(LBMainWindow);
        actionForces->setObjectName(QString::fromUtf8("actionForces"));
        actionSave_Image = new QAction(LBMainWindow);
        actionSave_Image->setObjectName(QString::fromUtf8("actionSave_Image"));
        actionConsole = new QAction(LBMainWindow);
        actionConsole->setObjectName(QString::fromUtf8("actionConsole"));
        actionReload_All = new QAction(LBMainWindow);
        actionReload_All->setObjectName(QString::fromUtf8("actionReload_All"));
        actionResults = new QAction(LBMainWindow);
        actionResults->setObjectName(QString::fromUtf8("actionResults"));
        actionDrawer = new QAction(LBMainWindow);
        actionDrawer->setObjectName(QString::fromUtf8("actionDrawer"));
        actionSave_All_2_testing = new QAction(LBMainWindow);
        actionSave_All_2_testing->setObjectName(QString::fromUtf8("actionSave_All_2_testing"));
        actionLoad_All_2_testing = new QAction(LBMainWindow);
        actionLoad_All_2_testing->setObjectName(QString::fromUtf8("actionLoad_All_2_testing"));
        actionConvert_lb_to_lb2 = new QAction(LBMainWindow);
        actionConvert_lb_to_lb2->setObjectName(QString::fromUtf8("actionConvert_lb_to_lb2"));
        actionConvert_lb2_to_lb = new QAction(LBMainWindow);
        actionConvert_lb2_to_lb->setObjectName(QString::fromUtf8("actionConvert_lb2_to_lb"));
        actionScheduler = new QAction(LBMainWindow);
        actionScheduler->setObjectName(QString::fromUtf8("actionScheduler"));
        actionView_XML_Content = new QAction(LBMainWindow);
        actionView_XML_Content->setObjectName(QString::fromUtf8("actionView_XML_Content"));
        actionStart_Server = new QAction(LBMainWindow);
        actionStart_Server->setObjectName(QString::fromUtf8("actionStart_Server"));
        actionStop_Server = new QAction(LBMainWindow);
        actionStop_Server->setObjectName(QString::fromUtf8("actionStop_Server"));
        actionRegression = new QAction(LBMainWindow);
        actionRegression->setObjectName(QString::fromUtf8("actionRegression"));
        actionChanges = new QAction(LBMainWindow);
        actionChanges->setObjectName(QString::fromUtf8("actionChanges"));
        action_lb_lb2_Editor = new QAction(LBMainWindow);
        action_lb_lb2_Editor->setObjectName(QString::fromUtf8("action_lb_lb2_Editor"));
        actionInterpolation = new QAction(LBMainWindow);
        actionInterpolation->setObjectName(QString::fromUtf8("actionInterpolation"));
        actionOpenCL = new QAction(LBMainWindow);
        actionOpenCL->setObjectName(QString::fromUtf8("actionOpenCL"));
        actionInspector = new QAction(LBMainWindow);
        actionInspector->setObjectName(QString::fromUtf8("actionInspector"));
        actionUse_zipped_lb3 = new QAction(LBMainWindow);
        actionUse_zipped_lb3->setObjectName(QString::fromUtf8("actionUse_zipped_lb3"));
        actionUse_zipped_lb3->setCheckable(true);
        actionUse_zipped_lb3->setChecked(true);
        actionAnimation = new QAction(LBMainWindow);
        actionAnimation->setObjectName(QString::fromUtf8("actionAnimation"));
        actionModel_and_Parameters = new QAction(LBMainWindow);
        actionModel_and_Parameters->setObjectName(QString::fromUtf8("actionModel_and_Parameters"));
        actionSave = new QAction(LBMainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_x2 = new QAction(LBMainWindow);
        actionSave_x2->setObjectName(QString::fromUtf8("actionSave_x2"));
        actionSave_VTK = new QAction(LBMainWindow);
        actionSave_VTK->setObjectName(QString::fromUtf8("actionSave_VTK"));
        actionView_2 = new QAction(LBMainWindow);
        actionView_2->setObjectName(QString::fromUtf8("actionView_2"));
        actionInfo_2 = new QAction(LBMainWindow);
        actionInfo_2->setObjectName(QString::fromUtf8("actionInfo_2"));
        actionDrawer_2 = new QAction(LBMainWindow);
        actionDrawer_2->setObjectName(QString::fromUtf8("actionDrawer_2"));
        actionMesher = new QAction(LBMainWindow);
        actionMesher->setObjectName(QString::fromUtf8("actionMesher"));
        actionSave_All_v3 = new QAction(LBMainWindow);
        actionSave_All_v3->setObjectName(QString::fromUtf8("actionSave_All_v3"));
        actionLoad_All_v3 = new QAction(LBMainWindow);
        actionLoad_All_v3->setObjectName(QString::fromUtf8("actionLoad_All_v3"));
        actionD3_IDE = new QAction(LBMainWindow);
        actionD3_IDE->setObjectName(QString::fromUtf8("actionD3_IDE"));
        actionImage_Processing = new QAction(LBMainWindow);
        actionImage_Processing->setObjectName(QString::fromUtf8("actionImage_Processing"));
        actionGeometry = new QAction(LBMainWindow);
        actionGeometry->setObjectName(QString::fromUtf8("actionGeometry"));
        actionExec_2_it = new QAction(LBMainWindow);
        actionExec_2_it->setObjectName(QString::fromUtf8("actionExec_2_it"));
        actionExec_4_it = new QAction(LBMainWindow);
        actionExec_4_it->setObjectName(QString::fromUtf8("actionExec_4_it"));
        actionExec_8_it = new QAction(LBMainWindow);
        actionExec_8_it->setObjectName(QString::fromUtf8("actionExec_8_it"));
        actionExec_16_it = new QAction(LBMainWindow);
        actionExec_16_it->setObjectName(QString::fromUtf8("actionExec_16_it"));
        actionExec_32_it = new QAction(LBMainWindow);
        actionExec_32_it->setObjectName(QString::fromUtf8("actionExec_32_it"));
        actionExec_64_it = new QAction(LBMainWindow);
        actionExec_64_it->setObjectName(QString::fromUtf8("actionExec_64_it"));
        actionExec_128_it = new QAction(LBMainWindow);
        actionExec_128_it->setObjectName(QString::fromUtf8("actionExec_128_it"));
        actionExec_256_it = new QAction(LBMainWindow);
        actionExec_256_it->setObjectName(QString::fromUtf8("actionExec_256_it"));
        actionExec_512_it = new QAction(LBMainWindow);
        actionExec_512_it->setObjectName(QString::fromUtf8("actionExec_512_it"));
        actionExec_1024_it = new QAction(LBMainWindow);
        actionExec_1024_it->setObjectName(QString::fromUtf8("actionExec_1024_it"));
        actionImmersed = new QAction(LBMainWindow);
        actionImmersed->setObjectName(QString::fromUtf8("actionImmersed"));
        centralWidget = new QWidget(LBMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        LBMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LBMainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 18));
        menuDialogs = new QMenu(menuBar);
        menuDialogs->setObjectName(QString::fromUtf8("menuDialogs"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSimulation = new QMenu(menuBar);
        menuSimulation->setObjectName(QString::fromUtf8("menuSimulation"));
        menuOther = new QMenu(menuBar);
        menuOther->setObjectName(QString::fromUtf8("menuOther"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        LBMainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSimulation->menuAction());
        menuBar->addAction(menuDialogs->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuOther->menuAction());
        menuDialogs->addAction(actionMesher);
        menuDialogs->addAction(actionModel_and_Parameters);
        menuDialogs->addAction(actionImmersed);
        menuDialogs->addSeparator();
        menuDialogs->addAction(actionColors);
        menuDialogs->addAction(actionView2);
        menuDialogs->addAction(actionParticles);
        menuDialogs->addAction(actionAnimation);
        menuDialogs->addSeparator();
        menuDialogs->addAction(actionChart);
        menuDialogs->addAction(actionResults);
        menuDialogs->addSeparator();
        menuDialogs->addAction(action_lb_lb2_Editor);
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionLoad_All_2_testing);
        menuFile->addAction(actionLoad_All_v3);
        menuFile->addAction(actionReload_All);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_x2);
        menuFile->addAction(actionSave_All_2_testing);
        menuFile->addAction(actionSave_All_v3);
        menuFile->addAction(actionSave_Image);
        menuFile->addAction(actionSave_VTK);
        menuFile->addSeparator();
        menuFile->addAction(actionUse_zipped_lb3);
        menuSimulation->addAction(actionNext);
        menuSimulation->addAction(actionStart);
        menuSimulation->addAction(actionStop);
        menuSimulation->addAction(actionReset);
        menuSimulation->addSeparator();
        menuSimulation->addAction(actionExec_2_it);
        menuSimulation->addAction(actionExec_4_it);
        menuSimulation->addAction(actionExec_8_it);
        menuSimulation->addAction(actionExec_16_it);
        menuSimulation->addAction(actionExec_32_it);
        menuSimulation->addAction(actionExec_64_it);
        menuSimulation->addAction(actionExec_128_it);
        menuSimulation->addAction(actionExec_256_it);
        menuSimulation->addAction(actionExec_512_it);
        menuSimulation->addAction(actionExec_1024_it);
        menuSimulation->addSeparator();
        menuSimulation->addAction(actionEnableGPU);
        menuOther->addAction(actionAbout);
        menuOther->addAction(actionChanges);
        menuWindow->addAction(actionView_2);
        menuWindow->addAction(actionInfo_2);
        menuWindow->addSeparator();
        menuWindow->addAction(actionGeometry);
        menuWindow->addAction(actionImage_Processing);

        retranslateUi(LBMainWindow);

        QMetaObject::connectSlotsByName(LBMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LBMainWindow)
    {
        LBMainWindow->setWindowTitle(QCoreApplication::translate("LBMainWindow", "LBSim", nullptr));
        actionEnableGPU->setText(QCoreApplication::translate("LBMainWindow", "Enable GPU (OpenCL)", nullptr));
        actionLoad->setText(QCoreApplication::translate("LBMainWindow", "Load", nullptr));
#if QT_CONFIG(shortcut)
        actionLoad->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStart->setText(QCoreApplication::translate("LBMainWindow", "Begin", nullptr));
#if QT_CONFIG(shortcut)
        actionStart->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStop->setText(QCoreApplication::translate("LBMainWindow", "End", nullptr));
#if QT_CONFIG(shortcut)
        actionStop->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReset->setText(QCoreApplication::translate("LBMainWindow", "Reset", nullptr));
#if QT_CONFIG(shortcut)
        actionReset->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNext->setText(QCoreApplication::translate("LBMainWindow", "Next", nullptr));
#if QT_CONFIG(shortcut)
        actionNext->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionView->setText(QCoreApplication::translate("LBMainWindow", "View", nullptr));
#if QT_CONFIG(shortcut)
        actionView->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInfo->setText(QCoreApplication::translate("LBMainWindow", "Info", nullptr));
#if QT_CONFIG(shortcut)
        actionInfo->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHelp->setText(QCoreApplication::translate("LBMainWindow", "Help", nullptr));
#if QT_CONFIG(shortcut)
        actionHelp->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPhysics->setText(QCoreApplication::translate("LBMainWindow", "Physics (deprecated)", nullptr));
        actionModel->setText(QCoreApplication::translate("LBMainWindow", "Model (deprecated)", nullptr));
        actionColors->setText(QCoreApplication::translate("LBMainWindow", "Colors", nullptr));
#if QT_CONFIG(shortcut)
        actionColors->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionChart->setText(QCoreApplication::translate("LBMainWindow", "Charts", nullptr));
#if QT_CONFIG(shortcut)
        actionChart->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDraw_2->setText(QCoreApplication::translate("LBMainWindow", "Draw", nullptr));
#if QT_CONFIG(shortcut)
        actionDraw_2->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_All->setText(QCoreApplication::translate("LBMainWindow", "Save All", nullptr));
        actionLoad_All->setText(QCoreApplication::translate("LBMainWindow", "Load All", nullptr));
        actionView2->setText(QCoreApplication::translate("LBMainWindow", "View", nullptr));
#if QT_CONFIG(shortcut)
        actionView2->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("LBMainWindow", "Credits", nullptr));
        actionParticles->setText(QCoreApplication::translate("LBMainWindow", "Tracers", nullptr));
#if QT_CONFIG(shortcut)
        actionParticles->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDebug->setText(QCoreApplication::translate("LBMainWindow", "Debug", nullptr));
#if QT_CONFIG(shortcut)
        actionDebug->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionParameters->setText(QCoreApplication::translate("LBMainWindow", "Parameters (deprecated)", nullptr));
#if QT_CONFIG(tooltip)
        actionParameters->setToolTip(QCoreApplication::translate("LBMainWindow", "Parameters", nullptr));
#endif // QT_CONFIG(tooltip)
        actionVelocity->setText(QCoreApplication::translate("LBMainWindow", "Velocity", nullptr));
#if QT_CONFIG(shortcut)
        actionVelocity->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPressure->setText(QCoreApplication::translate("LBMainWindow", "Pressure", nullptr));
#if QT_CONFIG(shortcut)
        actionPressure->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionArrow->setText(QCoreApplication::translate("LBMainWindow", "Arrow", nullptr));
#if QT_CONFIG(shortcut)
        actionArrow->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDetail->setText(QCoreApplication::translate("LBMainWindow", "Detail", nullptr));
#if QT_CONFIG(shortcut)
        actionDetail->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAxis->setText(QCoreApplication::translate("LBMainWindow", "Axis", nullptr));
#if QT_CONFIG(shortcut)
        actionAxis->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStatic->setText(QCoreApplication::translate("LBMainWindow", "Static", nullptr));
#if QT_CONFIG(shortcut)
        actionStatic->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDynamic->setText(QCoreApplication::translate("LBMainWindow", "Dynamic", nullptr));
#if QT_CONFIG(shortcut)
        actionDynamic->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionParticles_2->setText(QCoreApplication::translate("LBMainWindow", "Particles", nullptr));
#if QT_CONFIG(shortcut)
        actionParticles_2->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionConditions->setText(QCoreApplication::translate("LBMainWindow", "Initial Values (deprecated)", nullptr));
        actionForces->setText(QCoreApplication::translate("LBMainWindow", "Forces", nullptr));
#if QT_CONFIG(shortcut)
        actionForces->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_Image->setText(QCoreApplication::translate("LBMainWindow", "Save Image", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_Image->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionConsole->setText(QCoreApplication::translate("LBMainWindow", "Console", nullptr));
#if QT_CONFIG(shortcut)
        actionConsole->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReload_All->setText(QCoreApplication::translate("LBMainWindow", "Reload All", nullptr));
#if QT_CONFIG(shortcut)
        actionReload_All->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionResults->setText(QCoreApplication::translate("LBMainWindow", "Results", nullptr));
#if QT_CONFIG(shortcut)
        actionResults->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDrawer->setText(QCoreApplication::translate("LBMainWindow", "CSG", nullptr));
#if QT_CONFIG(shortcut)
        actionDrawer->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_All_2_testing->setText(QCoreApplication::translate("LBMainWindow", "Save All (v2)", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_All_2_testing->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoad_All_2_testing->setText(QCoreApplication::translate("LBMainWindow", "Load All (v2)", nullptr));
#if QT_CONFIG(shortcut)
        actionLoad_All_2_testing->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+Shift+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionConvert_lb_to_lb2->setText(QCoreApplication::translate("LBMainWindow", "Convert lb to lb2", nullptr));
        actionConvert_lb2_to_lb->setText(QCoreApplication::translate("LBMainWindow", "Convert lb2 to lb", nullptr));
        actionScheduler->setText(QCoreApplication::translate("LBMainWindow", "Scheduler", nullptr));
#if QT_CONFIG(shortcut)
        actionScheduler->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionView_XML_Content->setText(QCoreApplication::translate("LBMainWindow", "View XML Content", nullptr));
        actionStart_Server->setText(QCoreApplication::translate("LBMainWindow", "Start Server", nullptr));
#if QT_CONFIG(shortcut)
        actionStart_Server->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStop_Server->setText(QCoreApplication::translate("LBMainWindow", "Stop Server", nullptr));
#if QT_CONFIG(shortcut)
        actionStop_Server->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRegression->setText(QCoreApplication::translate("LBMainWindow", "Regression", nullptr));
#if QT_CONFIG(shortcut)
        actionRegression->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionChanges->setText(QCoreApplication::translate("LBMainWindow", "Changes", nullptr));
        action_lb_lb2_Editor->setText(QCoreApplication::translate("LBMainWindow", "lb2 Editor", nullptr));
#if QT_CONFIG(shortcut)
        action_lb_lb2_Editor->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInterpolation->setText(QCoreApplication::translate("LBMainWindow", "Interpolation", nullptr));
#if QT_CONFIG(shortcut)
        actionInterpolation->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpenCL->setText(QCoreApplication::translate("LBMainWindow", "OpenCL", nullptr));
#if QT_CONFIG(shortcut)
        actionOpenCL->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInspector->setText(QCoreApplication::translate("LBMainWindow", "Inspector", nullptr));
#if QT_CONFIG(shortcut)
        actionInspector->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUse_zipped_lb3->setText(QCoreApplication::translate("LBMainWindow", "Use zipped lb2", nullptr));
        actionAnimation->setText(QCoreApplication::translate("LBMainWindow", "Animation", nullptr));
#if QT_CONFIG(shortcut)
        actionAnimation->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionModel_and_Parameters->setText(QCoreApplication::translate("LBMainWindow", "Parameters", nullptr));
#if QT_CONFIG(shortcut)
        actionModel_and_Parameters->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("LBMainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_x2->setText(QCoreApplication::translate("LBMainWindow", "Save x2", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_x2->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_VTK->setText(QCoreApplication::translate("LBMainWindow", "Export to VTK", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_VTK->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionView_2->setText(QCoreApplication::translate("LBMainWindow", "View", nullptr));
#if QT_CONFIG(shortcut)
        actionView_2->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInfo_2->setText(QCoreApplication::translate("LBMainWindow", "Info", nullptr));
#if QT_CONFIG(shortcut)
        actionInfo_2->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDrawer_2->setText(QCoreApplication::translate("LBMainWindow", "Drawer", nullptr));
        actionMesher->setText(QCoreApplication::translate("LBMainWindow", "Mesher", nullptr));
#if QT_CONFIG(shortcut)
        actionMesher->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_All_v3->setText(QCoreApplication::translate("LBMainWindow", "Save All (v3)", nullptr));
        actionLoad_All_v3->setText(QCoreApplication::translate("LBMainWindow", "Load All (v3)", nullptr));
        actionD3_IDE->setText(QCoreApplication::translate("LBMainWindow", "D3", nullptr));
#if QT_CONFIG(shortcut)
        actionD3_IDE->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionImage_Processing->setText(QCoreApplication::translate("LBMainWindow", "Image Processing", nullptr));
#if QT_CONFIG(shortcut)
        actionImage_Processing->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGeometry->setText(QCoreApplication::translate("LBMainWindow", "Geometry", nullptr));
#if QT_CONFIG(shortcut)
        actionGeometry->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExec_2_it->setText(QCoreApplication::translate("LBMainWindow", "Exec. 2 it.", nullptr));
#if QT_CONFIG(shortcut)
        actionExec_2_it->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExec_4_it->setText(QCoreApplication::translate("LBMainWindow", "Exec. 4 it.", nullptr));
#if QT_CONFIG(shortcut)
        actionExec_4_it->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExec_8_it->setText(QCoreApplication::translate("LBMainWindow", "Exec. 8 it.", nullptr));
#if QT_CONFIG(shortcut)
        actionExec_8_it->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExec_16_it->setText(QCoreApplication::translate("LBMainWindow", "Exec. 16 it.", nullptr));
#if QT_CONFIG(shortcut)
        actionExec_16_it->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExec_32_it->setText(QCoreApplication::translate("LBMainWindow", "Exec. 32 it.", nullptr));
#if QT_CONFIG(shortcut)
        actionExec_32_it->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExec_64_it->setText(QCoreApplication::translate("LBMainWindow", "Exec. 64 it.", nullptr));
#if QT_CONFIG(shortcut)
        actionExec_64_it->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExec_128_it->setText(QCoreApplication::translate("LBMainWindow", "Exec. 128 it.", nullptr));
#if QT_CONFIG(shortcut)
        actionExec_128_it->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExec_256_it->setText(QCoreApplication::translate("LBMainWindow", "Exec. 256 it.", nullptr));
#if QT_CONFIG(shortcut)
        actionExec_256_it->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExec_512_it->setText(QCoreApplication::translate("LBMainWindow", "Exec. 512 it.", nullptr));
#if QT_CONFIG(shortcut)
        actionExec_512_it->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExec_1024_it->setText(QCoreApplication::translate("LBMainWindow", "Exec. 1024 it.", nullptr));
#if QT_CONFIG(shortcut)
        actionExec_1024_it->setShortcut(QCoreApplication::translate("LBMainWindow", "Alt+0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionImmersed->setText(QCoreApplication::translate("LBMainWindow", "Immersed", nullptr));
#if QT_CONFIG(shortcut)
        actionImmersed->setShortcut(QCoreApplication::translate("LBMainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        menuDialogs->setTitle(QCoreApplication::translate("LBMainWindow", "&Tools", nullptr));
        menuFile->setTitle(QCoreApplication::translate("LBMainWindow", "&File", nullptr));
        menuSimulation->setTitle(QCoreApplication::translate("LBMainWindow", "&Simulation", nullptr));
        menuOther->setTitle(QCoreApplication::translate("LBMainWindow", "&LBSim", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("LBMainWindow", "Window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LBMainWindow: public Ui_LBMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LBMAINWINDOW_H
