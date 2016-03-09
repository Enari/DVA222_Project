#include "stdafx.h"
#include "Selector.h"

//temp
#include <iostream>

//Construktorerna kan inte kalla på varandra........!!!!!
Selector::Selector()
  : Selector("")
{}

Selector::Selector(string text)
  : Selector(text, 0, 0)
{}


Selector::Selector(string text, int x, int y)
  : Selector(text, Color(0, 0, 0), x, y)
{}

Selector::Selector(string text, Color& color, int x, int y)
{
  X = x;
  Y = y;
  hit = pressed = false;
  this->text = new Label(text, (x + 18), (y+13), color.GetColor().r, color.GetColor().g, color.GetColor().b);
}

Selector::Selector(Selector & other)
{
  normal = other.normal;
  hover = other.hover;
  checked = other.checked;
  text = other.text;
  hit = other.hit;
  pressed = other.pressed;
}

//Done
Selector::~Selector()
{
  delete text;
}

//Done
void Selector::SetText(string text)
{
  this->text->SetText(text);
}

//Done
string Selector::GetText()
{
  return text->GetText();
}

//Done
void Selector::SetTextColor(Color& newColor)
{
  this->text->SetTextColor(newColor.GetColor().r, newColor.GetColor().g, newColor.GetColor().b);
}

//NOPE FIX ME PLEASE!
Color Selector::GetTextColor()
{
  //return text->GetTextColor();
  return Color();
}

//Done
bool Selector::GetStatus()
{
  return pressed;
}

//Done
void Selector::SetStatus(bool newStatus)
{
  pressed = newStatus;
}

//Done
void Selector::OnPaint()
{
  if(pressed == true)
  {
    checked->OnPaint();
  }
  else if(hit == true)
  {
    hover->OnPaint();
  }
  else
  {
    normal->OnPaint();
  }
  text->OnPaint();
}


void Selector::OnMouseDown(int button, int x, int y)
{
  //kollar om musen är inuti selectorn
  if(x > X && x < X + 16 && y > Y && y < Y + 16)
  {
    std::cout << "Stop hitting me!!" << std::endl;
    pressed = !pressed;
  }
}
  void Selector::OnMouseMove(int button, int x, int y)
  {
    //kollar om musen är inuti selectorn
    if(x > X && x < X + 16 && y > Y && y < Y + 16)
    {
      hit = true;
    }
    else
    {
      hit = false;
    }
}
