#pragma once
#include "StdAfx.h"
#include "ZControlBase.h"
#include "Label.h"
#include "Graphix.h"
#include "glut.h"
#include "string"
#include "Color.h"

class Selector :
  public ZControlBase
{
public:
  Selector();
  Selector(Label label);
  ~Selector();
  void SetText();
  string GetText();
  void SetColor();
  Color GetColor();
  bool IsPressed();
  void setStatus(bool pressed);
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
  Color* textcolor;
  bool hit;
  bool pressed;
};

