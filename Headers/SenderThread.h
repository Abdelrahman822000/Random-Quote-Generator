#ifndef SENDERTHREAD_H
#define SENDERTHREAD_H

#include <QThread>
#include <QDebug>
#include <QMutex>
#include <TxRx.hpp>

class Thread : public QThread
{
public:
    Thread();
    void run() override;
};

#endif // SENDERTHREAD_H
