#pragma once
#include "ControlBase.h"
#include "Graphix.h"

class ImageBox : public ControlBase
{
private:
	string filepath;
	Bitmap *image;
public:
  ImageBox();
  ImageBox(const ImageBox &other);
  ImageBox(string filePath, float posX, float posY);
  ImageBox(string filePath, float posX, float posY, int width, int height);
  ~ImageBox();
  virtual void OnPaint();
  virtual void OnLoaded();
};

