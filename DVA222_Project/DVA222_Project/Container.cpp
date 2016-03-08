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

void Container::OnPrint()
{
  //Waiting for issue: DVA222P-15
  //sort(objects.begin(), objects.end());

  //Call All objects OnPaint
  for each (ZControlBase object in objects)
  { 
    object.OnPaint();
  }
}

void Container::AddObject(ZControlBase* object)
{
  //If object is inside Container Set absolute position form relative position
  if(object->GetX() < Width && object->GetY() < Height)
  {
    object->SetX(object->GetX() + X);
    object->SetY(object->GetY() + Y);
  }
  //Add object to the vector
  objects.push_back(*object);
}
