#include "stdafx.h"
#include "ElementGroup.h"


ElementGroup::ElementGroup()
{}

ElementGroup::ElementGroup(int x, int y, int w, int h, string title)
  :Container(x, y, w, h)
{
	this->title = new Label(title);
}

ElementGroup::ElementGroup(const ElementGroup & other)
{}


ElementGroup::~ElementGroup()
{}

void ElementGroup::OnPaint()
{
  //Print title and border
  //Call Container::OnPaint
}
