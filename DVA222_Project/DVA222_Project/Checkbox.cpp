#include "stdafx.h"
#include "Checkbox.h"

Checkbox::Checkbox()
  : Checkbox("")
{}

Checkbox::Checkbox(string text)
  : Checkbox(text, 0, 0)
{}

Checkbox::Checkbox(string text, int x, int y)
  : Checkbox(text, Color(0, 0, 0), x, y)
{}

Checkbox::Checkbox(string text, Color & textColor, int x, int y)
  : Selector(text, textColor, x, y)
{}

Checkbox::Checkbox(const Checkbox & other)
{}

Checkbox::~Checkbox()
{
  delete normal;
  delete hover;
  delete checked;
}

void Checkbox::OnLoaded()
{
  normal = new ImageBox("checkNorm.bmp", X, Y);
  normal->OnLoaded();  
  hover = new ImageBox("checkHover.bmp", X, Y);
  hover->OnLoaded();
  checked = new ImageBox("checkChecked.bmp", X, Y);
  checked->OnLoaded();
}