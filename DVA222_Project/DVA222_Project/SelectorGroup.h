#pragma once
#include "Container.h"

class SelectorGroup :
  public Container
{
public:
  SelectorGroup(int x, int y, int w, int h, Label label);
  ~SelectorGroup();
  virtual void OnPaint();
private:
  Label* Title;
  Color BoarderBolor;
  //Boarder????? Acecceble via set/get functions
};

