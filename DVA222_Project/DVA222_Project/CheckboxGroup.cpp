#include "stdafx.h"
#include "CheckboxGroup.h"


//CheckboxGroup::CheckboxGroup(int x, int y, int w, int h, Label label)
//  : SelectorGroup(x, y, w, h, label)
//{}
//
//
//CheckboxGroup::~CheckboxGroup()
//{}

CheckboxGroup::CheckboxGroup(string title, int x, int y, int w)
  : SelectorGroup(title, x, y, w)
{}

CheckboxGroup::CheckboxGroup(string title, Color & titleColor, Color boarderColor, int x, int y, int w)
  : SelectorGroup(title, titleColor, boarderColor, x, y, w)
{}
