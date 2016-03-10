#include "stdafx.h"
#include "SelectorGroup.h"


SelectorGroup::SelectorGroup()
{}

SelectorGroup::SelectorGroup(string title, int x, int y, int w)
  : ElementGroup(title, x, y, w, 0)
{}

SelectorGroup::SelectorGroup(string title, Color & titleColor, Color boarderColor, int x, int y, int w)
  : ElementGroup(title, titleColor, boarderColor, x, y, w, 0)
{}


SelectorGroup::~SelectorGroup()
{}

void SelectorGroup::OnLoaded()
{
  int y = 10;
  //Setting that relativbe position
  for each(auto& object in objects)
  {
    object->SetX(10);
    object->SetY(y += 18);
  }
  Height = y+28;
  ElementGroup::OnLoaded();
}
