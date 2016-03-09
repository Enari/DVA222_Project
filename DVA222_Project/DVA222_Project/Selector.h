#pragma once
#include "StdAfx.h"
#include "ZControlBase.h"
#include "Label.h"
#include "ImageBox.h"
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
  Selector(string text, Color& color, int x, int y);
  Selector(Selector& other);
  ~Selector();

  void SetText(string text);
  string GetText();
  
  void SetTextColor(Color& newColor);
  Color GetTextColor();
  
  bool GetStatus();
  void SetStatus(bool newStatus);
  
  virtual void OnPaint();
  void OnMouseDown(int button, int x, int y);
  void OnMouseMove(int button, int x, int y);
protected:
  ImageBox* normal;
  ImageBox* hover;
  ImageBox* checked;
  Label* text;
  bool hit;
  bool pressed;
};

