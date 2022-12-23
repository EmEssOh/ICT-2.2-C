#include <stdio.h>
#include <stdlib.h>

struct persoon 
{
    char naam[15];
    int leeftijd;
}; 

int main() 
{
    struct persoon *pointer;
    pointer = (struct persoon*)malloc(sizeof(struct persoon));
    int x;
    x = 0;
    
    while(1)
    {
        printf("\nVul de naam van de persoon in: ");
        scanf("%s", &(pointer + x)->naam);
        printf("Vul de leeftijd van %s in: ", pointer + x);
        scanf("%d", &(pointer + x)->leeftijd);

        x++;

        for (int y = 0; y != x; y++)
        {
            printf("\nNaam: %s\tLeeftijd: %d", (pointer + y)->naam, (pointer + y)->leeftijd);
        }
        
        pointer = (struct persoon *)realloc(pointer, sizeof(struct persoon) + sizeof(struct persoon));
      
    }
}