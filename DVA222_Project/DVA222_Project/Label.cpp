#include "stdafx.h"
#include "Label.h"

Label::Label()
  : Label ("")
{}

Label::Label(string text)
  : Label(text, 0, 0, 0, 0, 0)
{}

Label::Label(string text, int x, int y)
  : Label(text, Color(0, 0, 0), x, y)
{}

Label::Label(string text, int x, int y, int red, int green, int blue)
  : Label(text, Color(red, green, blue), x, y)
{}

Label::Label(string text, Color & color)
  :Label(text, color, 0, 0)
{}

Label::Label(string text, Color& color, int x, int y)
  : ZControlBase(x, y)
{
  this->text = text;
  this->color = new Color(color);
}

Label::Label(const Label & other)
{
  this->text = other.text;
  this->color = new Color(*other.color);
}

Label::~Label()
{
	delete color;
}

void Label::operator=(const Label & other)
{
	this->X = other.X;
	this->Y = other.Y;
	this->color = other.color;
	this->text = other.text;
	
}

void Label::SetText(string text)
{
	this->text = text;
}

string Label::GetText()
{
	return text;
}

Color Label::GetTextColor()
{
	return *color;
}

void Label::SetTextColor(Color& color)
{
  this->color = new Color(color);
}

void Label::SetTextColor(int red, int green, int blue)
{
	color->SetColor(red, green, blue);
}

void Label::SetPosition(int x, int y)
{
  this->X = x;
  this->Y = y;
}
void Label::OnPaint()
{
	SetColor(color->GetColor().r, color->GetColor().g, color->GetColor().b);
	DrawString(text, X, Y);
}
