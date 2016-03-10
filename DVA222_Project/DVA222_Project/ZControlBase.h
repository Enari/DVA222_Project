#pragma once
#include "StdAfx.h"
#include "ControlBase.h"

class ZControlBase :
  public ControlBase
{
public:
  ZControlBase(int x = 0, int y = 0, int w = 0, int h = 0, int z = 1000);
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

