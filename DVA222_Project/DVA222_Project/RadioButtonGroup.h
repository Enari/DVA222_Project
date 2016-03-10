#pragma once
#include "SelectorGroup.h"
#include "RadioButton.h"

class RadioButtonGroup :
  public SelectorGroup
{
public:
  RadioButtonGroup(string title, int x, int y, int w);
  RadioButtonGroup(string title, Color& titleColor, Color boarderColor, int x, int y, int w);
  ~RadioButtonGroup();

  //Overloads of Eventhandelsers
  virtual void OnLoaded(); //To check if any of the radiobuttons is checked we we get them
  void OnMouseUp(int button, int x, int y); //Make sure there can only be one checked radiobutton
private:
  RadioButton* theCheckeckedRadioButton;
};

