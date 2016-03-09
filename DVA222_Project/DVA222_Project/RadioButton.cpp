#include "stdafx.h"
#include "RadioButton.h"

RadioButton::RadioButton()
  : RadioButton("")
{}

RadioButton::RadioButton(string text)
  : RadioButton(text, 0, 0)
{}

RadioButton::RadioButton(string text, int x, int y)
  : RadioButton(text, Color(0, 0, 0), x, y)
{}

RadioButton::RadioButton(string text, Color & textColor, int x, int y)
  : Selector(text, textColor, x, y)
{}

//What to do in this???
RadioButton::RadioButton(const RadioButton & other)
{}

RadioButton::~RadioButton()
{
  delete normal;
  delete hover;
  delete checked;
}

void RadioButton::OnLoaded()
{
  normal = new ImageBox("radioNorm.bmp", X, Y);
  normal->OnLoaded();
  hover = new ImageBox("radioHover.bmp", X, Y);
  hover->OnLoaded();
  checked = new ImageBox("radioChecked.bmp", X, Y);
  checked->OnLoaded();
}
