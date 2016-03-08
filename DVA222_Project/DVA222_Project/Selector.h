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
  Selector();
  Selector(Label label);
  ~Selector();
  void SetText();
  string GetText();
  void SetColor();
  Color GetColor();
  virtual void OnMouseMove(int button, int x, int y);
  virtual void OnPaint();
  virtual void OnLoaded();
  void OnMouseDown(int button, int x, int y);
  void OnMouseUp(int button, int x, int y);
private:
  Bitmap* normal;
  Bitmap* hover;
  Bitmap* checked;
  Label* text;
  Color* color;
  bool hit;
  bool checked;
};

