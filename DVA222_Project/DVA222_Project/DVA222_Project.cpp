// DVA222_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Graphix.h"
#include "glut.h"
#include "MyButton.h"
#include "Label.h"
#include "ImageBox.h"
#include "Window.h"
#include "RadioButton.h"

using namespace std;


int _tmain(int argc, char** argv)
{
    //A new object of Button type is create and passed to the InitOGL function. 
    //From that point the control is handed over to the OpenGL window and stays there until the user closes the Window.
    //This means after calling the InitOGL function no further lines of code in the main function are executed until we close the Window.
    //------------------------------------------------------------------------------------------------------------------------------------
    //ControlBase* button = new MyButton(10,10,190,60);
	
  //Skapa innehålle
  ZControlBase* label = new Label("hej", 10, 10, 100, 0, 0);
  ZControlBase* radioButton1 = new RadioButton("Jag är en Radiobutton", 100, 100);

  //Skapa MainWindow
  Container* test = new Container(0, 0, 800, 600);
  test->AddObject(label);
  test->AddObject(radioButton1);


  ControlBase* mainWindow = test;
  InitOGL(argc, argv, mainWindow);

    delete label;
	
	return 0;
}

