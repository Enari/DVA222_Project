/*
Buttons are clickable controls. 
Upon clicking a button there should be visual feedback that the button is clicked. 
They should support interactions with the mouse such as hovering.
Size, position, text, and other properties of the button should be changeable through get/set functions.
*/
#pragma once
#include "ZControlBase.h"
#include "Label.h"
#include "Color.h"
#include "Graphix.h"

class Button :
  public ZControlBase
{
private:
	string text;
  bool hit;
  bool pressed;
public:
  Button();
  Button(string buttonText, Color& textColor, Color& buttonColor, int posX, int posY, int width, int height);
  Button(string buttonText, int posX, int posY, int width, int height);
  ~Button();
  void SetTextColor(Color &color);
  void GetTextColor(Color &color);
  void SetButtonColor(Color &color);
  void GetButtonColor(Color &color);
  void OnPaint();
  void OnLoaded();  
  void OnMouseMove(int button, int x, int y);
  void OnMouseDown(int button, int x, int y);
  void OnMouseUp(int button, int x, int y);
};

