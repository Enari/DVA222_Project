#include "stdafx.h"
#include "Selector.h"


Selector::Selector()
{
}

Selector::Selector(Label label)
{
	text = new Label(label);
}


Selector::~Selector()
{}

void Selector::SetText()
{
}

string Selector::GetText()
{
  return string();
}

void Selector::SetColor()
{
}

//Color Selector::GetColor()
//{
//  return Color();
//}

void Selector::OnMouseMove(int button, int x, int y)
{
}

void Selector::OnPaint()
{
}

void Selector::OnLoaded()
{
}

void Selector::OnMouseDown(int button, int x, int y)
{
}

void Selector::OnMouseUp(int button, int x, int y)
{
}
