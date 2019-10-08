#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QBuffer>
#include <QtDebug>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QFile file("myfile.txt");
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        QString str = stream.readAll();
        qDebug() << str;
        if (stream.status() != QTextStream::Ok)
        {
            qDebug() << "Ошибка чтения файла";
        }

    }

    QFile file2("file.txt");
    QString str = "This is a text";
    if (file2.open(QIODevice::WriteOnly))
    {
        QTextStream stream(&file2);
        stream << str.toUpper();
        file2.close();
        if (stream.status() != QTextStream::Ok)
        {
            qDebug() << "Ошибка записи файла";
        }
    }
    file2.close();
file.close();
    return app.exec();
}
