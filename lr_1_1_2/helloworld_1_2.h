#ifndef HELLOWORLD_1_2_H
#define HELLOWORLD_1_2_H

#include <QMainWindow>

namespace Ui {
class Helloworld_1_2;
}

class Helloworld_1_2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Helloworld_1_2(QWidget *parent = 0);
    ~Helloworld_1_2();

private:
    Ui::Helloworld_1_2 *ui;
};

#endif // HELLOWORLD_1_2_H
