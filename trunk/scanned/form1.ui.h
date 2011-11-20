
#include <qfiledialog.h>
#include <qstring.h>
#include <stdio.h>
#include <iostream.h>
#include "CommonUtils.h"



/****************************************************************************
** ui.h extension file, included from the uic-generated form implementation.
**
** If you want to add, delete, or rename functions or slots, use
** Qt Designer to update this file, preserving your code.
**
** You should not define a constructor or destructor in this file.
** Instead, write your code in functions called init() and destroy().
** These will automatically be called by the form's constructor and
** destructor.
*****************************************************************************/


void Form1::fileNew()
{
	cout << "\r\nRunning vripsurf..." << endl;
	createVripSurf();
}


void Form1::fileOpen()
{
	QString *qstring;
	printf("Opening File Dialog");
    //QString filename = QFileDialog::getOpenFileName(tr("*.ply"), tr("Ply Files (*.ply)"), NULL, "Add PLY", tr(""), qstring, true);
    QString filename = QFileDialog::getOpenFileName(tr("*.ply"), tr("/"), NULL, "Add PLY", tr("../samples/range-scan/bunny/data/"), qstring, true);
	printf("Open File Dialog finished");
    printf("Chosen file is %s", filename.latin1());

	std::cout << filename.latin1();

	myGLWidget1->loadPlyFile(filename.latin1());
}


void Form1::fileSave()
{
	cout << "\r\nRunning prepare vrip..." << endl;
	prepareVrip();
}


void Form1::fileSaveAs()
{
	cout << "\r\nRunning vripnew ..." << endl;
	createNewVripVri();
}


void Form1::filePrint()
{
	cout << "\r\nRunning volfill ..." << endl;
        runVolfill();
}


void Form1::fileExit()
{

}


void Form1::editUndo()
{

}


void Form1::editRedo()
{

}


void Form1::editCut()
{

}


void Form1::editCopy()
{

}


void Form1::editPaste()
{

}


void Form1::editFind()
{

}


void Form1::helpIndex()
{

}


void Form1::helpContents()
{

}


void Form1::helpAbout()
{

}


void Form1::Add_Scan_Button_clicked()
{
	QString *qstring;
    QString filename = QFileDialog::getOpenFileName(tr("."), tr("Ply Files (*.ply)"), NULL, "Add PLY", tr(""), qstring, true);
    printf("Chosen file is %s", filename);
	//static QString QFileDialog::getOpenFileName(const QString&, const QString&, QWidget*, const char*, const QString&, QString*, bool)

}