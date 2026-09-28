#include "cramer.h"
#include <stdio.h>

int userInput()
{
  char *variable[6] = {"a1", "b1", "c1", "a2", "b2", "c2"};
  double *var[6] = {&a1, &b1, &c1, &a2, &b2, &c2};
  for(int i = 0; i < 6; i++)
  {
    printf("Enter value for %s: ", variable[i]);
    scanf("%lf", var[i]);
    puts("");
  }
  return 0;
}

int calculateValue()
{
  userInput();
  double mainD = mainDeterminant();
  double xD = xDeterminant();
  double yD = yDeterminant();
  double x = forx();
  double y = fory();
  printf("Main Determinant: %.2f\nX Determinant: %.2f\nY Determinant: %.2f\nX: %.2f\nY: %.2f\n\n", mainD, xD, yD, x, y);
  return 0;
}
