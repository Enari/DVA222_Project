#pragma once
#include "Selector.h"

class RadioButton :
  public Selector
{
public:
  RadioButton();
  RadioButton(string text);
  RadioButton(string text, int x, int y);
  RadioButton(string text, Color& textColor, int x, int y);
  RadioButton(const RadioButton& other);
  ~RadioButton();
  void OnLoaded();
};

