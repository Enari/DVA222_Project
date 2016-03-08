#pragma once
#include "ZControlBase.h"
#include <vector>
#include "Label.h"
#include "Color.h"

class Container :
  public ZControlBase
{
public:
  Container(int y, int x, int w, int h);
  Container(int y, int x, int w, int h, int z);
  ~Container();
  void onPaint();
  void addObject();
private:
  vector<ZControlBase> objects;
};

