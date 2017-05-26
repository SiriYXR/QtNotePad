#ifndef QTNOTEPAD_H
#define QTNOTEPAD_H

#include "ui_QtNotePad.h"

#include <QtWidgets/QMainWindow>
#include<QTextEdit>

class QtNotePad : public QMainWindow
{
	Q_OBJECT

public:
	QtNotePad(QWidget *parent = 0);
	~QtNotePad();

private:
	void init_connect();
	

	void newFile();
	void openFile();
	void saveFile();
	void saveasFile();

	void currentDateTime();

	void setFont();
	void setColor();

	void aboutQtNotePad();

private:
	Ui::QtNotePadClass ui;

	QString saveFileName;
};

#endif // QTNOTEPAD_H
