#include "stdafx.h"
#include "SelectorGroup.h"


ElementGroup::ElementGroup(int x, int y, int w, int h, string title)
  :Container(x, y, w, h)
{
	this->title = new Label(title);
}


ElementGroup::~ElementGroup()
{}

void ElementGroup::OnPaint()
{
  //Print title and border
  //Call Container::OnPaint
}
