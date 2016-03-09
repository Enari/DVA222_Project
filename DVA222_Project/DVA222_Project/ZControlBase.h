#pragma once
#include "StdAfx.h"
#include "ControlBase.h"

class ZControlBase :
  public ControlBase
{
public:
  ZControlBase();
  ZControlBase(int z);
  ZControlBase(const ZControlBase& other);
  ~ZControlBase();
  bool operator> (const ZControlBase & other);
  bool operator>= (const ZControlBase & other);
  bool operator< (const ZControlBase & other);
  bool operator<= (const ZControlBase & other);
  int GetZ();
  int GetX();
  int GetY();
  void SetX(int x);
  void SetY(int y);
private:
  //Lower Z values represent objects which are more to the front.
  int Z;
};

