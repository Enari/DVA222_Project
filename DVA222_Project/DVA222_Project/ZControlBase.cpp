#include "stdafx.h"
#include "ZControlBase.h"

ZControlBase::ZControlBase(int x, int y, int w, int h, int z)
{
  X = x;
  Y = y;
  Z = z;
  //No negative sizes. Make size zero if size is negative.
  w < 0 ? Width = 0 : Width = w;
  h < 0 ? Height = 0 : Height = h;
  SetPressedPosX();
  SetPressedPosY();
}

ZControlBase::ZControlBase(const ZControlBase & other) : ControlBase(other)
{
  X = other.X;
  Y = other.Y;
  Z = other.Z;
  Width = other.Width;
  Height = other.Height;
  SetPressedPosX();
  SetPressedPosY();

}

ZControlBase::~ZControlBase()
{}

int ZControlBase::GetZ()
{
  return Z;
}

int ZControlBase::GetX()
{
  return X;
}
int ZControlBase::GetY()
{
  return Y;
}

int ZControlBase::GetPressedPosX()
{
  return PressedPosX;
}

int ZControlBase::GetPressedPosY()
{
  return PressedPosY;
}

void ZControlBase::SetX(int x)
{
  X = x;
}

void ZControlBase::SetY(int y)
{
  Y = y;
}

void ZControlBase::SetPressedPosX()
{
  PressedPosX = X;
}

void ZControlBase::SetPressedPosY()
{
  PressedPosY = Y;
}