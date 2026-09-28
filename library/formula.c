#include "formula.h"

double a1, a2, b1, b2, c1, c2;


int mainDeterminant()
{
  double formula = (a1 * b2) - (b1 *a2);
  return formula;
}

int xDeterminant()
{
  double formula = (c1 * b2) - (b1 * c2);
  return formula;
}

int yDeterminant()
{
  double formula = (a1 * c2) - (c1 * a2);
  return formula;
}

int forx()
{
  double x = xDeterminant() / mainDeterminant();
  return x;
}

int fory()
{
  double y = yDeterminant() / mainDeterminant();
  return y;
}