/*
Buttons are clickable controls. 
Upon clicking a button there should be visual feedback that the button is clicked. 
They should support interactions with the mouse such as hovering.
Size, position, text, and other properties of the button should be changeable through get/set functions.
*/
#pragma once
#include "ZControlBase.h"
#include "Label.h"

class Button :
  public ZControlBase
{
private:
	Label* text;
public:
  Button(Label label);
  ~Button();
  void onPaint();
  void onLoaded();  
  void OnMouseMove(int button, int x, int y);
  void OnMouseDown(int button, int x, int y);
  void OnMouseUp(int button, int x, int y);
};

