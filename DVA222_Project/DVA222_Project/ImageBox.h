#pragma once
#include "ControlBase.h"
#include "Graphix.h"

class ImageBox : public ControlBase
{
private:
	Bitmap *image;
	string filepath;
public:
  ImageBox();
  ImageBox(string, float x, float y, float width, float height);
  ~ImageBox();
  void OnPaint();
  void OnLoad();
};

