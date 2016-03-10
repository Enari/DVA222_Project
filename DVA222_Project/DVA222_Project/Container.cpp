#include "stdafx.h"
#include "Container.h"
#include <algorithm>

using namespace std;

Container::Container(int x, int y, int w, int h, int z)
  : ZControlBase(x, y, w, h, z)
{

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
  //Sorterar Vektorn i storleksordning
  /*    FUNKAR INTE                */
  //sort(objects.begin(), objects.end());

  //Call All objects OnPaint
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
