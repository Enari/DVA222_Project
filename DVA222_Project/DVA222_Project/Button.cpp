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
	this->bColor = other.bColor;
	this->hit = other.hit;
	this->pressed = other.pressed;
}

Button::Button(string buttonText, Color& textColor, Color& buttonColor, int posX, int posY, int width, int height)
	: ZControlBase(posX, posY, width, height)
{
	hit = pressed = false;
	text = new Label(buttonText);
	tColor = textColor;
	bColor = buttonColor;
}

Button::Button(string buttonText, int posX, int posY, int width, int height)
	: ZControlBase(posX, posY, width, height)
{
	hit = pressed = false;

	text->SetText(buttonText);
}

Button::~Button()
{
	delete text;
}

void Button::SetTextColor(Color & color)
{
	text->SetTextColor(color.GetColor().r, color.GetColor().g, color.GetColor().b);
}

Color Button::GetTextColor()
{
	return tColor;
}

void Button::SetButtonColor(Color & color)
{
	bColor = color;
}

Color Button::GetButtonColor(Color & color)
{
	return bColor;
}

void Button::OnPaint()
{
	if (pressed)
	{
		SetColor((bColor.GetColor().r)-5, (bColor.GetColor().g)-5, (bColor.GetColor().b)-5); //-5 fade på knappen?
		FillRectangle(X, Y, Width, Height);
		text->OnPaint();
	}
	else if (hit)
	{
		SetColor(bColor.GetColor().r+5, bColor.GetColor().g+5, bColor.GetColor().b+5); 
		FillRectangle(X, Y, Width, Height);
		text->OnPaint();
	}
	else
	{
		SetColor(bColor.GetColor().r, bColor.GetColor().g, bColor.GetColor().b);
		FillRectangle(X, Y, Width, Height);
		text->OnPaint();
	}
}

void Button::OnLoaded() //Kanske inte behövs
{
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
