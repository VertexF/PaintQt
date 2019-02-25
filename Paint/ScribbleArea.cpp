#include "ScribbleArea.h"



ScribbleArea::ScribbleArea(QWidget *parent)
	: QWidget(parent)
{
}


ScribbleArea::~ScribbleArea()
{
}

//File handling
void ScribbleArea::openImage(const QString& filePath)
{

}

void ScribbleArea::saveImage(const QString& filePath, const char* fileFormat)
{
	
}

//Pen set up
void ScribbleArea::setPenColour(const QColor& colour) 
{

}

void ScribbleArea::setPenWidth(int newWidth) 
{

}

//Utlity Functions 
void ScribbleArea::clearImage() 
{

}

void ScribbleArea::print() 
{

}

//Mouse Events slot
void ScribbleArea::mousePressEvent(QMouseEvent *mouse) 
{

}

void ScribbleArea::mouseMoveEvent(QMouseEvent *mouse) 
{

}

void ScribbleArea::mouseReleaseEvent(QMouseEvent *mouse)
{

}

void ScribbleArea::paintEvent(QPaintEvent *paintEvent)
{

}

void ScribbleArea::resizeEvent(QResizeEvent *resizeEvent)
{

}

//Drawing functions
void ScribbleArea::drawLineTo(const QPoint &endPoint) 
{

}

void ScribbleArea::resizeImage(QImage *image, const QSize &newSize) 
{

}
