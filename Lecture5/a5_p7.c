/*
    CH-230-A
    a5_p7.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char one[100];
    char two[100];

    // Get the first line and remove the nextline
    fgets(one, 100, stdin);
    one[strcspn(one, "\n")] = 0;

    // Get the second line and remove the nextline
    fgets(two, 100, stdin);
    one[strcspn(two, "\n")] = 0;

    char *concatenated = (char *)malloc(sizeof(char) * (strlen(one) + strlen(two)));
    if (concatenated == NULL)
    {
        printf("Couldn't allocate enough memory.");
        exit(1);
    }

    strcpy(concatenated, one);
    strcat(concatenated, two);

    printf("Result of concatenation: %s", concatenated);

    free(concatenated);
    return 0;
}