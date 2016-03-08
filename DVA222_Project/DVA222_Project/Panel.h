#pragma once
#include "Container.h"

class Panel :
  public Container
{
public:
  Panel(int x, int y, int w, int h);
  ~Panel();
  Color GetBackgroudColor();
  void SetBackgroundColor(Color newcolor);
private:
  Color backgroundColor;
};

