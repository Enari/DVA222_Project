#pragma once
#include "ZControlBase.h"
#include "Graphix.h"
#include "Label.h"
#include "Color.h"
#include <string>

class ClickableItems :
  public ZControlBase
{
public:
  ClickableItems();
  ClickableItems(string text);
  ClickableItems(string text, int x, int y);
  ClickableItems(string text, Color& color, int x, int y);
  ClickableItems(string text, Color& color, int x, int y, int w, int h);
  ClickableItems(ClickableItems& other);
  ~ClickableItems();

  void SetText(string text);
  string GetText();

  void SetTextColor(Color& newColor);
  Color GetTextColor();

  virtual void OnMouseDown(int button, int x, int y);
  virtual void OnMouseMove(int button, int x, int y);
  virtual void OnMouseUp(int button, int x, int y);
private:
  Label* text;
protected:
  bool hit;
  bool pressed;
};

