// DVA222_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Graphix.h"
#include "glut.h"

#include "Label.h"
#include "ImageBox.h"
#include "Button.h"

#include "RadioButton.h"
#include "Checkbox.h"

#include "Window.h"
#include "Panel.h"

#include "RadioButtonGroup.h"
#include "CheckboxGroup.h"

using namespace std;


int _tmain(int argc, char** argv)
{
  //A new object of Button type is create and passed to the InitOGL function. 
  //From that point the control is handed over to the OpenGL window and stays there until the user closes the Window.
  //This means after calling the InitOGL function no further lines of code in the main function are executed until we close the Window.
  //------------------------------------------------------------------------------------------------------------------------------------

  //Skapa MainWindow
  Panel* mainWindow = new Panel(0, 0, 800, 600, Color(200, 200, 200));
  
  //Skapa innehålle
  ZControlBase* topText = new Label("I am a Label. Actually all the text that you see down there are Labels contained in the Panels. My text has a different color", 30, 30, 0, 0, 255);
  //ZControlBase* freeRadioButton = new RadioButton("I am a Radiobutton", 30, 300); ///Det går att skapas här
  //ZControlBase* freeRadioButton = new checkbox("i am a checkbox", 30, 330);

  ZControlBase* image = new ImageBox("ButtonNorm.bmp", 30, 400, 100, 100);
  ZControlBase* radio = new RadioButton("Hej", Color(255,0,0), 50, 30);
  ZControlBase* check = new Checkbox("Check", 50, 50);

  Panel* greenPanel = new Panel(400, 300, 370, 200, Color(0, 255, 110));
  greenPanel->AddObject(new Label("I am also a Panel. as you can see...", 30, 30, 0, 0, 0));

  Panel* bluePanel = new Panel(250, 400, 370, 170, Color(0, 200, 255));
  bluePanel->AddObject(new Label("I am a Panel. I can contain stuff...", 30, 30, 0, 0, 0));
  bluePanel->AddObject(new Button("Hello, i am a button", Color(0, 0, 0), Color(255, 255, 100), 30, 100, 320, 30));
  
  //Lägg till Object
  mainWindow->AddObject(topText);
  /*
  mainwindow->addobject(freeradiobutton);
  mainwindow->addobject(); ///och direct här!
  */
  mainWindow->AddObject(image);
  mainWindow->AddObject(radio);
  mainWindow->AddObject(check);
  mainWindow->AddObject(static_cast<ZControlBase*>(greenPanel));
  mainWindow->AddObject(static_cast<ZControlBase*>(bluePanel));

  //Typecasta mainvindow och kör InitOGL
  InitOGL(argc, argv, static_cast<ControlBase*>(mainWindow));
  
  //Delete stuff mabe??
  
	
	return 0;
}

