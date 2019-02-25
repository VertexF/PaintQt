#pragma once

#include <QList>
#include <QtWidgets/QMainWindow>
#include "ui_Paint.h"
#include "ScribbleArea.h"

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
	//This is used to close the window at the users request.
	//Also protects about losing data.
	void closeEvent(QCloseEvent *event) override;
protected slots:
	void open();
	void save();
	void changeColour();
	void paintWidth();
	void about();
private:
	void createMenus();
	void createActions();

	bool maybeSave();
	bool saveFile(const QByteArray &fileformat);
	ScribbleArea *scribbleArea;
	QMenu *saveAsMenu;
	QMenu *fileMenu;
	QMenu *optionsMenu;
	QMenu *helpMenu;
	QAction *openAction;
	QList<QAction *> saveAsActions;
	QAction *penWidth;
	QAction *penColourAct;
	QAction *printAct;
	QAction *screenClearAct;
	QAction *aboutAct;
	QAction *aboutQtAct;
private:
	Ui::Paint* ui;
};
