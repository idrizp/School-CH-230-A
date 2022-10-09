/*
    CH-230-A
    a5_p1.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

void print_triangle(int n, char c)
{
    // Starts a for loop starting from n, going down to zero.
    for (int i = n; i > 0; i--)
    {
        // Starts a for loop starting from the current i, going down to zero so we can repeat the character i times.
        for (int j = i; j > 0; j--)
        {
            printf("%c", c);
        }
        // Prints a new line for the next row.
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    int n;
    char ch;

    // Grab the variables from user input.
    scanf("%d", &n);
    scanf(" %c", &ch);

    // Call the print_triangle function.
    print_triangle(n, ch);
    return 0;
}