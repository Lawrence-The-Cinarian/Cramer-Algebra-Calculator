#include "../library/cramer.h"
#include <stdbool.h>
#include <stdio.h>


int main(void)
{
  char repo = '\0';
  
  do 
    {
    calculateValue();
    printf("Would you like to continue? (Y/N): ");
    scanf(" %c", &repo);
      if(!(repo == 'Y' || repo == 'y'))
      {
       break;
      }
    }
    while(true);
  return 0;
}
