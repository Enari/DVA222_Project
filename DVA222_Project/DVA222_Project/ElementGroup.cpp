#include "stdafx.h"
#include "ElementGroup.h"


ElementGroup::ElementGroup()
{}

ElementGroup::ElementGroup(string title,int x, int y, int w, int h)
  :ElementGroup(title, Color(0, 0, 0), Color(0, 0, 0), x, y, w, h)
{
	this->title = new Label(title);
}

ElementGroup::ElementGroup(string title, Color & titleColor, Color boarderColor, int x, int y, int w, int h)
  : Container(x, y, w, h)
{
  this->title = new Label(title, titleColor);
  this->boarderColor = new Color(boarderColor);
}

ElementGroup::ElementGroup(const ElementGroup & other)
{}


ElementGroup::~ElementGroup()
{
  delete title;
  delete boarderColor;
}

void ElementGroup::OnLoaded()
{
  title->SetPosition(X + 10, Y+12);
}

void ElementGroup::OnPaint()
{
  //Draw the boarder
  SetColor(boarderColor->GetColor().r, boarderColor->GetColor().g, boarderColor->GetColor().b);
  DrawRectangle(X, Y, Width, Height);

  //Draw the header
  SetColor(100, 200, 255);
  FillRectangle(X, Y, Width, 15);

  //Dwar headerboarder
  SetColor(0, 0, 0);
  DrawRectangle(X, Y, Width, 15);
  
  //Draw the title
  title->OnPaint();

  Container::OnPaint();
}
