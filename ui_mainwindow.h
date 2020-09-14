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
    QWidget *tacDisplay;
    QListWidget *overlayList;
    QLabel *overlayLabel;
    QPushButton *clearAllDrawings;
    QPushButton *trackQueryInit;
    QPushButton *spawnPlane;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *clearAllTracks;
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
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tacDisplay = new QWidget(centralwidget);
        tacDisplay->setObjectName(QString::fromUtf8("tacDisplay"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tacDisplay->sizePolicy().hasHeightForWidth());
        tacDisplay->setSizePolicy(sizePolicy);
        tacDisplay->setMinimumSize(QSize(800, 600));

        verticalLayout->addWidget(tacDisplay);

        overlayList = new QListWidget(centralwidget);
        overlayList->setObjectName(QString::fromUtf8("overlayList"));

        verticalLayout->addWidget(overlayList);

        overlayLabel = new QLabel(centralwidget);
        overlayLabel->setObjectName(QString::fromUtf8("overlayLabel"));
        overlayLabel->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(overlayLabel);

        clearAllDrawings = new QPushButton(centralwidget);
        clearAllDrawings->setObjectName(QString::fromUtf8("clearAllDrawings"));

        verticalLayout->addWidget(clearAllDrawings);

        trackQueryInit = new QPushButton(centralwidget);
        trackQueryInit->setObjectName(QString::fromUtf8("trackQueryInit"));

        verticalLayout->addWidget(trackQueryInit);

        spawnPlane = new QPushButton(centralwidget);
        spawnPlane->setObjectName(QString::fromUtf8("spawnPlane"));

        verticalLayout->addWidget(spawnPlane);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        clearAllTracks = new QPushButton(centralwidget);
        clearAllTracks->setObjectName(QString::fromUtf8("clearAllTracks"));

        verticalLayout->addWidget(clearAllTracks);

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
        overlayLabel->setText(QApplication::translate("MainWindow", "Overlays:", nullptr));
        clearAllDrawings->setText(QApplication::translate("MainWindow", "Clear All Drawings", nullptr));
        trackQueryInit->setText(QApplication::translate("MainWindow", "Query Tracks", nullptr));
        spawnPlane->setText(QApplication::translate("MainWindow", "Spawn Plane", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        clearAllTracks->setText(QApplication::translate("MainWindow", "Clear All Tracks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
