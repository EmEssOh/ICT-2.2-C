#include <stdio.h>

int sentencelength(char sentence[]) 
{
    int length;
    for (length=0; sentence[length] != '\0'; ++length); 
    return length;
}

int main() 
{
    char sentence[254]; 
    printf("Give a sentence as input:\n");
    scanf("%[^\n]d", sentence);
    int L = sentencelength(sentence);
    printf("The length of the sentence is: %d", L); 
}