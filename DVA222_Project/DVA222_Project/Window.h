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
  bool pressed; // Whether object is pressed or not 
  bool hit; // Whether mouse is over the object or not
  bool mouseButtonDown; // Used to keep window movement on quick mouse moves
  int mousePressedPosX, mousePressedPosY; // Position on mouse when pressed to calculate delta mouse
  int pressedPosX, pressedPosY; // The window position when mouse is pressed
};

