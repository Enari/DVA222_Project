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
  return Color(*backgroundColor);
}

void Window::SetBackgroundColor(Color & newColor)
{
  delete backgroundColor;
  backgroundColor = new Color(newColor);
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
    SetPressedPosX();
    SetPressedPosY();

    //Save position of inherited title object
    title->SetPressedPosX();
    title->SetPressedPosY();

    //Saving positioner of all objects contained by the window respectively
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
  //Mouse release, window is not pressed
  pressed = false;

  ElementGroup::OnMouseUp(button, x, y);
}

void Window::OnMouseMove(int button, int x, int y)
{
  //Hit is true if mouse is on window top bar
  if (x > X && x < X + Width && y > Y && y < Y + 25)
  {
    hit = true;
  }
  else
  {
    hit = false;
  }

  if (pressed) {
    //Prohibits window from going out at top and left.
    //On top because it can get unreachable. Left because text disappears when its x is < 0.
    if (GetPressedPosY() + (y - mousePressedPosY) > 0 && 
      GetPressedPosX() + (x - mousePressedPosX) > 0)
    {
      X = GetPressedPosX() + (x - mousePressedPosX);
      Y = GetPressedPosY() + (y - mousePressedPosY);
      //Moving inherited title object
      title->SetX(title->GetPressedPosX() + (x - mousePressedPosX));
      title->SetY(title->GetPressedPosY() + (y - mousePressedPosY));
    }
  }
  ElementGroup::OnMouseMove(button, x, y);
}
