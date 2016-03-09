#pragma once
#include "Selector.h"
#include <string>

class Checkbox :
  public Selector
{
public:
  Checkbox();
  Checkbox(string text);
  Checkbox(string text, int x, int y);
  Checkbox(string text, Color& textColor, int x, int y);
  Checkbox(const Checkbox& other);
  ~Checkbox();
  void OnLoaded();
};

