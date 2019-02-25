#pragma once

#include <QList>
#include <QtWidgets/QMainWindow>
#include "ui_Paint.h"

namespace Ui {
	class Paint;
}

class ScribbleArea;

class Paint : public QMainWindow
{
	Q_OBJECT

public:
	Paint(QWidget *parent = Q_NULLPTR);
protected:

protected slots:

private:
	Ui::Paint* ui;
};
