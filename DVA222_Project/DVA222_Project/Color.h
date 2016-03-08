#pragma once
#include "stdafx.h"

class Color
{
private:
	int r, g, b;
	struct Values {
		int r, g, b;
	};
public:
	Color(int r, int g, int b);
	Color();
	Color(const Color& other);
	~Color();
	void setColor(int r, int g, int b);
	Values getColor();
};