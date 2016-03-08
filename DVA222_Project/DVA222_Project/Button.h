/*
Buttons are clickable controls. 
Upon clicking a button there should be visual feedback that the button is clicked. 
They should support interactions with the mouse such as hovering.
Size, position, text, and other properties of the button should be changeable through get/set functions.
*/
#pragma once
#include "ControlBase.h"
#include "Label.h"

class Button :
  public ControlBase
{
public:
  Button();
  ~Button();
private:
  Label text;

};

