#pragma once
#include "stdafx.h"
#include "ZControlBase.h"
#include <string>
#include "Color.h"

class Label:
  public ZControlBase
{
public:
	Label();
	Label(const Label& other);
  Label(string text);
	Label(string text, int x, int y);
	Label(string text, int x, int y, int red, int green, int blue);
  ~Label();
  void SetText(string text);
	string GetText();
  void GetColor();
  void setColor(int red, int green, int blue);
	void OnPaint();

private:
	string text;
  //Typ? skapa en struct för color?
	Color* color;
};

