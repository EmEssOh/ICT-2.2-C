#include <stdio.h>
#include <stdlib.h>
#include "W1O2.c"

int print_f( void );

int main( void ) 
{
    int num;
    printf("Kies een nummer:");
    scanf("%d", &num);
    
    if (num < 0)
    {
        return 0;
    }
    if (num == 2)
    {
        printf("Je hebt gekozen voor nummer: %d", num);
        print_f();
    }
    else
    {
        printf("Je hebt gekozen voor nummer: %d", num);
    }

  
}