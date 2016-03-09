#include "stdafx.h"
#include "SelectorGroup.h"


SelectorGroup::SelectorGroup(int x, int y, int w, int h, string title)
  :Container(x, y, w, h)
{
	this->title = new Label(title);
}


SelectorGroup::~SelectorGroup()
{}

void SelectorGroup::OnPaint()
{
  //Print title and border
  //Call Container::OnPaint
}
