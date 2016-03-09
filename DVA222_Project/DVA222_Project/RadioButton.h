#pragma once
#include "Selector.h"

#include <string>

class RadioButton :
  public Selector
{
public:
  RadioButton();
  RadioButton(string text);
  RadioButton(string text, Color& textColor);
  RadioButton(string text, int x, int y);
  RadioButton(string text, Color& textColor, int x, int y);
  RadioButton(const RadioButton& other);
  ~RadioButton();
};

