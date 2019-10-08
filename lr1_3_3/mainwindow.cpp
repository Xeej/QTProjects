#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFont font("Times",28,QFont::Bold);
    ui->label->setFont(font);
    ui->label->setText(QTime::currentTime().toString("hh:mm:ss"));
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(slotTimerAlarm()));
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::slotTimerAlarm()
{
    ui->label->setText(QTime::currentTime().toString("hh:mm:ss"));
}
