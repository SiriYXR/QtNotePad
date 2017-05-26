#pragma once

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

#include <QTextEdit>
#include <QAction>

QT_BEGIN_NAMESPACE

class Ui_QtNotePadClass
{
public:
	QMenuBar *menuBar;
	QToolBar *mainToolBar;
	QTextEdit *textEdit;
	QWidget *centralWidget;
	QStatusBar *statusBar;

	QAction *newfileAction;
	QAction *openAction;
	QAction *saveAction;
	QAction *saveasAction;
	QAction *closeAction;

	QAction *undoAction;
	QAction *redoAction;
	QAction *copyAction;
	QAction *cutAction;
	QAction *pasteAction;
	QAction *currentdatetimeAction;

	QAction *setfontAction;
	QAction *setcolorAction;

	QAction *aboutQtNotePadAction;

	void setupUi(QMainWindow *QtNotePadClass)
	{
		//MainWindow
		if (QtNotePadClass->objectName().isEmpty())
			QtNotePadClass->setObjectName(QStringLiteral("QtNotePadClass"));
		QtNotePadClass->resize(600, 400);
		
		menuBar = new QMenuBar(QtNotePadClass);
		menuBar->setObjectName(QStringLiteral("menuBar"));
		QtNotePadClass->setMenuBar(menuBar);

		mainToolBar = new QToolBar(QtNotePadClass);
		mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
		QtNotePadClass->addToolBar(mainToolBar);

		textEdit = new QTextEdit(QtNotePadClass);
		textEdit->setObjectName(QStringLiteral("textEdit"));
		QtNotePadClass->setCentralWidget(textEdit);

		statusBar = new QStatusBar(QtNotePadClass);
		statusBar->setObjectName(QStringLiteral("statusBar"));
		QtNotePadClass->setStatusBar(statusBar);

		//Action
		newfileAction = new QAction(QIcon(":/images/Newfile"), QObject::tr("&New"), QtNotePadClass);
		newfileAction->setStatusTip(QObject::tr("Creat a new file"));
		newfileAction->setShortcuts(QKeySequence::New);

		openAction = new QAction(QIcon(":/images/Open"), QObject::tr("&Open"), QtNotePadClass);
		openAction->setStatusTip(QObject::tr("Open an existing file"));
		openAction->setShortcuts(QKeySequence::Open);

		saveAction = new QAction(QIcon(":/images/Save"), QObject::tr("&Save"), QtNotePadClass);
		saveAction->setStatusTip(QObject::tr("Open an existing file"));
		saveAction->setShortcuts(QKeySequence::Save);

		saveasAction = new QAction(QIcon(":/images/SaveAs"), QObject::tr("&SaveAs"), QtNotePadClass);
		saveasAction->setStatusTip(QObject::tr("Open an existing file"));
		saveasAction->setShortcuts(QKeySequence::SaveAs);

		closeAction = new QAction(QIcon(":/images/Close"), QObject::tr("&Close"), QtNotePadClass);
		closeAction->setStatusTip(QObject::tr("Open an existing file"));
		//closeAction->setShortcuts(QKeySequence::Close);

		undoAction = new QAction(QIcon(":/images/Undo"), QObject::tr("&Undo"), QtNotePadClass);
		undoAction->setStatusTip(QObject::tr("Open an existing file"));
		undoAction->setShortcuts(QKeySequence::Open);

		redoAction = new QAction(QIcon(":/images/Redo"), QObject::tr("&Redo"), QtNotePadClass);
		redoAction->setStatusTip(QObject::tr("Open an existing file"));
		redoAction->setShortcuts(QKeySequence::Open);

		copyAction = new QAction(QIcon(":/images/Copy"), QObject::tr("&Copy"), QtNotePadClass);
		copyAction->setStatusTip(QObject::tr("Open an existing file"));
		copyAction->setShortcuts(QKeySequence::Open);

		cutAction = new QAction(QIcon(":/images/Cut"), QObject::tr("&Cut"), QtNotePadClass);
		cutAction->setStatusTip(QObject::tr("Open an existing file"));
		cutAction->setShortcuts(QKeySequence::Open);

		pasteAction = new QAction(QIcon(":/images/Paste"), QObject::tr("&Paste"), QtNotePadClass);
		pasteAction->setStatusTip(QObject::tr("Open an existing file"));
		pasteAction->setShortcuts(QKeySequence::Open);

		currentdatetimeAction = new QAction(QIcon(":/images/Time"), QObject::tr("&Time"), QtNotePadClass);
		currentdatetimeAction->setStatusTip(QObject::tr("Open an existing file"));
		currentdatetimeAction->setShortcuts(QKeySequence::Open);

		setfontAction = new QAction(QIcon(":/images/Font"), QObject::tr("&Font"), QtNotePadClass);
		setfontAction->setStatusTip(QObject::tr("Open an existing file"));
		setfontAction->setShortcuts(QKeySequence::Open);

		setcolorAction = new QAction(QIcon(":/images/Color"), QObject::tr("&Color"), QtNotePadClass);
		setcolorAction->setStatusTip(QObject::tr("Open an existing file"));
		setcolorAction->setShortcuts(QKeySequence::Open);

		aboutQtNotePadAction = new QAction(QIcon(":/images/About"), QObject::tr("&About"), QtNotePadClass);
		aboutQtNotePadAction->setStatusTip(QObject::tr("Open an existing file"));
		aboutQtNotePadAction->setShortcuts(QKeySequence::Open);


		retranslateUi(QtNotePadClass);
		QMetaObject::connectSlotsByName(QtNotePadClass);
	} // setupUi

	void retranslateUi(QMainWindow *QtNotePadClass)
	{
		QtNotePadClass->setWindowTitle(QApplication::translate("QtNotePadClass", "QtNotePad", Q_NULLPTR));
	} // retranslateUi

};

namespace Ui {
	class QtNotePadClass : public Ui_QtNotePadClass {};
} // namespace Ui

QT_END_NAMESPACE