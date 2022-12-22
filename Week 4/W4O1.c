#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE* bestand;
    FILE* nieuwbestand;

    long bytes;

    int x;
    int count = 0;

    char *text; 
    char character;
    char filename[100] = "tekst.txt";
    
    bestand = fopen(filename, "r");
    if (bestand == NULL) 
    {
        printf("Bestand bestaat niet");
        return 0;
    }
    else
    {
        for (character = getc(bestand); character != EOF; character = getc(bestand))
            count = count + 1; 
            printf("Het aantal karakters in het bestand zijn: %d", count);

    }

    // ACII +1 deel

    fseek(bestand, 0L, SEEK_END);
    bytes = ftell(bestand);
    fseek(bestand, 0L, SEEK_SET);

    text = (char*)calloc(bytes, sizeof(char)); 
    
    fread(text, sizeof(char), bytes, bestand); 
    fclose(bestand); 
    printf("\n");
    printf("Nieuwe tekst is: \n");
    nieuwbestand = fopen("newtekst.txt", "a");
        
    for (x = 0; x<count; ++x) 
    { 
        if (text[x] == *" ") 
        {  
            printf("%c", text[x]); 
            fprintf(bestand, "%c", text[x]);   
        }
        else if (text[x] == *"\n") 
        { 
            printf("%c", text[x]); 
            fprintf(bestand, "%c", text[x]);   
        }
        else 
        {
            printf("%c", text[x]+1);
            fprintf(bestand, "%c", text[x]+1);   
        }
    }
    
    fclose(nieuwbestand);
}

