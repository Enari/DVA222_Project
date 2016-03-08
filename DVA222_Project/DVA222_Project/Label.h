#pragma once
#include "stdafx.h"
#include "ControlBase.h"
#include <string>

class Label:
  public ControlBase
{
public:
	Label(const Label& other);
  Label(string text);
	Label(string text, int x, int y);
	Label(string text, int x, int y, int red, int green, int blue);
  ~Label();
  void SetText(string text);
	string GetText();
  void GetColor();
  void SetColor(int red, int green, int blue);
	void OnPaint();

private:
	string text;
  //Typ? skapa en struct för color?
  int red, green, blue;
};

