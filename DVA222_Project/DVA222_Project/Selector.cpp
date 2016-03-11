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
  : ClickableItems(text, color, x, y)
{}

Selector::Selector(Selector & other)
{
  normal = other.normal;
  hover = other.hover;
  checked = other.checked;
}

//Done
Selector::~Selector()
{
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
  checked->SetX(X);
  checked->SetY(Y);
  hover->SetX(X);
  hover->SetY(Y);
  normal->SetX(X);
  normal->SetY(Y);
  text->SetPosition(X + 20, Y + 14);//Plus 20 och 14 för att flytta label till bredvid en selector
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
  if(hit && button == MOUSE_LEFT)
  {
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

void Selector::OnMouseUp(int button, int x, int y)
{
	/*Måste overloada OnMouseUp, annars sätter Clickable items pressed == false varje gång
	man trycker på en radiobutton.*/
}
