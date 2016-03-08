#include "stdafx.h"
#include "Color.h"

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

void Color::setColor(int r, int g, int b)
{
}

Color::Values Color::getColor()
{
	Values v;
	v.r = r;
	v.g = g;
	v.b = b;
	return v;
}