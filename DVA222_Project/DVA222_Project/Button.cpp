#include "stdafx.h"
#include "Button.h"


Button::Button(Label label)
{
	text = new Label(label);
}

Button::~Button()
{}
