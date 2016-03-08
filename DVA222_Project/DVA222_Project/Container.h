#pragma once
#include "ZControlBase.h"
#include <vector>

class Container :
  public ZControlBase
{
public:
  Container(int y, int x, int w, int h);
  Container(int y, int x, int w, int h, int z);
  void onPaint();
  ~Container();
private:
  vector<ControlBase> objects;
};

