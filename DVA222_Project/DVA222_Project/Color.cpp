#include "stdafx.h"
#include "Color.h"

Color::Color(int red, int green, int blue)
{
	r = red;
	g = green;
	b = blue;
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