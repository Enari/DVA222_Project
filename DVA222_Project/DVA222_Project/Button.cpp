#include "stdafx.h"
#include "Button.h"

#define AVERAGE_LETTER_WIDTH 3

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
	text->SetPosition((posX+width/2)-buttonText.length()*AVERAGE_LETTER_WIDTH, posY+(height/2)+5); /*Bredden delat med tv� - l�ngden p� str�ngen
																									 g�nger avg bredd p� en bokstav f�r att
																							         centrera i x led*/
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
		FillRectangle(X, Y, Width, Height);//Ritar tillf�lligt en ny rektangel ovanp� den gamla
		DrawRectangle(X - 1, Y - 1, Width + 2, Height + 2);//S� att hover border stannar �ven n�r man klickar
	}
	else if (hit)//Hit == n�r man hovrar �ver knappen
	{
		FillRectangle(X, Y, Width, Height);
		DrawRectangle(X - 1, Y - 1, Width + 2, Height + 2);//Ger button en border n�r man hovrar
	}
	else
	{
		FillRectangle(X, Y, Width, Height);
	}
  ClickableItems::OnPaint();//F�r att rita ut label p� knappen
}
