/********************************************************************************
** Form generated from reading UI file 'Paint.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINT_H
#define UI_PAINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Paint
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Paint)
    {
        if (Paint->objectName().isEmpty())
            Paint->setObjectName(QString::fromUtf8("Paint"));
        Paint->resize(600, 400);
        menuBar = new QMenuBar(Paint);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Paint->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Paint);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Paint->addToolBar(mainToolBar);
        centralWidget = new QWidget(Paint);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Paint->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Paint);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Paint->setStatusBar(statusBar);

        retranslateUi(Paint);

        QMetaObject::connectSlotsByName(Paint);
    } // setupUi

    void retranslateUi(QMainWindow *Paint)
    {
        Paint->setWindowTitle(QApplication::translate("Paint", "Paint", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Paint: public Ui_Paint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINT_H
