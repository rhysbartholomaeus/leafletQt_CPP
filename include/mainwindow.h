#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QGridLayout>
#include <QtWebChannel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWebEngineView *m_view;


private slots:
    void handleClearAllTracks();
    void handleStartTrackQuery();
    void handleOnLoad();
    void updateList(const QString &routeId);
    void handleSpawnPlane();
};
#endif // MAINWINDOW_H
