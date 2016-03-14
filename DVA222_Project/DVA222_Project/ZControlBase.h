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
  int GetZ();
  int GetX();
  int GetY();
  int GetPressedPosX();
  int GetPressedPosY();
  void SetX(int x);
  void SetY(int y);
  void SetPressedPosX();
  void SetPressedPosY();
private:
  //Lower Z values represent objects which are more to the front.
  int Z;
  int PressedPosX; //The x-position when mouse is pressed.
  int PressedPosY; //The x-position when mouse is pressed.
};
