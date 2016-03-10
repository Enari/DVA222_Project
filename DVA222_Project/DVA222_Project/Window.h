#pragma once
#include "Panel.h"
#include "ElementGroup.h"

class Window 
  :  public ElementGroup
{
public:
  Window();
  Window(const Window& other);
  ~Window();

  Color GetBackgroudColor();
  void SetBackgroundColor(Color &newColor);
  
  void OnPaint();
  virtual void OnMouseDown(int button, int x, int y);
  virtual void OnMouseUp(int button, int x, int y);
  virtual void OnMouseMove(int button, int x, int y);

private:
  Color* backgroundColor;
};

