#include <stdio.h>
#include <math.h>
float omtrek ( float *diameter );
int main ( void )
{
    float diameter;
    float area;
    printf("Vul de diameter van de cirkel in: "); 
    scanf("%f", &diameter); 
    float *pointer = &diameter; 
    area = omtrek(pointer); 
    printf("De omtrek van de cirkel is: %.1f", area); 
}

float omtrek ( float *pointer ) 
{
    float area;
    float pi = 3.14;
    area = pi * *pointer;
    return area;
}

