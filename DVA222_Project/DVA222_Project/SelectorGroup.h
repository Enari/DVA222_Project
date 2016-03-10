#pragma once
#include "ElementGroup.h"

class SelectorGroup 
  : public ElementGroup
{
public:
  SelectorGroup();
  ~SelectorGroup();

  void AddObject(const ZControlBase &object);
};

