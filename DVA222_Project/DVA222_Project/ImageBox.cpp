#include "stdafx.h"
#include "ImageBox.h"


ImageBox::ImageBox()
{}

ImageBox::ImageBox(string filePath, float x, float y, float width, float height)
{
	X = x;
	Y = y;
	Width = width;
	Height = height;
	filepath = filePath;
}

ImageBox::~ImageBox()
{
	delete image;
}

void ImageBox::OnPaint()
{
	DrawBitmap(*image, X, Y, Width, Height);
}

void ImageBox::OnLoad()
{
	image = new Bitmap(filepath);
}