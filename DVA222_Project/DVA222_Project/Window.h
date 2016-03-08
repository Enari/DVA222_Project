#pragma once
#include "Panel.h"
#include "Color.h"
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

