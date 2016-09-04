#ifndef TASK_H
#define TASK_H

#include "localreader.h"
#include "aircrafttable.h"
#include <QObject>
#include <QDebug>

class Task: public QObject
{
Q_OBJECT
public:
    Task();
    ~Task();

public:
    localreader *m;
    aircraftTable *n;

public slots:
    void CreateReader();
    void CreateTab();

signals:
    void workFinished();
};

#endif // TASK_H
