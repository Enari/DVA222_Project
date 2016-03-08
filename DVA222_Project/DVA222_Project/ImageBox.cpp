#include "stdafx.h"
#include "ImageBox.h"


ImageBox::ImageBox()
{

}

ImageBox::ImageBox(const ImageBox &other)
{
	this->filepath = other.filepath;
	this->image = other.image;
	this->X = other.X;
	this->Y = other.Y;
}

ImageBox::ImageBox(string filePath, float posX, float posY)
{
	filepath = filePath;
	X = posX;
	Y = posY;
	Width = Height = 0;
}

ImageBox::ImageBox(string filePath, float posX, float posY, int imageWidth, int imageHeight)
{
	filepath = filePath;
	X = posX;
	Y = posY;
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