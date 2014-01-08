/*
 *  notepad.h
 *  
 *
 *  Created by Ten Mutunhire on 12/23/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */
#include <QtGui>

class Notepad : public QWidget {
	Q_OBJECT
	
public:
	Notepad();
	
private slots:
	void quit();
	
private:
	QTextEdit *textEdit;
	QPushButton *quitButton;
	
};
