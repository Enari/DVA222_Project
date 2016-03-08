#pragma once
#include "Panel.h"
#include <string>

class Window :
  public Panel
{
public:
  Window();
  ~Window();
private:
  string title;
  Color bordercolor;
};

