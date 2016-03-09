#pragma once
#include "SelectorGroup.h"

class RadioButtonGroup :
  public SelectorGroup
{
public:
  RadioButtonGroup(int x, int y, int w, int h, Label label);
  ~RadioButtonGroup();
  void OnPaint(); 
private:
  ZControlBase* TheCheckeckedRadioButton;
};

