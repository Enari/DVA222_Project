#pragma once
#include "stdafx.h"

class Color
{
private:
	int r, g, b;
	struct Values {
		int r, g, b;
	};
	void operator= (Color& other);
public:
	Color(int r, int g, int b);
	Color();
	Color(const Color& other);
	~Color();
	void SetColor(int r, int g, int b);
  void SetColor(Color &color);
	Values GetColor();
};