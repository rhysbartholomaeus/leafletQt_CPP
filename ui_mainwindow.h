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
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *overlayLabel;
    QListWidget *overlayList;
    QGridLayout *gridLayout_2;
    QPushButton *trackQueryInit;
    QPushButton *clearAllDrawings;
    QPushButton *clearAllTracks;
    QPushButton *spawnPlane;
    QWidget *tacDisplay;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1081, 652);
        MainWindow->setMinimumSize(QSize(1081, 652));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(800, 559));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        overlayLabel = new QLabel(centralwidget);
        overlayLabel->setObjectName(QString::fromUtf8("overlayLabel"));
        overlayLabel->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(overlayLabel, 1, 1, 1, 1);

        overlayList = new QListWidget(centralwidget);
        overlayList->setObjectName(QString::fromUtf8("overlayList"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(overlayList->sizePolicy().hasHeightForWidth());
        overlayList->setSizePolicy(sizePolicy);

        gridLayout->addWidget(overlayList, 2, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        trackQueryInit = new QPushButton(centralwidget);
        trackQueryInit->setObjectName(QString::fromUtf8("trackQueryInit"));

        gridLayout_2->addWidget(trackQueryInit, 2, 0, 1, 1);

        clearAllDrawings = new QPushButton(centralwidget);
        clearAllDrawings->setObjectName(QString::fromUtf8("clearAllDrawings"));

        gridLayout_2->addWidget(clearAllDrawings, 2, 1, 1, 1);

        clearAllTracks = new QPushButton(centralwidget);
        clearAllTracks->setObjectName(QString::fromUtf8("clearAllTracks"));

        gridLayout_2->addWidget(clearAllTracks, 0, 0, 1, 1);

        spawnPlane = new QPushButton(centralwidget);
        spawnPlane->setObjectName(QString::fromUtf8("spawnPlane"));

        gridLayout_2->addWidget(spawnPlane, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 1, 1, 1);

        tacDisplay = new QWidget(centralwidget);
        tacDisplay->setObjectName(QString::fromUtf8("tacDisplay"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tacDisplay->sizePolicy().hasHeightForWidth());
        tacDisplay->setSizePolicy(sizePolicy1);
        tacDisplay->setMinimumSize(QSize(800, 600));

        gridLayout->addWidget(tacDisplay, 0, 2, 3, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1081, 21));
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
        overlayLabel->setText(QApplication::translate("MainWindow", "Overlays:", nullptr));
        trackQueryInit->setText(QApplication::translate("MainWindow", "Query Tracks", nullptr));
        clearAllDrawings->setText(QApplication::translate("MainWindow", "Clear All Drawings", nullptr));
        clearAllTracks->setText(QApplication::translate("MainWindow", "Clear All Tracks", nullptr));
        spawnPlane->setText(QApplication::translate("MainWindow", "Spawn Plane", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
