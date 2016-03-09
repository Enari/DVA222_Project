#pragma once
#include "Panel.h"

class Window :
  public Panel
{
public:
  Window();
  Window(const Window& other);
  void SetTitle(string title);
  string GetTitle();
  ~Window();
private:
  string title;
  Color* bordercolor;
};

