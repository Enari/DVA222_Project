#pragma once
#include "Container.h"

#include <string>

class ElementGroup :
  public Container
{
public:
  ElementGroup(int x, int y, int w, int h, string title);
  ElementGroup(const ElementGroup& other);
  ~ElementGroup();

  void SetTitle(string title);
  string GetTitle();

  void SetBoarderColor(Color& color);
  Color GetBoarderColor();

  void OnPaint(); //För att rita boardern

private:
  Label* title;
  Color* boarderColor;
};

