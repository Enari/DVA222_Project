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
  virtual void OnMouseDown(int button, int x, int y);
  virtual void OnMouseUp(int button, int x, int y);
  virtual void OnMouseMove(int button, int x, int y);

private:
  Color* backgroundColor;
};

