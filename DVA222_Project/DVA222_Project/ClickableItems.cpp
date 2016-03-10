#include "stdafx.h"
#include "ClickableItems.h"


ClickableItems::ClickableItems()
{}

ClickableItems::ClickableItems(string text)
{}

ClickableItems::ClickableItems(string text, int x, int y)
{}

ClickableItems::ClickableItems(string text, Color & color, int x, int y)
{}

ClickableItems::ClickableItems(string text, Color & color, int x, int y, int w, int h)
{}


ClickableItems::ClickableItems(ClickableItems & other)
{}

ClickableItems::~ClickableItems()
{}

//Done
void ClickableItems::SetText(string text)
{
  this->text->SetText(text);
}

//Done
string ClickableItems::GetText()
{
  return text->GetText();
}

//Done
void ClickableItems::SetTextColor(Color& newColor)
{
  this->text->SetTextColor(newColor.GetColor().r, newColor.GetColor().g, newColor.GetColor().b);
}

Color ClickableItems::GetTextColor()
{
  //return text->GetTextColor();
  return Color();
}

void ClickableItems::OnMouseDown(int button, int x, int y)
{}

void ClickableItems::OnMouseMove(int button, int x, int y)
{}

void ClickableItems::OnMouseUp(int button, int x, int y)
{}
