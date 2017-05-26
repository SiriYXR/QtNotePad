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
#include <QMenu>


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
		newfileAction = new QAction(QIcon(":/Picture/Newfile"), QObject::tr("&New"), QtNotePadClass);
		newfileAction->setStatusTip(QObject::tr("Creat a new file"));
		newfileAction->setShortcuts(QKeySequence::New);

		openAction = new QAction(QIcon(":/Picture/Open"), QObject::tr("&Open"), QtNotePadClass);
		openAction->setStatusTip(QObject::tr("Open an existing file"));
		openAction->setShortcuts(QKeySequence::Open);

		saveAction = new QAction(QIcon(":/Picture/Save"), QObject::tr("&Save"), QtNotePadClass);
		saveAction->setStatusTip(QObject::tr("Save the file"));
		saveAction->setShortcuts(QKeySequence::Save);

		saveasAction = new QAction(QIcon(":/Picture/SaveAs"), QObject::tr("&SaveAs"), QtNotePadClass);
		saveasAction->setStatusTip(QObject::tr("Save the file as"));
		saveasAction->setShortcut(QKeySequence(QObject::tr("Ctrl+Shift+S")));

		closeAction = new QAction(QIcon(":/Picture/Close"), QObject::tr("&Close"), QtNotePadClass);
		closeAction->setStatusTip(QObject::tr("Clos application"));
		closeAction->setShortcut(QKeySequence(QObject::tr("Escape")));

		undoAction = new QAction(QIcon(":/Picture/Undo"), QObject::tr("&Undo"), QtNotePadClass);
		undoAction->setStatusTip(QObject::tr("Undoes the last operation"));
		undoAction->setShortcuts(QKeySequence::Undo);

		redoAction = new QAction(QIcon(":/Picture/Redo"), QObject::tr("&Redo"), QtNotePadClass);
		redoAction->setStatusTip(QObject::tr("Redoes the last operation"));
		redoAction->setShortcuts(QKeySequence::Redo);

		copyAction = new QAction(QIcon(":/Picture/Copy"), QObject::tr("&Copy"), QtNotePadClass);
		copyAction->setStatusTip(QObject::tr("Copies any selected text to the clipboard"));
		copyAction->setShortcuts(QKeySequence::Copy);

		cutAction = new QAction(QIcon(":/Picture/Cut"), QObject::tr("&Cut"), QtNotePadClass);
		cutAction->setStatusTip(QObject::tr("Copies the selected text to the clipboard and deletes it from the text edit"));
		cutAction->setShortcuts(QKeySequence::Cut);

		pasteAction = new QAction(QIcon(":/Picture/Paste"), QObject::tr("&Paste"), QtNotePadClass);
		pasteAction->setStatusTip(QObject::tr("Pastes the text from the clipboard into the text edit at the current cursor position"));
		pasteAction->setShortcuts(QKeySequence::Paste);

		currentdatetimeAction = new QAction(QIcon(":/Picture/Time"), QObject::tr("&Time"), QtNotePadClass);
		currentdatetimeAction->setStatusTip(QObject::tr("Returns the current datetime, as reported by the system clock, in the local time zone"));
		currentdatetimeAction->setShortcut(QKeySequence(QObject::tr("Ctrl+T")));

		setfontAction = new QAction(QIcon(":/Picture/Font"), QObject::tr("&Font"), QtNotePadClass);
		setfontAction->setStatusTip(QObject::tr("Set Font"));
		setfontAction->setShortcut(QKeySequence(QObject::tr("Ctrl+F")));

		setcolorAction = new QAction(QIcon(":/Picture/Color"), QObject::tr("&Color"), QtNotePadClass);
		setcolorAction->setStatusTip(QObject::tr("Set Color"));
		setcolorAction->setShortcut(QKeySequence(QObject::tr("Ctrl+C")));

		aboutQtNotePadAction = new QAction(QIcon(":/Picture/About"), QObject::tr("&AboutQtNotePadAction"), QtNotePadClass);
		aboutQtNotePadAction->setStatusTip(QObject::tr("Read the information about QtNotePad"));

		//Menu
		QMenu *file = menuBar->addMenu(QObject::tr("&File"));
		file->addAction(newfileAction);
		file->addAction(openAction);
		file->addAction(saveAction);
		file->addAction(saveasAction);
		file->addSeparator();//添加分割线
		file->addAction(closeAction);

		QMenu *edit = menuBar->addMenu(QObject::tr("&Edit"));
		edit->addAction(undoAction);
		edit->addAction(redoAction);
		edit->addSeparator();//添加分割线
		edit->addAction(copyAction);
		edit->addAction(cutAction);
		edit->addAction(pasteAction);
		edit->addSeparator();//添加分割线
		edit->addAction(currentdatetimeAction);

		QMenu *format = menuBar->addMenu(QObject::tr("&Format"));
		format->addAction(setfontAction);
		format->addAction(setcolorAction);

		QMenu *help = menuBar->addMenu(QObject::tr("&Help"));
		help->addAction(aboutQtNotePadAction);

		//Tool
		mainToolBar->addAction(newfileAction);
		mainToolBar->addAction(openAction);
		mainToolBar->addAction(saveAction);
		mainToolBar->addAction(saveasAction);

		mainToolBar->addSeparator();//添加分割线

		mainToolBar->addAction(undoAction);
		mainToolBar->addAction(redoAction);
		mainToolBar->addAction(copyAction);
		mainToolBar->addAction(cutAction);
		mainToolBar->addAction(pasteAction);
		mainToolBar->addAction(currentdatetimeAction);

		mainToolBar->addSeparator();//添加分割线

		mainToolBar->addAction(setfontAction);
		mainToolBar->addAction(setcolorAction);


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