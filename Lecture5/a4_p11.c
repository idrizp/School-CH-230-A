/*
    CH-230-A
    a4_p11.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int count_insensitive(char *str, char c)
{
    // Get the uppercase and lowercase code
    // for the specific character
    int lower_code = tolower(c);
    int upper_code = toupper(c);

    // Iterate through the string, make the comparison
    // and increase the count
    int count = 0;
    for (char *curr = str; *curr != '\0'; curr++)
    {
        int curr_code = (int)*curr;
        if (curr_code == lower_code || curr_code == upper_code)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    // Get the user input, dynamically allocate array
    char *input = (char *)malloc(sizeof(char) * 50);
    if (input == NULL)
    {
        printf("Couldn't allocate memory.\n");
        exit(1);
    }
    fgets(input, 50, stdin);
    input[strcspn(input, "\n")] = 0;

    // Define the characters we want to check for
    char characters[5] = {'b', 'H', '8', 'u', '$'};
    for (int i = 0; i < 5; i++)
    {
        char c = characters[i];
        int result = count_insensitive(input, c);
        printf("The character %c occurs %d times.\n", c, result);
    }
    free(input);
    return 0;
}