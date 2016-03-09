#include "stdafx.h"
#include "Checkbox.h"


//Checkbox::Checkbox(Label label) : Selector (label)
//{
//}
//
//
//Checkbox::~Checkbox()
//{}

Checkbox::~Checkbox()
{
  delete normal;
  delete hover;
  delete checked;
}
