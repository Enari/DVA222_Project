#include "stdafx.h"
#include "Panel.h"


Panel::Panel(int x, int y, int w, int h)
  :Container(x, y, w, h)
{
  //backgroundColor = Color(); // Bugg kommentar f�r att kunna utveckla andra delar
}


Panel::~Panel()
{}
