//
// Created by Pharrell_WANG on 10/10/2017.
//

#include "TimeCost.h"
namespace Dmm1TimeCost
{
  int g_dmm1TimeCost = 0;

  int getDMM1TimeCost()
  {
    return g_dmm1TimeCost;
  }

  void increaseDMM1TimeCost(int x)
  {
    g_dmm1TimeCost += x;
  }
}