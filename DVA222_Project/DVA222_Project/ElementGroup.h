#pragma once
#include "Container.h"

#include <string>

class ElementGroup :
  public Container
{
public:
  ElementGroup();
  ElementGroup(string title, int x, int y, int w, int h);
  ElementGroup(string title, Color& titleColor, Color boarderColor, int x, int y, int w, int h);
  ElementGroup(const ElementGroup& other);
  ~ElementGroup();

  //Set&Get's
  void SetTitle(string title);
  string GetTitle();
  void SetBoarderColor(Color& color);
  Color GetBoarderColor();

  //Overloading stuff... 
  virtual void OnLoaded();
  virtual void OnPaint(); //För att rita boardern
  virtual void OnKeyboard(unsigned char key, int x, int y);
  virtual void OnMouseDown(int button, int x, int y);
  virtual void OnMouseUp(int button, int x, int y);
  virtual void OnMouseMove(int button, int x, int y);

protected:
  Label* title;
  Color* boarderColor;
};

