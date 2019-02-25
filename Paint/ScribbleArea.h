#pragma once

#include <QColor>
#include <QImage>
#include <QPoint>
#include <QWidget>

class ScribbleArea : public QWidget
{
	Q_OBJECT
public:
	ScribbleArea(QWidget *parent = 0);
	~ScribbleArea();
	void openImage(const QString& filePath); 
	void saveImage(const QString& filePath, const char* fileFormat);
	void setPenColour(const QColor& colour);
	void setPenWidth(int newWidth);

	bool isModified() const { return modified;  }
	QColor getPenColour() const { return penColour;}
	int getPenWidth() const { return penWidth; }
public slots:
	void clearImage();
	void print();
protected:
	void mousePressEvent(QMouseEvent *mouse) override;
	void mouseMoveEvent(QMouseEvent *mouse) override;
	void mouseReleaseEvent(QMouseEvent *mouse) override;
	void paintEvent(QPaintEvent *paintEvent) override;
	void resizeEvent(QResizeEvent *resizeEvent) override;
private:
	void drawLineTo(const QPoint &endPoint);
	void resizeImage(QImage *image, const QSize &newSize);
	bool modified;
	bool scribbling;
	QColor penColour;
	QImage image;
	int penWidth;
};

