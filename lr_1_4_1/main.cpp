#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QBuffer>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QFile file1("file1.dat");
    QFile file2("file2.dat");

    if (file2.exists())
    {

    }
    if (!file1.open(QIODevice::ReadOnly))
    {
        qDebug() << "ошибка открытия для чтения";
    }
    if (!file2.open(QIODevice::WriteOnly))
    {
        qDebug() << "ошибка открытия для чтения";
    }

    char b [1];
    while (!file1.atEnd())
    {
        int bBlocksize = file1.read(b,sizeof(b));
        file2.write(b, bBlocksize);
    }
    file1.close();
    file2.close();


    return a.exec();
}
