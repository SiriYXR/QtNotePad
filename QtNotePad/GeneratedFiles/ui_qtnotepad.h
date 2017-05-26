/********************************************************************************
** Form generated from reading UI file 'qtnotepad.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTNOTEPAD_H
#define UI_QTNOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtNotePadClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtNotePadClass)
    {
        if (QtNotePadClass->objectName().isEmpty())
            QtNotePadClass->setObjectName(QStringLiteral("QtNotePadClass"));
        QtNotePadClass->resize(600, 400);
        menuBar = new QMenuBar(QtNotePadClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtNotePadClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtNotePadClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtNotePadClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtNotePadClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtNotePadClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtNotePadClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtNotePadClass->setStatusBar(statusBar);

        retranslateUi(QtNotePadClass);

        QMetaObject::connectSlotsByName(QtNotePadClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtNotePadClass)
    {
        QtNotePadClass->setWindowTitle(QApplication::translate("QtNotePadClass", "QtNotePad", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtNotePadClass: public Ui_QtNotePadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTNOTEPAD_H
