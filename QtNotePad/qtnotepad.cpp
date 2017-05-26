#include "qtnotepad.h"
#include "ui_about.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>
#include <QFontDialog>
#include <QColorDialog>
#include <QDateTime>


QtNotePad::QtNotePad(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	init_connect();
}

QtNotePad::~QtNotePad()
{

}

void QtNotePad::init_connect()
{
	QObject::connect(ui.newfileAction, &QAction::triggered, this, &QtNotePad::newFile);
	QObject::connect(ui.openAction, &QAction::triggered, this, &QtNotePad::openFile);
	QObject::connect(ui.saveAction, &QAction::triggered, this, &QtNotePad::saveFile);
	QObject::connect(ui.saveasAction, &QAction::triggered, this, &QtNotePad::saveasFile);
	QObject::connect(ui.closeAction, &QAction::triggered, this, &QtNotePad::close);

	QObject::connect(ui.undoAction, &QAction::triggered, ui.textEdit, &QTextEdit::undo);
	QObject::connect(ui.redoAction, &QAction::triggered, ui.textEdit, &QTextEdit::redo);
	QObject::connect(ui.copyAction, &QAction::triggered, ui.textEdit, &QTextEdit::copy);
	QObject::connect(ui.cutAction, &QAction::triggered, ui.textEdit, &QTextEdit::cut);
	QObject::connect(ui.pasteAction, &QAction::triggered, ui.textEdit, &QTextEdit::paste);
	QObject::connect(ui.currentdatetimeAction, &QAction::triggered, this, &QtNotePad::currentDateTime);

	QObject::connect(ui.setfontAction, &QAction::triggered, this, &QtNotePad::setFont);
	QObject::connect(ui.setcolorAction, &QAction::triggered, this, &QtNotePad::setColor);

	QObject::connect(ui.aboutQtNotePadAction, &QAction::triggered, this, &QtNotePad::aboutQtNotePad);
}

void QtNotePad::newFile()
{
	if (ui.textEdit->document()->isModified())
	{
		saveFile();
	}
	else
	{
		ui.textEdit->clear();
		this->setWindowTitle("Untitled.txt--QtNotePad");
	}
}

void QtNotePad::openFile()
{
	saveFileName = QFileDialog::getOpenFileName(this,
		tr("Open File"),
		".",
		tr("Text Files(*.txt)"));

	if (saveFileName.isEmpty())
	{
		QMessageBox::warning(this, tr("Path"),
			tr("You did not select any file."));
		return;
	}

	QFile file(saveFileName);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
		QMessageBox::warning(this, tr("Read File"),
			tr("Cannot open file:\n%1").arg(saveFileName));
		return;
	}
	QTextStream in(&file);
	ui.textEdit->setText(in.readAll());
	file.close();
}

void QtNotePad::saveFile()
{
	if (saveFileName.isEmpty())
	{
		this->saveasFile();
	}
	else
	{
		QFile *file = new QFile;
		file->setFileName(saveFileName);
		bool ok = file->open(QIODevice::WriteOnly);
		if (ok)
		{
			QTextStream out(file);
			out << ui.textEdit->toPlainText();
			file->close();
			this->setWindowTitle(saveFileName + "--QtNotePad");
			delete file;
		}
	}
}

void QtNotePad::saveasFile()
{
	saveFileName = QFileDialog::getSaveFileName(this,
		tr("Open File"),
		".",
		tr("Text Files(*.txt)"));
	if (!saveFileName.isEmpty()) {
		QFile file(saveFileName);
		if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
			QMessageBox::warning(this, tr("Write File"),
				tr("Cannot open file:\n%1").arg(saveFileName));
			return;
		}
		QTextStream out(&file);
		out << ui.textEdit->toPlainText();
		this->setWindowTitle(saveFileName + "--QtNotePad");
		file.close();
	}
	else {
		QMessageBox::warning(this, tr("Path"),
			tr("You did not select any file."));
	}
}

void QtNotePad::currentDateTime()
{
	QDateTime current = QDateTime::currentDateTime();
	QString time = current.toString("yyyy-M-dd hh:mm:ss");
	ui.textEdit->append(time);
}

void QtNotePad::setFont()
{
	bool ok;
	QFont font = QFontDialog::getFont(&ok, this);
	if (ok)
	{
		ui.textEdit->setFont(font);
	}
	else
	{
		//QMessageBox::information(this, "Error Message", "Error Set Font");
		return;
	}
}

void QtNotePad::setColor()
{
	QColor color = QColorDialog::getColor(Qt::red, this);
	if (color.isValid())
	{
		ui.textEdit->setTextColor(color);
	}
	else
	{
		//QMessageBox::information(this, "Error Message", "Color is unvalid");
		return;
	}
}

void QtNotePad::aboutQtNotePad()
{
	About about(this);
}