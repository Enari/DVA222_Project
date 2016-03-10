#include "stdafx.h"
#include "RadioButtonGroup.h"

//Kommenterat ut för det buggade sönder programmet, inte färdigimplementerat..


//
//RadioButtonGroup::RadioButtonGroup(int x, int y, int w, int h, Label label)
//: SelectorGroup(x, y, w, h, label)
//{}
//
//
//RadioButtonGroup::~RadioButtonGroup()
//{}
//
//void RadioButtonGroup::OnPaint()
//{
//  //Loop trough all of it's objects and check for wich radiobutton is pressed
//  //Check  if that's any different from whats currently checks
//  
//  //Call selectorcroup::OnPrint()
//}

RadioButtonGroup::RadioButtonGroup(string title, int x, int y, int w)
  : SelectorGroup(title, x, y, w)
{
  TheCheckeckedRadioButton = NULL;
}

RadioButtonGroup::RadioButtonGroup(string title, Color & titleColor, Color boarderColor, int x, int y, int w)
  : SelectorGroup(title, titleColor, boarderColor, x, y, w)
{
  TheCheckeckedRadioButton = NULL;
}

void RadioButtonGroup::OnMouseUp(int button, int x, int y)
{
  for each(RadioButton* object in objects)
  {
    //If there's no checked radiobutton
    if(object->GetStatus() == true && TheCheckeckedRadioButton == NULL)
    {
      TheCheckeckedRadioButton = object;
    }
    //Check if it's not the same as it was before
    if(object->GetStatus() == true && object != TheCheckeckedRadioButton)
    {
      TheCheckeckedRadioButton->SetStatus(false);
      TheCheckeckedRadioButton = object;
    }
  }
  Container::OnMouseUp(button, x, y);
}
