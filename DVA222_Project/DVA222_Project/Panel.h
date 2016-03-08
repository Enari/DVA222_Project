#pragma once
#include "Container.h"
class Panel :
  public Container
{
public:
  Panel();
  ~Panel();
  Color GetBackgroudColor();
  void SetBackgroundColor(Color newcolor);
private:
  Color backgroundColor;
};

