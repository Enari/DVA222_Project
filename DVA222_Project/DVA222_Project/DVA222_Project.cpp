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
  
  //Create Content
  ZControlBase* topText = new Label("I am a Label. Actually all the text that you see down there are Labels contained in the Panels. My text has a different color", 30, 30, 0, 0, 255);
  ZControlBase* image = new ImageBox("DaloGoatBig.bmp", 30, 400);
  ZControlBase* freeRadioButton = new RadioButton("I am a free RadioButton. This Window is my container", 50, 300);
  ZControlBase* freeCheckbox = new Checkbox("I am a free CheckBox.", 50, 330);

  //Create pannels
  Panel* greenPanel = new Panel(400, 300, 370, 200, Color(0, 255, 110));
  greenPanel->AddObject(new Label("I am also a Panel. as you can see...", 30, 30, 0, 0, 0));
  greenPanel->AddObject(new Checkbox("I am a Captured CheckBox.", 30, 50));

  Panel* bluePanel = new Panel(250, 400, 370, 170, Color(0, 200, 255));
  bluePanel->AddObject(new Label("I am a Panel. I can contain stuff...", 30, 30, 0, 0, 0));
  bluePanel->AddObject(new Button("Hello, i am a button", Color(0, 0, 0), Color(255, 255, 100), 30, 100, 320, 30));

  //Test ElementGroup
  ElementGroup* test = new ElementGroup("Testing ElementGroup", 30, 50, 370, 200);
  
  //Lägg till Object
  mainWindow->AddObject(topText);
  mainWindow->AddObject(image);
  mainWindow->AddObject(freeRadioButton);
  mainWindow->AddObject(freeCheckbox);
  mainWindow->AddObject(static_cast<ZControlBase*>(greenPanel));
  mainWindow->AddObject(static_cast<ZControlBase*>(bluePanel));
  mainWindow->AddObject(static_cast<ZControlBase*>(test));

  //Typecasta mainvindow och kör InitOGL
  InitOGL(argc, argv, static_cast<ControlBase*>(mainWindow));
  
  //Delete stuff mabe??
  
	
	return 0;
}

