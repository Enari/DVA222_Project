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
  //Constructors, all working.
  Selector();
  Selector(string text);
  Selector(string text, int x, int y);
  Selector(string text, int x, int y, Color& color);
  Selector(Selector& other);
  ~Selector();

  void SetText();
  string GetText();
  
  void SetColor(Color& newColor);
  Color GetColor();
  
  bool IsPressed();
  void setStatus(bool pressed);
  
  virtual void OnMouseMove(int button, int x, int y);
  virtual void OnPaint();
  virtual void OnLoaded();
  void OnMouseDown(int button, int x, int y);
  void OnMouseUp(int button, int x, int y);
protected:
  Bitmap* normal;
  Bitmap* hover;
  Bitmap* checked;
  Label* text;
private:
  bool hit;
  bool pressed;
};

