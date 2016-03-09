#pragma once
#include "Container.h"

class Panel :
  public Container
{
public:
  Panel(int x, int y, int w, int h);
  Panel(const Panel& other);
  ~Panel();
  Color GetBackgroudColor();
  void SetBackgroundColor(Color &newColor);
private:
  Color* backgroundColor;
};

