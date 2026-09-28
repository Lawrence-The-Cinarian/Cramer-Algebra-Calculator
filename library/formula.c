#include "formula.h"

int a1, a2, b1, b2, c1, c2;
a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;

int mainDeterminant()
{
  int formula = (a1 * b2) - (b1 *a2);
  return formula;
}

int xDeterminant()
{
  int formula = (c1 * b2) - (b1 * c2);
  return formula;
}

int yDeterminant()
{
  int formula = (a1 * c2) - (c1 * a2);
  return formula;
}

int forx()
{
  int x = xDeterminant() / mainDeterminant();
  return x;
}

int fory()
{
  int y = yDeterminant() / mainDeterminant();
  return y;
}