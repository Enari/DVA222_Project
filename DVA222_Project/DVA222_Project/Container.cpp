#include "stdafx.h"
#include "Container.h"
#include <algorithm>

using namespace std;
Container::Container(int y, int x, int w, int h)
{
  Y = y;
  X = x;
  //No negative sizes. Make size zero if size is negative.
  w < 0 ? Width = 0 : Width = w;
  h < 0 ? Height = 0 : Width = h;

}

Container::Container(int y, int x, int w, int h, int z) : ZControlBase(z)
{
  Container(y, x, w, h);
}

Container::Container(const Container & other) : ZControlBase(other)
{
  objects = other.objects;
}

Container::~Container()
{}

void Container::OnLoaded()
{
  for each (auto& object in objects)
  {
    object->OnLoaded();
  }
}

void Container::OnPaint()
{
  //Waiting for issue: DVA222P-15
  sort(objects.begin(), objects.end());

  //Call All objects OnPaint
  //auto& == super leet haxx
  for each (auto& object in objects)
  { 
    object->OnPaint();
  }
}

void Container::OnMouseMove(int button, int x, int y)
{
  for each (auto& object in objects)
  {
    object->OnMouseMove(button, x, y);
  }
}

void Container::OnKeyboard(unsigned char key, int x, int y)
{
  for each (auto& object in objects)
  {
    object->OnKeyboard(key, x, y);
  }
}

void Container::OnMouseDown(int button, int x, int y)
{
  for each (auto& object in objects)
  {
    object->OnMouseDown(button, x, y);
  }
}

void Container::OnMouseUp(int button, int x, int y) 
{
  for each (auto& object in objects)
  {
    object->OnMouseUp(button, x, y);
  }
}

void Container::OnResize(int width, int height)
{
  for each (auto& object in objects)
  {
    object->OnResize(width, height);
  }
}

void Container::AddObject(ZControlBase* object)
{
  ////If object is inside Container Set absolute position form relative position
  //if(object.GetX() < Width && object.GetY() < Height)
  //{
  //  object.SetX(object.GetX() + X);
  //  object.SetY(object.GetY() + Y);
  //}

  //Change position to relative
  object->SetX(object->GetX() + X);
  object->SetY(object->GetY() + Y);

  //Add object to the vector
  objects.push_back(object);
}
