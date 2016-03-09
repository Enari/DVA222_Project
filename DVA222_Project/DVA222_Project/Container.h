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
  Container(const Container& other);
  ~Container();
  void OnPaint(); //sort the objects in Z order and calls their OnPrint()
  virtual void AddObject(ZControlBase &object);
private:
  vector<ZControlBase> objects;
};

