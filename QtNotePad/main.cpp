//=============================
//�������ƣ�QtNotePad
//�汾�ţ�1.0
//�����ˣ�������
//
//����ʱ�䣺2017.5.25
//�깤ʱ�䣺
//����������
//�������ڣ�2 ��
//
//������־��
//
//=============================


#include "qtnotepad.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtNotePad w;
	w.show();
	return a.exec();
}
