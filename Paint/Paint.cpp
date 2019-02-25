#include "Paint.h"

Paint::Paint(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::Paint)
{
	ui->setupUi(this);
}
