#pragma once
#include "ElementGroup.h"

class SelectorGroup 
  : public ElementGroup
{
public:
  SelectorGroup();
  SelectorGroup(string title, int x, int y, int w);
  SelectorGroup(string title, Color& titleColor, Color boarderColor, int x, int y, int w);
  ~SelectorGroup();

  virtual void OnLoaded();
};

