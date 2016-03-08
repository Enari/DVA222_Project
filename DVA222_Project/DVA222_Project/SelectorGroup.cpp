#include "stdafx.h"
#include "SelectorGroup.h"


SelectorGroup::SelectorGroup(int x, int y, int w, int h, Label label)
  :Container(x, y, w, h)
{
	title = new Label(label);
}


SelectorGroup::~SelectorGroup()
{}
