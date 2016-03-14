#include "stdafx.h"
#include "RadioButtonGroup.h"


RadioButtonGroup::RadioButtonGroup(string title, int x, int y, int w)
  : SelectorGroup(title, x, y, w)
{
  theCheckeckedRadioButton = NULL;
}

RadioButtonGroup::RadioButtonGroup(string title, Color & titleColor, Color boarderColor, int x, int y, int w)
  : SelectorGroup(title, titleColor, boarderColor, x, y, w)
{
  theCheckeckedRadioButton = NULL;
}

RadioButtonGroup::~RadioButtonGroup()
{
}

void RadioButtonGroup::OnLoaded()
{
  SelectorGroup::OnLoaded();
}

void RadioButtonGroup::OnMouseUp(int button, int x, int y)
{
  for each(RadioButton* object in objects)
  {
    //If there's no checked radiobutton
    if(object->GetStatus() == true && theCheckeckedRadioButton == NULL)
    {
      theCheckeckedRadioButton = object;
    }
    //Check if it's not the same as it was before
    if(object->GetStatus() == true && object != theCheckeckedRadioButton)
    {
      theCheckeckedRadioButton->SetStatus(false);
      theCheckeckedRadioButton = object;
    }
  }
  Container::OnMouseUp(button, x, y);
}
