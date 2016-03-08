#include "stdafx.h"
#include "Label.h"
#include "Graphix.h"

Label::Label()
{
	Label("");
}

Label::Label(const Label & other)
{
	this->text = other.text;
	this->X = other.X;
	this->Y = other.Y;
	//this->color.setColor(other.color.getColor().r, other.color.getColor().g, other.color.getColor().b);
	this->color = other.color;
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
	color.setColor(red, green, blue);
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
	color.setColor(red, green, blue);
}

void Label::OnPaint()
{
	SetColor(color.getColor().r, color.getColor().g, color.getColor().b);
	DrawString(text, X, Y);
}