#include "helloworld_1_2.h"
#include "ui_helloworld_1_2.h"

Helloworld_1_2::Helloworld_1_2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Helloworld_1_2)
{
    ui->setupUi(this);
}

Helloworld_1_2::~Helloworld_1_2()
{
    delete ui;
}
