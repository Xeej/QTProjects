#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QFile>
#include <QBuffer>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QByteArray arr;
    QBuffer buffer(&arr);
    buffer.open(QIODevice::WriteOnly);
    QDataStream out(&buffer);
    out << QString("1111");
    qDebug()<<arr;
    return a.exec();
}
