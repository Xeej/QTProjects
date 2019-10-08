#include "helloworld_1_3.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel label("<h2><i>Hello,</i>" "<font color = red> Qt!</font> </h2>");
    label.show();

    return a.exec();
}
