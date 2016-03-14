#include "stdafx.h"
#include "Color.h"


Color::Color()
{
  r = 255;
  g = 255;
  b = 255;
}

void Color::operator=(Color & other)
{
	this->r = other.r;
	this->g = other.g;
	this->b = other.b;
}

Color::Color(int red, int green, int blue)
{
	r = red;
	g = green;
	b = blue;
}

Color::Color(const Color & other)
{
	this->r = other.r;
	this->g = other.g;
	this->b = other.b;
}

Color::~Color()
{}

void Color::SetColor(int r, int g, int b)
{
	this->r = r;
	this->g = g;
	this->b = b;
}

void Color::SetColor(Color & color)
{
  r = color.r;
  g = color.g;
  b = color.b;
}

Color::Values Color::GetColor()
{
	Values v;
	v.r = r;
	v.g = g;
	v.b = b;
	return v;
}