#pragma once
#include "Container.h"

class Panel :
  public Container
{
public:
  Panel(int x, int y, int w, int h, Color& color, int z = 500);
  Panel(const Panel& other);
  ~Panel();
  Color GetBackgroudColor();
  void SetBackgroundColor(Color &newColor);
  void OnPaint();

private:
  Color* backgroundColor;
};

