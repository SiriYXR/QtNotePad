#pragma once

#include <QDialog>
#include <QLabel>
#include <QFont>
#include <QLayout>
#include <QListWidget>  
#include <QStackedWidget>
#include <QPainter>
#include <QPixmap>
#include <QIcon>

#include <QWidget>
#include <QDesktopServices>


class About
{

public:
	About(QtNotePad *father)
	{
		QDialog *about=new QDialog;
		QPixmap *picture=new QPixmap(":/Picture/QtNotePad");
		QLabel *Ltitle=new QLabel(about);
		QLabel *Linformation=new QLabel(about);
		QLabel *LPicture=new QLabel(about);
		QLabel *Llink = new QLabel(about);

		about->setWindowFlags(Qt::WindowCloseButtonHint);//隐藏多余的按钮，只剩下关闭按钮
		about->setWindowTitle("About QtNotePad");
		about->setFixedSize(400, 400);//将窗口大小固定 
		about->setWindowIcon(QIcon(":/Picture/About"));

		LPicture->setPixmap(*picture);

		//设定字体和字号等格式 
		Ltitle->setText("QtNotePad");
		Ltitle->setFont(QFont("Adobe Arabic",40, QFont::Bold));
		Ltitle->setStyleSheet("color:#55aa00");

		Llink->setOpenExternalLinks(true);
		Llink->setText(QObject::tr("GitHub:<style> a {text-decoration: none} </style>  <a style='color: green;' href=\"https://github.com/SiriYXR/\">https://github.com/SiriYXR</a>"));
		Llink->setFont(QFont("Adobe Arabic", 20, QFont::Normal));
		
		Linformation->setText("QtNotePad\nEdition:1.0\nMaker:Siri\n\nIf you have any questions or suggestions \nplease contact me with  QQ (1158737962)");
		Linformation->setFont(QFont("Adobe Arabic", 20, QFont::Normal));
		Linformation->setStyleSheet("color:black");
		
		LPicture->setGeometry(50,50,100,100);
		Ltitle->setGeometry(160,50, 300, 100);
		Linformation->setGeometry(30,180, 400, 200);
		Llink->setGeometry(30, 275, 400, 40);

		about->exec();
		delete about;
	}

	~About()
	{
		
	}
	
};

