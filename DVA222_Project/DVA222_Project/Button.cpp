#include "stdafx.h"
#include "Button.h"


Button::Button()
{
	hit = pressed = false;
}

Button::Button(const Button & other)
{
	this->backgroundColor = other.backgroundColor;
	this->hit = other.hit;
	this->pressed = other.pressed;
}

Button::Button(string buttonText, Color& textColor, Color& buttonColor, int posX, int posY, int width, int height)
	: ClickableItems(buttonText, textColor, posX, posY, width, height)
{
	hit = pressed = false;
	backgroundColor = buttonColor;
}

Button::Button(string buttonText, int posX, int posY, int width, int height)
	: ClickableItems(buttonText, Color(0,0,0), posX, posY, width, height)
{
}

Button::~Button()
{
}

void Button::SetButtonColor(Color & color)
{
	backgroundColor = color;
}

Color Button::GetButtonColor(Color & color)
{
	return backgroundColor;
}

void Button::OnPaint()
{
	SetColor((backgroundColor.GetColor().r), (backgroundColor.GetColor().g), (backgroundColor.GetColor().b));
	if (pressed)
	{
		SetColor(128, 128, 128);
		FillRectangle(X+3, Y+3, Width, Height);
	}
	else if (hit)
	{
		FillRectangle(X, Y, Width, Height);
		DrawRectangle(X - 1, Y - 1, Width + 2, Height + 2);
	}
	else
	{
		FillRectangle(X, Y, Width, Height);
	}
  ClickableItems::OnPaint();
}

//void Button::OnMouseMove(int button, int x, int y)
//{
//	if (x > X && x < X + Width && y>Y && y < Y + Height)
//	{
//		hit = true;
//	}
//	else
//	{
//		pressed = hit = false;
//	}
//}
//
//void Button::OnMouseDown(int button, int x, int y)
//{
//	if (hit && button==MOUSE_LEFT)
//	{
//		pressed = true;
//	}
//}
//
//void Button::OnMouseUp(int button, int x, int y)
//{
//	pressed = false;
//}
