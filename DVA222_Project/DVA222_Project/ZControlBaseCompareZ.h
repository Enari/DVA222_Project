#pragma once
#include "ZControlBase.h"

class ZControlBaseCompareZ {
public:
  bool operator() (ZControlBase* lhs, ZControlBase* rhs)
  {
    return lhs->GetZ() > rhs->GetZ();
  }
};