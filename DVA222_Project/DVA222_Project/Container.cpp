#include "stdafx.h"
#include "Container.h"
#include <algorithm>

using namespace std;
Container::Container(int y, int x, int w, int h)
{}

Container::Container(int y, int x, int w, int h, int z)
{}

Container::~Container()
{}

void Container::onPaint()
{
  //Waiting for issue: DVA222P-15
  //sort(objects.begin(), objects.end());
  for each (ZControlBase object in objects)
  { 
    object.OnPaint();
  }
}
