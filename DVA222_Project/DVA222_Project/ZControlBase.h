#pragma once
#include "ControlBase.h"
class ZControlBase :
  public ControlBase
{
public:
  ZControlBase();
  ZControlBase(int z);
  ~ZControlBase();
private:
  int Z;
};
