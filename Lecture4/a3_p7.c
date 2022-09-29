/*
    CH-230-A
    a3_p7.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c)
{
    int i;
    int j;
    // One loop for the rows, one nested for the columns
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%c", c);
        }
        printf("\n");
        // We want to increase the width as we go down
        m++;
    }
}

int main()
{
    // Declare variables
    int n;
    int m;
    char c;

    // Get the input from the user
    scanf("%d", &n);
    scanf("%d", &m);
    getchar();
    scanf("%c", &c);

    // Finally, print the form
    print_form(n, m, c);
    return 0;
}