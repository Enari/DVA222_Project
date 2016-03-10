#pragma once
#include "SelectorGroup.h"

class CheckboxGroup :
  public SelectorGroup
{
public:
  CheckboxGroup(string title, int x, int y, int w);
  CheckboxGroup(string title, Color& titleColor, Color boarderColor, int x, int y, int w);
  ~CheckboxGroup();
};

