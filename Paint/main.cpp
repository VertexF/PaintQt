#include "Paint.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Paint w;
	w.show();
	return a.exec();
}
