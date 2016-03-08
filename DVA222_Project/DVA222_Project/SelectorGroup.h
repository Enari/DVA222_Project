#pragma once
#include "Container.h"
#include "Label.h"

class SelectorGroup :
  public Container
{
public:
  SelectorGroup(Label label);
  ~SelectorGroup();
private:
  Label* title;
  //Boarder????? Acecceble via set/get functions
};

