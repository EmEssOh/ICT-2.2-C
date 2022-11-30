#include <stdio.h>
#include <stdlib.h>
#include "W1O2.h"
void print_function( char letter );
int ctr;

int print_f( void )
{
    char star = '*';
    char dash = '-';
    for (ctr = 0 ; ctr < 10; ctr++ )
    {
        print_function( star );
        print_function( dash );
        printf("\n");
    }
    return 0;
}

void print_function ( char letter )
{
    for ( int ctr = 0; ctr < 9; ctr++) 
    {
        printf("%c", letter);
    }
}