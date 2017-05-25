#ifndef QTNOTEPAD_H
#define QTNOTEPAD_H

#include <QtWidgets/QMainWindow>
#include "ui_qtnotepad.h"

class QtNotePad : public QMainWindow
{
	Q_OBJECT

public:
	QtNotePad(QWidget *parent = 0);
	~QtNotePad();

private:
	Ui::QtNotePadClass ui;
};

#endif // QTNOTEPAD_H
