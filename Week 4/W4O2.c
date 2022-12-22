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
    int records; 
    
    printf("Vul het aantal personen in dat je wilt toevoegen: ");
    scanf("%d", &records); 

    pointer = (struct persoon *)malloc(records * sizeof(struct persoon)); 
    for (int i = 0; i < records; ++i) { 
        printf("Vul de naam van de persoon in: \n"); 
        scanf("%s", &(pointer + i)->naam);
        printf("Vul de leeftijd van %s in: \n", pointer + i);
        scanf("%d", &(pointer + i)->leeftijd);
    }

    printf("Gegevens:\n");  
    for (int i = 0; i < records; ++i) 
    {
        printf("Naam: %s\tLeeftijd: %d\n", (pointer + i)->naam, (pointer + i)->leeftijd);
    }
  
    free(pointer);
    return 0;
}