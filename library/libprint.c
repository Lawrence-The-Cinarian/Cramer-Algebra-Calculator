#include "cramer.h"
#include <stdio.h>

int userInput()
{
  char *variable[6] = {"a1", "b1", "c1", "a2", "b2", "c2"}
  int var[6];
  for(int i = 0; i < 6; i++)
  {
    printf("Enter value for %s: ", variable[i]);
    scanf("%d", &var[i]);
    puts("");
  }
  return 0;
}

int calculateValue()
{
  userInput();
  int mainD = mainDeterminant();
  int xD = xDeterminant();
  int yD = yDeterminant();
  int x = forx();
  int y = fory();
  printf("Main Determinant: %d\nY Determinant: %d\nX Determinant: %d\nX: %d\nY: %d\n\n", mainD, xD, yD, x, y);
  return 0;
}

int repeat()
{
  char repo = '\0'
  printf("Would you like to continue? (Y/N): ");
  scanf(" %c", &repo);
  if(!(repo == 'Y' || repo == 'y'))
  {
    break;
  }
  return 0;
}
