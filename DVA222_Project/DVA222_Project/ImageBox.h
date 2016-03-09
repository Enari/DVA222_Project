#pragma once
#include "ZControlBase.h"
#include "Graphix.h"

class ImageBox : public ZControlBase
{
private:
	string filepath;
	Bitmap *image;
public:
  ImageBox();
  ImageBox(const ImageBox &other);
  ImageBox(string filePath, int posX, int posY);
  ImageBox(string filePath, int posX, int posY, int width, int height);
  ~ImageBox();
  virtual void OnPaint();
  virtual void OnLoaded();
};

