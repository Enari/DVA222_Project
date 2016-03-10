#include "stdafx.h"
#include "Label.h"
#include "Graphix.h"

Label::Label() : Label ("")
{
}

Label::Label(const Label & other)
{
	this->text = other.text;
	this->X = other.X;
	this->Y = other.Y;
	//this->color.setColor(other.color.getColor().r, other.color.getColor().g, other.color.getColor().b);
	this->color = new Color(*other.color);
}

Label::Label(string text) : Label(text, 0, 0, 0, 0, 0)
{
}

Label::Label(string text, int x, int y) : Label(text, x, y, 0, 0, 0)
{
}

Label::Label(string text, int x, int y, int red, int green, int blue)
{
	this->text = text;
	this->X = x;
	this->Y = y;
	color = new Color(red, green, blue);
	SetColor(red, green, blue);
}

Label::~Label()
{
	delete color;
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

void Label::SetTextColor(int red, int green, int blue)
{
	color->SetColor(red, green, blue);
}

void Label::SetTextColor(Color color)
{
	this->color = new Color(color);
}

void Label::OnPaint()
{
	SetColor(color->GetColor().r, color->GetColor().g, color->GetColor().b);
	//SetColor(color->getColor().r, color->getColor().g, color->getColor().b);
	DrawString(text, X, Y);
}