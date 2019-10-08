#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QFile>
#include <QBuffer>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file ("file.txt");
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        QString str;
        while (!stream.atEnd())
        {
            str = stream.readLine();
            qDebug() << str;
        }
        if (stream.status()!= QTextStream::Ok)
        {
            qDebug() << "Ошибка чтения файла";

        }
        file.close();
    }

    return a.exec();
}
