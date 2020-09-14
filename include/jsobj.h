#ifndef JSOBJ_H
#define JSOBJ_H

#include <QObject>
#include <QDebug>

class jsobj : public QObject
{
    Q_OBJECT
public:
    jsobj();

public slots:
    Q_INVOKABLE void log(const QString &str);
    Q_INVOKABLE void logArray(const QString str[]);
    Q_INVOKABLE void shapeAdded(const QString &str);

signals:
    Q_INVOKABLE void routeAdded(const QString &routeId);

};

#endif // JSOBJ_H
