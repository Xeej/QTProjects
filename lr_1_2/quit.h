#ifndef QUIT_H
#define QUIT_H

#include <QMainWindow>

namespace Ui {
class quit;
}

class quit : public QMainWindow
{
    Q_OBJECT

public:
    explicit quit(QWidget *parent = 0);
    ~quit();

private:
    Ui::quit *ui;
};

#endif // QUIT_H
