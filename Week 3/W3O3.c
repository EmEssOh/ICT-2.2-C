#include <stdio.h>

struct opleiding 
{ 
    char naam[30];
    int instroomjaar;
};

struct student 
{
    char naam[30];
    int leeftijd;
    struct opleiding opleiding; 
} 

data[3];

int main (void) 
{
    struct student *s; 
    int x; 
    int y; 

    for (x=0; x<3; x++) 
    {  
        printf("Naam Student: ");
        scanf("%s", &data[x].naam);

        printf("\nLeeftijd van %s: ", data[x].naam);
        scanf("%d", &data[x].leeftijd); 

        printf("\nOpleiding van %s: ", data[x].naam);
        scanf("%s", data[x].opleiding.naam); 

        printf("\nInstroomjaar van %s op %s: ", data[x].naam, data[x].opleiding.naam);
        scanf("%d", &data[x].opleiding.instroomjaar); 
    }

    s = data;

    for (y = 0;y < 3; y++) 
    { 
        printf("Element %d: Naam: %s, leeftijd: %d, opleiding: %s, instroomjaar: %d\n", // print elk element
            y, 
            s->naam,
            s->leeftijd,
            s->opleiding.naam,
            s->opleiding.instroomjaar);
            s++; 
    }
    
    return 0;
}