#include "SenderThread.h"

qint32 x=1;
QMutex mutex;

Thread::Thread() {}

void Thread::run()
{
    mutex.lock();
    qDebug() << "Thread " << QThread::currentThread() << " is running with id: " << QThread::currentThreadId() << Qt::endl;
    qDebug() << "Thread " << QThread::currentThread() << " x value is: " << x << Qt::endl;
    x++;
    qDebug() << "Thread " << QThread::currentThread() << " incremented x by 1: " << x << Qt::endl;
    mutex.unlock();
}
