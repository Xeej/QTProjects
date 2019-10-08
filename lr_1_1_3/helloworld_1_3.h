#ifndef HELLOWORLD_1_3_H
#define HELLOWORLD_1_3_H

#include <QMainWindow>

namespace Ui {
class helloworld_1_3;
}

class helloworld_1_3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit helloworld_1_3(QWidget *parent = 0);
    ~helloworld_1_3();

private:
    Ui::helloworld_1_3 *ui;
};

#endif // HELLOWORLD_1_3_H
