#include <stdio.h>
#include <math.h>

void omtrek ( float * diameter, float * area) 
{
    float pi = 3.14;
    float omtrek = pi * *diameter;
    *area = omtrek;
}

int main ( void )
{
    float diameter;
    float area;
    float *p_diameter = &diameter;
    float *p_area = &area;
    printf("Vul de diameter van de cirkel in: "); 
    scanf("%f", &diameter); 
    omtrek(p_diameter, p_area); 
    printf("De omtrek van de cirkel is: %.1f", area); 
    return 0;
}


