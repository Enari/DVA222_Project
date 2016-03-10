#pragma once
#include "StdAfx.h"
#include "ClickableItems.h"
#include "Label.h"
#include "ImageBox.h"
#include "string"
#include "Color.h"

class Selector :
  public ClickableItems
{
public:
  //Constructors, all working.
  Selector();
  Selector(string text);
  Selector(string text, int x, int y);
  Selector(string text, Color& color, int x, int y);
  Selector(Selector& other);
  ~Selector();
  
  bool GetStatus();
  void SetStatus(bool newStatus);
  
  virtual void OnPaint();
  void OnMouseDown(int button, int x, int y);
  void OnMouseMove(int button, int x, int y);
protected:
  ImageBox* normal;
  ImageBox* hover;
  ImageBox* checked;
};

