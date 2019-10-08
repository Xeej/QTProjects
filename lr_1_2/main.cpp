#include "quit.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton *button = new QPushButton("Quit");
    QObject::connect(button,SIGNAL(clicked()),&a,SLOT(quit()));
    button->resize(200,60);
    button->show();

    return a.exec();
}
