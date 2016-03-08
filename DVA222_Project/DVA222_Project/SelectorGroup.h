#pragma once
#include "Container.h"

class SelectorGroup :
  public Container
{
public:
  SelectorGroup(int x, int y, int w, int h, Label label);
  ~SelectorGroup();
private:
  Label* title;
  //Boarder????? Acecceble via set/get functions
};

