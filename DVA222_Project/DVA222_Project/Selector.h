#pragma once
#include "ControlBase.h"
#include "Label.h"
#include "StdAfx.h"
#include "Graphix.h"
#include "glut.h"
#include "string"
#include "Color.h"

class Selector :
  public ControlBase
{
public:
  Selector(Label label);
  ~Selector();
  void SetText();
  string GetText();
  void SetColor();
  Color GetColor();
private:
	Bitmap *normal;
  Label* text;
  Color* color;
  bool status;
};

