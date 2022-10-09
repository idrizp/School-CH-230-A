/*
    CH-230-A
    a3_p11.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int index_of(char c, char *string)
{
    int length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        if (string[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    // The maximum number of characters for a single line.
    int max_characters = 256;

    // We get the strings from the input.
    char one[max_characters];
    char two[max_characters];
    fgets(one, max_characters, stdin);
    fgets(two, max_characters, stdin);

    // Remove newline if found
    one[strcspn(one, "\n")] = 0;
    two[strcspn(two, "\n")] = 0;

    // We get the target character we want to search for
    char target_character;
    scanf("%c", &target_character);
    getchar();

    // We get the length of the first and second strings
    int one_length = strlen(one);
    int two_length = strlen(two);

    // We use strcat to concatenate the strings
    char concatenated[max_characters];
    strcpy(concatenated, one);
    strcat(concatenated, two);

    // We create the copy string and use strcpy to copy the string inside.
    char copy[max_characters];
    strcpy(copy, two);

    // We get the position of the target character.
    int position = index_of(target_character, two);

    printf("length1=%d\n", one_length);
    printf("length2=%d\n", two_length);
    printf("concatenation=%s\n", concatenated);
    printf("copy=%s\n", copy);

    int comparison = strcmp(one, two);
    // We make the proper comparisons and print out accordingly.
    if (comparison < 0)
    {
        printf("one is smaller than two\n");
    }
    else if (comparison == 0)
    {
        printf("one is equal to two\n");
    }
    else
    {
        printf("one is larger than two\n");
    }
    if (position == -1)
    {
        printf("The character is not in the string\n");
    }
    else
    {
        printf("position=%d\n", position);
    }
    return 0;
}