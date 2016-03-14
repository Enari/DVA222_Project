#include "stdafx.h"
#include "Color.h"


Color::Color()
{
  r = 255;
  g = 255;
  b = 255;
}

Color::Color(int red, int green, int blue)
{
  //If all values are valid, use them. Otherwise use white.
  if (red >= 0 && red <= 255 &&
    green >= 0 && green <= 255 &&
    blue >= 0 && blue <= 255)
  {
    r = red;
    g = green;
    b = blue;
  }
  else 
  {
    r = 255;
    g = 255;
    b = 255;
  }
}

Color::Color(const Color & other)
{
	this->r = other.r;
	this->g = other.g;
	this->b = other.b;
}

Color::~Color()
{}

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

void Color::operator=(const Color & color)
{
	this->r = color.r;
	this->g = color.g;
	this->b = color.b;
}
