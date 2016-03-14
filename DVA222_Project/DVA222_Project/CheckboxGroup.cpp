#include "stdafx.h"
#include "CheckboxGroup.h"

CheckboxGroup::CheckboxGroup(string title, int x, int y, int w)
  : SelectorGroup(title, x, y, w)
{}

CheckboxGroup::CheckboxGroup(string title, Color & titleColor, Color boarderColor, int x, int y, int w)
  : SelectorGroup(title, titleColor, boarderColor, x, y, w)
{}

CheckboxGroup::~CheckboxGroup()
{
}
