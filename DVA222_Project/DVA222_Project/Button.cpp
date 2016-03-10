#include "stdafx.h"
#include "Button.h"


Button::Button()
{
	hit = pressed = false;
}

Button::Button(const Button & other)
{
	this->text = other.text;
	this->tColor = other.tColor;
	this->backgroundColor = other.backgroundColor;
	this->hit = other.hit;
	this->pressed = other.pressed;
}

Button::Button(string buttonText, Color& textColor, Color& buttonColor, int posX, int posY, int width, int height)
	: ZControlBase(posX, posY, width, height)
{
	hit = pressed = false;
	text = new Label(buttonText, posX+6, posY+height/2+6);
	text->SetTextColor(textColor);
	tColor = textColor;
	backgroundColor = buttonColor;
}

Button::Button(string buttonText, int posX, int posY, int width, int height)
	: ZControlBase(posX, posY, width, height)
{
	hit = pressed = false;

	text = new Label(buttonText, posX, posY);
}

Button::~Button()
{
	delete text;
}

void Button::SetTextColor(Color & color)
{
	text->SetTextColor(color);
}

Color Button::GetTextColor()
{
	return tColor;
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
		text->OnPaint();
	}
	else if (hit)
	{
		FillRectangle(X, Y, Width, Height);
		DrawRectangle(X - 1, Y - 1, Width + 2, Height + 2);
		text->OnPaint();
	}
	else
	{
		FillRectangle(X, Y, Width, Height);
		text->OnPaint();
	}
}

void Button::OnMouseMove(int button, int x, int y)
{
	if (x > X && x < X + Width && y>Y && y < Y + Height)
	{
		hit = true;
	}
	else
	{
		pressed = hit = false;
	}
}

void Button::OnMouseDown(int button, int x, int y)
{
	if (hit && button==MOUSE_LEFT)
	{
		pressed = true;
	}
}

void Button::OnMouseUp(int button, int x, int y)
{
	pressed = false;
}
