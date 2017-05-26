//=============================
//程序名称：QtNotePad
//版本号：1.0
//制作人：杨新瑞
//
//创建时间：2017.5.25
//完工时间：
//代码量：行
//制作周期：2 天
//
//更新日志：
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
