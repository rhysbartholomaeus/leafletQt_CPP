#include "include/mainwindow.h"
#include "ui_mainwindow.h"
#include "include/jsobj.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_view = new QWebEngineView(ui->tacDisplay);

    QWebChannel *channel = new QWebChannel();
    jsobj *js = new jsobj();
    m_view->page()->setWebChannel(channel);
    channel->registerObject(QString("JsInterface"), js);
    m_view->setMinimumSize(820,620);
    m_view->page()->load(QUrl("file:///./html/index.html"));

    connect(m_view, &QWebEngineView::loadFinished, this, &MainWindow::handleOnLoad);
    connect(ui->clearAllTracks, SIGNAL (released()), this, SLOT (handleClearAllTracks()));
    connect(ui->trackQueryInit, SIGNAL (released()), this, SLOT (handleStartTrackQuery()));
    connect(ui->clearAllDrawings, SIGNAL (released()), this, SLOT (handleClearAllDrawings()));
    connect(ui->spawnPlane, SIGNAL (released()), this, SLOT (handleSpawnPlane()));

    // This is probably a dumb way of doing this.
    connect(js, &jsobj::routeAdded, this, &MainWindow::updateList);
    connect(js, &jsobj::routeRemoved, this, &MainWindow::removeFromList);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Slot for using JS to clear all the tracks on the screen.
void MainWindow::handleClearAllTracks(){
    qDebug() << "Clearing track layer.";
    m_view->page()->runJavaScript("trackLayer.clearLayers();");
}

// Slot to initialise the Leaflet Realtime polling of the OpenSky Networks REST API.
void MainWindow::handleStartTrackQuery(){
    qDebug() << "Commencing track query.";
    m_view->page()->runJavaScript("initiateTrackQuery(trackLayer);");
}

void MainWindow::handleOnLoad(){
    qDebug() << "Loading complete" ;
    ui->overlayList->clear();
}

void MainWindow::updateList(const QString &routeId){
   qDebug() << "Adding route: " << routeId ;
    // TODO Check if the item already exists.
   ui->overlayList->addItem(routeId);

   QString cmd = "console.log(drawnItems.getLayer("+routeId+"))";
   m_view->page()->runJavaScript(cmd);
}

void MainWindow::handleSpawnPlane(){
    QString cmd = "";
    // Find the currently selected polgyon ID selected in the overlay list.
    if(ui->overlayList->count() > 0 && ui->overlayList->currentItem()!= NULL){
        QString desiredRoute = ui->overlayList->currentItem()->text();
        cmd = "initAircraft(drawnItems ," + desiredRoute +");";
        m_view->page()->runJavaScript(cmd);
    }else{
        cmd = "alert(\"ERROR: No Polygons available or did not select one!\");";
        m_view->page()->runJavaScript(cmd);
    }
}

void MainWindow::handleClearAllDrawings(){
    qDebug() << "Clearing drawing layer.";
    m_view->page()->runJavaScript("drawnItems.clearLayers();");
    ui->overlayList->clear();
}

void MainWindow::removeFromList(const QString &routeId){
    // TODO Check if the item already exists.
    qDebug() << "Removing route: " << routeId ;
   QList<QListWidgetItem*> itemList = ui->overlayList->findItems(routeId,Qt::MatchExactly);
   for(QListWidgetItem* item : itemList){
        ui->overlayList->takeItem(ui->overlayList->row(item));
   }
}
