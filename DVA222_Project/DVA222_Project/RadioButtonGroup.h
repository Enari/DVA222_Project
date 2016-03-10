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
  void OnMouseUp(int button, int x, int y);
private:
  RadioButton* TheCheckeckedRadioButton;
};

