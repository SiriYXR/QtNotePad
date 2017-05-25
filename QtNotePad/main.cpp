#include "qtnotepad.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtNotePad w;
	w.show();
	return a.exec();
}
