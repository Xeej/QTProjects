#include "quit.h"
#include "ui_quit.h"

quit::quit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::quit)
{
    ui->setupUi(this);
}

quit::~quit()
{
    delete ui;
}
