#pragma once
#include "ControlBase.h"

class Label:
  public ControlBase
{
public:
  Label();
  ~Label();
  void SetLabel();
  char* GetLabel();
  void GetColor();
  int SetColor();
private:
  char *text;
  //Typ? skapa en struct f�r color?
  int color;
};

