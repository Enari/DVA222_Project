#include "stdafx.h"
#include "Window.h"

Window::Window()
{
}

Window::Window(const Window & other)
{
}

Window::Window(string title, int x, int y, int w, int h)
  : Window(title, Color(0,0,0), Color(0,0,0), Color(64,64,64), x, y, w, h)
{
}

Window::Window(string title, Color & titleColor, Color& borderColor, Color& backgroundColor, int x, int y, int w, int h)
  : ElementGroup(title, titleColor, borderColor, x, y, w, h)
{
  this->backgroundColor = new Color(backgroundColor);
  hit = pressed = false;
  mousePressedPosX = mousePressedPosY = 0;
}

Window::~Window()
{
  delete backgroundColor;
}

Color Window::GetBackgroudColor()
{
  return *backgroundColor;
}

void Window::SetBackgroundColor(Color & newColor)
{
  backgroundColor = &newColor;
}

void Window::OnPaint()
{

  //Overriding ElementGroup::OnPaint()

  //Draw the background
  SetColor(backgroundColor->GetColor().r, backgroundColor->GetColor().g, backgroundColor->GetColor().b);
  FillRectangle(X, Y, Width, Height);

  //Draw the border
  SetColor(boarderColor->GetColor().r, boarderColor->GetColor().g, boarderColor->GetColor().b);
  DrawRectangle(X, Y, Width, Height);

  //Draw the header
  SetColor(60, 160, 205);
  FillRectangle(X, Y, Width, 25);

  //Draw headerboarder
  SetColor(0, 0, 0);
  DrawRectangle(X, Y, Width, 25);

  //Draw the title
  title->OnPaint();

  Container::OnPaint();
}

void Window::OnMouseDown(int button, int x, int y)
{
  if (hit && button == MOUSE_LEFT)
  {
    pressed = true;
    mousePressedPosX = x;
    mousePressedPosY = y;
    PressedPosX = X;
    PressedPosY = Y;
    //Saving positioner of all objects contained by the window respectively
    title->SetPressedPosX();
    title->SetPressedPosY();
    for each (auto& object in objects)
    {
      object->SetPressedPosX();
      object->SetPressedPosY();
    }
  }

  ElementGroup::OnMouseDown(button, x, y);
}

void Window::OnMouseUp(int button, int x, int y)
{
  pressed = false;
  ElementGroup::OnMouseUp(button, x, y);
}

void Window::OnMouseMove(int button, int x, int y)
{
  if (x > X && x < X + Width && y > Y && y < Y + 25)
  {
    hit = true;
  }
  else
  {
    pressed = hit = false;
  }
  if (hit && pressed) {
    X = PressedPosX + (x - mousePressedPosX);
    Y = PressedPosY + (y - mousePressedPosY);
    //Moving all objects in the window
    title->SetX(title->GetPressedPosX() + (x - mousePressedPosX));
    title->SetY(title->GetPressedPosY() + (y - mousePressedPosY));
    for each (auto& object in objects)
    {
      //object->SetX(object->GetPressedPosX() + (x - mousePressedPosX));
      //object->SetY(object->GetPressedPosY() + (y - mousePressedPosY));
      object->UpdatePosition(x - mousePressedPosX, y - mousePressedPosY);
    }
  }
  ElementGroup::OnMouseMove(button, x, y);
}
