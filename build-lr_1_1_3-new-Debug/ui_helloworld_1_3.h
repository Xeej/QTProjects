/********************************************************************************
** Form generated from reading UI file 'helloworld_1_3.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_1_3_H
#define UI_HELLOWORLD_1_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helloworld_1_3
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *helloworld_1_3)
    {
        if (helloworld_1_3->objectName().isEmpty())
            helloworld_1_3->setObjectName(QStringLiteral("helloworld_1_3"));
        helloworld_1_3->resize(400, 300);
        menuBar = new QMenuBar(helloworld_1_3);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        helloworld_1_3->setMenuBar(menuBar);
        mainToolBar = new QToolBar(helloworld_1_3);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        helloworld_1_3->addToolBar(mainToolBar);
        centralWidget = new QWidget(helloworld_1_3);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        helloworld_1_3->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(helloworld_1_3);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        helloworld_1_3->setStatusBar(statusBar);

        retranslateUi(helloworld_1_3);

        QMetaObject::connectSlotsByName(helloworld_1_3);
    } // setupUi

    void retranslateUi(QMainWindow *helloworld_1_3)
    {
        helloworld_1_3->setWindowTitle(QApplication::translate("helloworld_1_3", "helloworld_1_3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class helloworld_1_3: public Ui_helloworld_1_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_1_3_H
