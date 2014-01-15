/*
 *  notepad.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/23/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */
#include <QAction>
#include "notepad.h"
#include <QMainWindow>

Notepad::Notepad()
{
    openAction = new QAction(tr("&Open"), this);
    saveAction = new QAction(tr("&Save"), this);
    exitAction = new QAction(tr("E&xit"), this);

    connect(openAction, SIGNAL(triggered()), this, SLOT(open()));
    connect(saveAction, SIGNAL(triggered()), this, SLOT(save()));
    connect(exitAction, SIGNAL(triggered()), this, SLOT(quit()));


    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(openAction);
    fileMenu->addAction(saveAction);
    fileMenu->addSeparator();
    fileMenu->addAction(exitAction);

    textEdit = new QTextEdit;
    setCentralWidget(textEdit);

    setWindowTitle(tr("Notepad"));





    //QVBoxLayout *layout = new QVBoxLayout;
    //layout->addWidget(textEdit);
    //layout->addWidget(quitButton);

    //setLayout(layout);

    //setWindowTitle(tr("Notepad"));
}

void Notepad::quit()
{
    QMessageBox messageBox;
    messageBox.setWindowTitle(tr("Notepad"));
    messageBox.setText(tr("Do you really want to quit?"));
    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::No);
    if (messageBox.exec() == QMessageBox::Yes)
        qApp->quit();
}

void Notepad::save()
{

}

void Notepad::open()
{

}
