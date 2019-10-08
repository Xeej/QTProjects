#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton button("helloworld");//обьявление кнопки с именем
    button.resize(200,60);//изменение размеров кнопки
    button.show();//показать кнопку

    return a.exec();
}
