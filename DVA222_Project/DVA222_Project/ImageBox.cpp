#include "stdafx.h"
#include "ImageBox.h"


ImageBox::ImageBox()
{

}

ImageBox::ImageBox(const ImageBox &other)
{
	this->filepath = other.filepath;
	this->image = other.image;
}

ImageBox::ImageBox(string filePath, int posX, int posY)
  :ImageBox(filePath, posX, posY, 0, 0)
{}

ImageBox::ImageBox(string filePath, int posX, int posY, int imageWidth, int imageHeight)
  : ZControlBase(posX, posY)
{
	filepath = filePath;
	Height = imageHeight;
	Width = imageWidth;
}

ImageBox::~ImageBox()
{
	delete image;
}

void ImageBox::OnPaint()
{
	if (Width == 0 && Height == 0)
		DrawBitmap(*image, X, Y);
	else
		DrawBitmap(*image, X, Y, Width, Height);
}

void ImageBox::OnLoaded()
{
	image = new Bitmap(filepath);
}