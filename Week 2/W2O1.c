#include <stdio.h>
#include <stdlib.h>
#include "W1O2.h"

void print_f( void );
int main( void ) 
{
    int userInput;
    printf("Kies een nummer: \n");
    scanf("%d", &userInput);
    printf("Je hebt gekozen voor nummer: %d \n", userInput);
    if (userInput < 0) 
    {
        return 0;
    }
    else 
    {
        print_f();
    }
  
}