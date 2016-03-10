/*
Buttons are clickable controls. 
Upon clicking a button there should be visual feedback that the button is clicked. 
They should support interactions with the mouse such as hovering.
Size, position, text, and other properties of the button should be changeable through get/set functions.
*/
#pragma once
#include "ClickableItems.h"


class Button :
  public ClickableItems
{
private:
  Color backgroundColor;
  int buttonTextLength;
public:
  Button();
  Button(string buttonText, int posX, int posY, int width, int height);
  Button(string buttonText, Color& textColor, Color& buttonColor, int posX, int posY, int width, int height);
  Button(const Button& other);
  ~Button();

  void SetButtonColor(Color &color); //d
  Color GetButtonColor(Color &color); //d

  void OnLoaded();
  void OnPaint(); //d
};

