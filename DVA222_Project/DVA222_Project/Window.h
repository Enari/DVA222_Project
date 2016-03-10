#pragma once
#include "ElementGroup.h"

class Window 
  :  public ElementGroup
{
public:
  Window();
  Window(const Window& other);
  Window(string title, int x, int y, int w, int h);
  Window(string title, Color& titleColor, Color& borderColor, Color& backgroundColor, int x, int y, int w, int h);
  ~Window();

  Color GetBackgroudColor();
  void SetBackgroundColor(Color &newColor);
  
  void OnPaint();
  virtual void OnMouseDown(int button, int x, int y);
  virtual void OnMouseUp(int button, int x, int y);
  virtual void OnMouseMove(int button, int x, int y);

private:
  Color* backgroundColor;
  bool pressed;
  bool hit;
  int mousePressedPosX, mousePressedPosY;
  int PressedPosX, PressedPosY;
};

