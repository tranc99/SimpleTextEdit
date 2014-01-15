/*
 *  notepad.h
 *  
 *
 *  Created by Ten Mutunhire on 12/23/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */
#include <QtGui>

class Notepad : public QMainWindow {
	Q_OBJECT
	
public:
	Notepad();
	
private slots:
    void open();
    void save();
	void quit();
	
private:
	QTextEdit *textEdit;

    QAction *openAction;
    QAction *saveAction;
    QAction *exitAction;

    QMenu *fileMenu;
	
};
