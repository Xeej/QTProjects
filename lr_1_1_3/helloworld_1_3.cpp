#include "helloworld_1_3.h"
#include "ui_helloworld_1_3.h"

helloworld_1_3::helloworld_1_3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::helloworld_1_3)
{
    ui->setupUi(this);
}

helloworld_1_3::~helloworld_1_3()
{
    delete ui;
}
