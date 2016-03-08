#include "stdafx.h"
#include "Button.h"


Button::Button(Label label)
{
	text = new Label(label);
}

Button::~Button()
{}

void Button::onPaint()
{
}

void Button::onLoaded()
{
}

void Button::OnMouseMove(int button, int x, int y)
{
}

void Button::OnMouseDown(int button, int x, int y)
{
}

void Button::OnMouseUp(int button, int x, int y)
{
}
