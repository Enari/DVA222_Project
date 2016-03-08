#pragma once
#include "SelectorGroup.h"

class CheckboxGroup :
  public SelectorGroup
{
public:
  CheckboxGroup(int x, int y, int w, int h, Label label);
  ~CheckboxGroup();
};

