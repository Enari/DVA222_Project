#pragma once
#include "stdafx.h"
#include "ZControlBase.h"
#include <string>
#include "Color.h"
#include "Graphix.h"

class Label:
  public ZControlBase
{
public:
	Label();
  Label(string text);
  Label(string text, int x, int y);
  Label(string text, int x, int y, int red, int green, int blue);
  Label(string text, Color& color);
  Label(string text, Color& color, int x, int y);
  Label(const Label& other);
  ~Label();
  
  //Set&get's
  void SetText(string text);
	string GetText();
  Color GetTextColor();
  void SetTextColor(Color& color);
  void SetTextColor(int red, int green, int blue);
  void SetPosition(int x, int y);

  //Event Overlaods
	void OnPaint();
	

private:
	string text;
	Color* color;
};

