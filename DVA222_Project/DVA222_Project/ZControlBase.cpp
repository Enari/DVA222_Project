#include "stdafx.h"
#include "ZControlBase.h"


ZControlBase::ZControlBase()
{
  Z = 1000;
}

ZControlBase::ZControlBase(int z)
{
  Z = z;
}


ZControlBase::~ZControlBase()
{}

int ZControlBase::GetZ()
{
  return Z;
  X = 7;
}

int ZControlBase::GetX()
{
  return X;
}
int ZControlBase::GetY()
{
  return Y;
}

void ZControlBase::SetX(int x)
{
  X = x;
}

void ZControlBase::SetY(int y)
{
  Y = y;
}