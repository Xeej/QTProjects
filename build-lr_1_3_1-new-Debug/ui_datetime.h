/********************************************************************************
** Form generated from reading UI file 'datetime.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIME_H
#define UI_DATETIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_datetime
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *datetime)
    {
        if (datetime->objectName().isEmpty())
            datetime->setObjectName(QStringLiteral("datetime"));
        datetime->resize(400, 300);
        menuBar = new QMenuBar(datetime);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        datetime->setMenuBar(menuBar);
        mainToolBar = new QToolBar(datetime);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        datetime->addToolBar(mainToolBar);
        centralWidget = new QWidget(datetime);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        datetime->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(datetime);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        datetime->setStatusBar(statusBar);

        retranslateUi(datetime);

        QMetaObject::connectSlotsByName(datetime);
    } // setupUi

    void retranslateUi(QMainWindow *datetime)
    {
        datetime->setWindowTitle(QApplication::translate("datetime", "datetime", nullptr));
    } // retranslateUi

};

namespace Ui {
    class datetime: public Ui_datetime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIME_H
