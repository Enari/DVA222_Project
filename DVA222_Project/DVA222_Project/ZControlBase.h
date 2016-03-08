#pragma once
#include "ControlBase.h"

class ZControlBase :
  public ControlBase
{
public:
  ZControlBase();
  ZControlBase(int z);
  ~ZControlBase();
  int getZ();
private:
  //Lower Z values represent objects which are more to the front.
  int Z;
};

