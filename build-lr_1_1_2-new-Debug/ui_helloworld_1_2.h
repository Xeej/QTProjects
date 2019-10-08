/********************************************************************************
** Form generated from reading UI file 'helloworld_1_2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_1_2_H
#define UI_HELLOWORLD_1_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Helloworld_1_2
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Helloworld_1_2)
    {
        if (Helloworld_1_2->objectName().isEmpty())
            Helloworld_1_2->setObjectName(QStringLiteral("Helloworld_1_2"));
        Helloworld_1_2->resize(400, 300);
        menuBar = new QMenuBar(Helloworld_1_2);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Helloworld_1_2->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Helloworld_1_2);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Helloworld_1_2->addToolBar(mainToolBar);
        centralWidget = new QWidget(Helloworld_1_2);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Helloworld_1_2->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Helloworld_1_2);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Helloworld_1_2->setStatusBar(statusBar);

        retranslateUi(Helloworld_1_2);

        QMetaObject::connectSlotsByName(Helloworld_1_2);
    } // setupUi

    void retranslateUi(QMainWindow *Helloworld_1_2)
    {
        Helloworld_1_2->setWindowTitle(QApplication::translate("Helloworld_1_2", "Helloworld_1_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Helloworld_1_2: public Ui_Helloworld_1_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_1_2_H
