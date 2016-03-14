#include "stdafx.h"
#include "Panel.h"
#include "Graphix.h"


Panel::Panel(int x, int y, int w, int h, Color& color, int z)
  :Container(x, y, w, h, z)
{
  backgroundColor = new Color(color);
}

Panel::Panel(const Panel& other)
{
  backgroundColor = new Color(*other.backgroundColor);
}


Panel::~Panel()
{}

Color Panel::GetBackgroudColor()
{
  return Color(*backgroundColor);
}

void Panel::SetBackgroundColor(Color& newColor)
{
  delete backgroundColor;
  backgroundColor = new Color(newColor);
}

void Panel::OnPaint()
{
  SetColor(backgroundColor->GetColor().r, backgroundColor->GetColor().g, backgroundColor->GetColor().b);
  FillRectangle(X, Y, Width, Height);
  Container::OnPaint();
}


void Panel::OnMouseDown(int button, int x, int y)
{

  for each (auto& object in objects)
  {
    object->OnMouseDown(button, x, y);
  }
  Container::OnMouseDown(button, x, y);
}

void Panel::OnMouseUp(int button, int x, int y)
{
  for each (auto& object in objects)
  {
    object->OnMouseUp(button, x, y);
  }
  Container::OnMouseUp(button, x, y);
}

void Panel::OnMouseMove(int button, int x, int y)
{
  for each (auto& object in objects)
  {
    object->OnMouseMove(button, x, y);
  }
  Container::OnMouseMove(button, x, y);
}

