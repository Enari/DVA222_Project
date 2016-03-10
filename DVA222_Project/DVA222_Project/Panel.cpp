#include "stdafx.h"
#include "Panel.h"
#include "Graphix.h"


Panel::Panel(int x, int y, int w, int h, Color& color, int z)
  :Container(x, y, w, h, z)
{
  backgroundColor = new Color(color);
}


Panel::~Panel()
{}

Color Panel::GetBackgroudColor()
{
  return *backgroundColor;
}

void Panel::SetBackgroundColor(Color& newColor)
{
  backgroundColor = &newColor;
}

void Panel::OnPaint()
{
  SetColor(backgroundColor->GetColor().r, backgroundColor->GetColor().g, backgroundColor->GetColor().b);
  FillRectangle(X, Y, Width, Height);
  Container::OnPaint();
}
