/*
 *  main.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/23/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */
#include "notepad.h"
#include <QtGui>

int main(int argv, char **args)
{
	QApplication app(argv, args);
    Notepad notepad;
    notepad.show();
	return app.exec();
}
