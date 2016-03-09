#pragma once
#include "SelectorGroup.h"

class RadioButtonGroup :
  public SelectorGroup
{
public:
  RadioButtonGroup(int x, int y, int w, int h, string title);
  RadioButtonGroup(const RadioButtonGroup& other);
  ~RadioButtonGroup();
  void OnMouseUp(int button, int x, int y);
private:
  ZControlBase* TheCheckeckedRadioButton;
};

