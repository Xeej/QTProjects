#include "datetime.h"
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QDate>
#include <QTime>
#include <QDateTime>
#include <QTime>
#include <QTimeEdit>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QDate dateToDay = QDate::currentDate();
    QTime Now= QTime::currentTime();
    QString str1,str2,str3;
    str1=dateToDay.toString("d/M/yy");
    str2=Now.toString("h:m:s");
    str3= str1+" "+str2;

    QLabel label("<H2><CENTER>"+ str3 + "<H2><CENTER>");
    label.show();


    return a.exec();
}
