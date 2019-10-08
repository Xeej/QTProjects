#ifndef DATETIME_H
#define DATETIME_H

#include <QMainWindow>

namespace Ui {
class datetime;
}

class datetime : public QMainWindow
{
    Q_OBJECT

public:
    explicit datetime(QWidget *parent = 0);
    ~datetime();

private:
    Ui::datetime *ui;
};

#endif // DATETIME_H
