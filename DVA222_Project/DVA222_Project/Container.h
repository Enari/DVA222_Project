#pragma once
#include "ControlBase.h"
#include <vector>

class Container :
  public ControlBase
{
public:
  Container(int y, int x, int w, int h);
  Container(int y, int x, int w, int h, int z);
  ~Container();
private:
  vector<ControlBase>* objects;
  int Z;
};

