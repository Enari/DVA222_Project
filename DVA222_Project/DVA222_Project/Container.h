#pragma once
#include "ZControlBase.h"
#include <vector>
#include "Label.h"
#include "Color.h"

class Container :
  public ZControlBase
{
public:
  Container();
  Container(int y, int x, int w, int h, int z=500);
  Container(const Container& other);
  ~Container();
  virtual void OnLoaded();
  virtual void OnPaint(); //sort the objects in Z order and calls their OnPrint()
  virtual void OnKeyboard(unsigned char key, int x, int y);
  virtual void OnMouseDown(int button, int x, int y);
  virtual void OnMouseUp(int button, int x, int y);
  virtual void OnMouseMove(int button, int x, int y);
  virtual void OnResize(int width, int height);
  virtual void AddObject(ZControlBase* object);
private:
  vector<ZControlBase*> objects;
};

