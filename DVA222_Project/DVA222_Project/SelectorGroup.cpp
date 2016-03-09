#include "stdafx.h"
#include "SelectorGroup.h"


SelectorGroup::SelectorGroup(int x, int y, int w, int h, Label label)
  :Container(x, y, w, h)
{
	Title = new Label(label);
}


SelectorGroup::~SelectorGroup()
{}

void SelectorGroup::OnPaint()
{
  //Print title and border
  //Call Container::OnPaint
}
