#include "include/jsobj.h"

jsobj::jsobj()
{

}

void jsobj::log(const QString &str){
    qDebug() << "GOT STR: " << str ;
}

void jsobj::logArray(const QString str[]){
    qDebug() << "GOT STR: list";
    for(int i = 0; i < str->length(); i++){
        qDebug() << "Value: " << str[i];
    }
}

void jsobj::shapeAdded(const QString &str){
    qDebug() << "Got shape ID: " << str;
    emit jsobj::routeAdded(str);
}

void jsobj::shapeRemoved(const QString &str){
   qDebug() << "Removed shape: " << str;
   emit jsobj::routeRemoved(str);
}
