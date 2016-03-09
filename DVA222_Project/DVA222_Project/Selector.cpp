#include "stdafx.h"
#include "Selector.h"

//Construktorerna kan inte kalla på varandra........!!!!!
Selector::Selector()
  : Selector("")
{
  
}

Selector::Selector(string text)
  : Selector(text, 0, 0)
{
}


Selector::Selector(string text, int x, int y)
  : Selector(text, x, y, Color(0, 0, 0))
{
}

Selector::Selector(string text, int x, int y, Color& color)
{
  X = x;
  Y = y;
  hit = pressed = false;
  this->text = new Label(text, (x + 100), y, color.GetColor().r, color.GetColor().g, color.GetColor().b);
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

Selector::~Selector()
{
  delete text;
}

void Selector::SetText()
{
}

string Selector::GetText()
{
  return text->GetText();
}

void Selector::SetColor(Color& newColor)
{
}

//Color Selector::GetColor()
//{
//  return Color();
//}

void Selector::OnMouseMove(int button, int x, int y)
{
}

void Selector::OnPaint()
{
  text->OnPaint();
}

void Selector::OnLoaded()
{

}

void Selector::OnMouseDown(int button, int x, int y)
{
}

void Selector::OnMouseUp(int button, int x, int y)
{
}
