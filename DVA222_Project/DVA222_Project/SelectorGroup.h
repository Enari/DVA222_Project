#pragma once
#include "ControlBase.h"
#include "Label.h"

class SelectorGroup :
  public ControlBase
{
public:
  SelectorGroup(Label label);
  ~SelectorGroup();
private:
  Label* title;
  //Boarder????? Acecceble via set/get functions
};

