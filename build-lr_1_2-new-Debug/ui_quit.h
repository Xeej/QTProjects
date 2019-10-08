/********************************************************************************
** Form generated from reading UI file 'quit.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIT_H
#define UI_QUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quit
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *quit)
    {
        if (quit->objectName().isEmpty())
            quit->setObjectName(QStringLiteral("quit"));
        quit->resize(400, 300);
        menuBar = new QMenuBar(quit);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        quit->setMenuBar(menuBar);
        mainToolBar = new QToolBar(quit);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        quit->addToolBar(mainToolBar);
        centralWidget = new QWidget(quit);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        quit->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(quit);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        quit->setStatusBar(statusBar);

        retranslateUi(quit);

        QMetaObject::connectSlotsByName(quit);
    } // setupUi

    void retranslateUi(QMainWindow *quit)
    {
        quit->setWindowTitle(QApplication::translate("quit", "quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class quit: public Ui_quit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIT_H
