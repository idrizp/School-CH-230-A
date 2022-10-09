/*
    CH-230-A
    a4_p4.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// We get the ascii character of vowels.
// If we don't have a vowel, we have a consonant.
char vowels[12] = {
    'a',
    'e',
    'i',
    'o',
    'u',
    'y',
    'A',
    'E',
    'I',
    'O',
    'U',
    'Y'};

int count_consonants(char str[])
{
    int consonants = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        int code = (int)c;
        // If we don't have an alphabet character, skip
        if (!isalpha(code))
        {
            continue;
        }
        // Try to find the vowel.
        // We use found_vowel and set it to 1 if we encounter any.
        int found_vowel = 0;
        for (int j = 0; j < 12; j++)
        {
            if (c == vowels[j])
            {
                found_vowel = 1;
            }
        }
        // If we don't have a vowel, we have a consonant.
        if (!found_vowel)
        {
            consonants++;
        }
    }
    return consonants;
}

int main()
{
    // Loop until the program terminates
    while (1)
    {
        // Get the user's input.
        char input[256];
        fgets(input, 256, stdin);
        input[strcspn(input, "\n")] = 0;

        if (strlen(input) == 0)
        {
            return 0;
        }

        printf("Number of consonants=%d\n", count_consonants(input));
    }
    return 0;
}