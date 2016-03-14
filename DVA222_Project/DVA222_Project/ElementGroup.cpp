#include "stdafx.h"
#include "ElementGroup.h"


ElementGroup::ElementGroup()
{}

ElementGroup::ElementGroup(string title, int x, int y, int w, int h)
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
{
	this->title = other.title;
	this->boarderColor = other.boarderColor;
}


ElementGroup::~ElementGroup()
{
  delete title;
  delete boarderColor;
}

void ElementGroup::SetTitle(string title)
{
	this->title->SetText(title);
}

string ElementGroup::GetTitle()
{
	return title->GetText();
}

void ElementGroup::SetBoarderColor(Color & color)
{
	boarderColor->SetColor(color);
}

Color ElementGroup::GetBoarderColor()
{
	return Color(*boarderColor);
}

void ElementGroup::OnLoaded()
{
  title->SetPosition(X + 10, Y + 12);
  Container::OnLoaded();
}

void ElementGroup::OnPaint()
{

  title->SetPosition(X + 10, Y + 12);
  //Draw the boarder
  SetColor(boarderColor->GetColor().r, boarderColor->GetColor().g, boarderColor->GetColor().b);
  DrawRectangle(X, Y, Width, Height);

  //Draw the header
  SetColor(100, 200, 255);
  FillRectangle(X, Y, Width, 15);

  //Draw headerboarder
  SetColor(0, 0, 0);
  DrawRectangle(X, Y, Width, 15);

  //Draw the title
  title->OnPaint();

  Container::OnPaint();
}
void ElementGroup::OnMouseMove(int button, int x, int y)
{
  for each (auto& object in objects)
  {
    object->OnMouseMove(button, x, y);
  }
  Container::OnMouseMove(button, x, y);
}

void ElementGroup::OnKeyboard(unsigned char key, int x, int y)
{
  for each (auto& object in objects)
  {
    object->OnKeyboard(key, x, y);
  }
  Container::OnKeyboard(key, x, y);
}

void ElementGroup::OnMouseDown(int button, int x, int y)
{
  for each (auto& object in objects)
  {
    object->OnMouseDown(button, x, y);
  }
  Container::OnMouseDown(button, x, y);
}

void ElementGroup::OnMouseUp(int button, int x, int y)
{
  for each (auto& object in objects)
  {
    object->OnMouseUp(button, x, y);
  }
  Container::OnMouseUp(button, x, y);
}