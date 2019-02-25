#include "Paint.h"

Paint::Paint(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::Paint)
{
	ui->setupUi(this);
}

void Paint::closeEvent(QCloseEvent *event) 
{

}

//private slots
void Paint::open() 
{

}

void Paint::save() 
{

}

void Paint::changeColour() 
{

}

void Paint::paintWidth() 
{

}

void Paint::about() 
{

}

//Menu handling
void Paint::createMenus() 
{

}

void Paint::createActions() 
{

}

//File saving
bool Paint::maybeSave() 
{
	return false;
}

bool Paint::saveFile(const QByteArray &fileformat) 
{
	return false;
}