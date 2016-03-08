#include "stdafx.h"
#include "Label.h"
#include "Graphix.h"

Label::Label(const Label & other)
{
	this->text = other.text;
	this->X = other.X;
	this->Y = other.Y;
	this->red = other.red;
	this->green = other.green;
	this->blue = other.blue;
}

Label::Label(string text)
{
	Label(text, 0, 0, 0, 0, 0);
}

Label::Label(string text, int x, int y)
{
	Label(text, x, y, 0, 0, 0);
}

Label::Label(string text, int x, int y, int red, int green, int blue)
{
	this->text = text;
	this->X = x;
	this->Y = y;
	this->red = red;
	this->green = green;
	this->blue = blue;
}

Label::~Label()
{

}

void Label::SetText(string text)
{
	this->text = text;
}

string Label::GetText()
{
	return text;
}

void Label::SetColor(int red, int green, int blue)
{
	this->red = red;
	this->green = green;
	this->blue = blue;
}

void Label::OnPaint()
{
	SetColor(red, green, blue);
	DrawString(text, X, Y);
}