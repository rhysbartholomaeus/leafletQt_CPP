/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *mapLayout;
    QWidget *tacDisplay;
    QWidget *gridLayoutWidget;
    QGridLayout *toolBarLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *spawnPlane;
    QPushButton *clearAllTracks;
    QPushButton *clearAllDrawings;
    QPushButton *trackQueryInit;
    QWidget *gridLayoutWidget_2;
    QGridLayout *overlaylistlayout;
    QListWidget *overlayList;
    QLabel *overlayLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1024, 768);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(800, 559));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(211, 10, 802, 602));
        mapLayout = new QVBoxLayout(verticalLayoutWidget);
        mapLayout->setObjectName(QString::fromUtf8("mapLayout"));
        mapLayout->setContentsMargins(1, 1, 1, 1);
        tacDisplay = new QWidget(verticalLayoutWidget);
        tacDisplay->setObjectName(QString::fromUtf8("tacDisplay"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tacDisplay->sizePolicy().hasHeightForWidth());
        tacDisplay->setSizePolicy(sizePolicy);
        tacDisplay->setMinimumSize(QSize(800, 600));
        tacDisplay->setFocusPolicy(Qt::ClickFocus);

        mapLayout->addWidget(tacDisplay);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 191, 221));
        toolBarLayout = new QGridLayout(gridLayoutWidget);
        toolBarLayout->setObjectName(QString::fromUtf8("toolBarLayout"));
        toolBarLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        toolBarLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        toolBarLayout->addWidget(pushButton_4, 3, 2, 1, 1);

        spawnPlane = new QPushButton(gridLayoutWidget);
        spawnPlane->setObjectName(QString::fromUtf8("spawnPlane"));

        toolBarLayout->addWidget(spawnPlane, 3, 0, 1, 1);

        clearAllTracks = new QPushButton(gridLayoutWidget);
        clearAllTracks->setObjectName(QString::fromUtf8("clearAllTracks"));

        toolBarLayout->addWidget(clearAllTracks, 1, 0, 1, 1);

        clearAllDrawings = new QPushButton(gridLayoutWidget);
        clearAllDrawings->setObjectName(QString::fromUtf8("clearAllDrawings"));

        toolBarLayout->addWidget(clearAllDrawings, 1, 2, 1, 1);

        trackQueryInit = new QPushButton(gridLayoutWidget);
        trackQueryInit->setObjectName(QString::fromUtf8("trackQueryInit"));

        toolBarLayout->addWidget(trackQueryInit, 2, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 260, 191, 221));
        overlaylistlayout = new QGridLayout(gridLayoutWidget_2);
        overlaylistlayout->setObjectName(QString::fromUtf8("overlaylistlayout"));
        overlaylistlayout->setContentsMargins(0, 0, 0, 0);
        overlayList = new QListWidget(gridLayoutWidget_2);
        overlayList->setObjectName(QString::fromUtf8("overlayList"));

        overlaylistlayout->addWidget(overlayList, 0, 0, 1, 1);

        overlayLabel = new QLabel(centralwidget);
        overlayLabel->setObjectName(QString::fromUtf8("overlayLabel"));
        overlayLabel->setGeometry(QRect(10, 240, 47, 13));
        overlayLabel->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        spawnPlane->setText(QApplication::translate("MainWindow", "Spawn Plane", nullptr));
        clearAllTracks->setText(QApplication::translate("MainWindow", "Clear All Tracks", nullptr));
        clearAllDrawings->setText(QApplication::translate("MainWindow", "Clear All Drawings", nullptr));
        trackQueryInit->setText(QApplication::translate("MainWindow", "Query Tracks", nullptr));
        overlayLabel->setText(QApplication::translate("MainWindow", "Overlays:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
