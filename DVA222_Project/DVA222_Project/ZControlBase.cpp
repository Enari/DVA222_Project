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

ZControlBase::ZControlBase(const ZControlBase & other)
{
  Z = other.Z;
}

ZControlBase::~ZControlBase()
{}

bool ZControlBase::operator>(const ZControlBase & other)
{
  return Z > other.Z;
}

bool ZControlBase::operator>=(const ZControlBase & other)
{
  return Z >= other.Z;
}

bool ZControlBase::operator<(const ZControlBase & other)
{
  return Z < other.Z;
}
bool ZControlBase::operator>= (const ZControlBase & other)
{
  return Z <= other.Z;
}
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

void ZControlBase::SetX(int x)
{
  X = x;
}

void ZControlBase::SetY(int y)
{
  Y = y;
}

