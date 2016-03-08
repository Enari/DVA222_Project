#pragma once
#include "ControlBase.h"
#include "Label.h"

class Selector :
  public ControlBase
{
public:
  Selector();
  ~Selector();
  void SetText();
  char* GetText();
  void SetColor();
  int GetColor();
private:
  Label text;
  int color;
  bool status;

};

