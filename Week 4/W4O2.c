#include <stdio.h>
#include <stdlib.h>

struct person {
    char name[30];
    int age;
};

int main() {
    struct person *ptr_person = NULL;
    int count = 0;
    int response;
    int max_count = 1;
    int i;

    ptr_person = (struct person *)malloc(max_count * sizeof(struct person));

    while (1) {
        printf("Enter the name of the person: \n");
        scanf(" %[^\n]s", &(ptr_person + count)->name);

        printf("Enter the age: \n");
        scanf("%d", &(ptr_person + count)->age);

        printf("              Students              \n");
        for (i = 0; i < count + 1; ++i) {
            printf("Name: %s\tAge: %d\n", (ptr_person + i)->name, (ptr_person + i)->age);
        }
        printf("Would you like to add another person? (1/0)\n");
        scanf("%d", &response);

        if (response == 0) {
            break;
        }
        count++;

        if (count > max_count) {
            max_count *= 2;
            ptr_person = (struct person *)realloc(ptr_person, max_count * sizeof(struct person));
            if (ptr_person == NULL) {
                printf("Error: memory full\n");
                return 1;
            }
        }
    }
    free(ptr_person);
    return 0;
}