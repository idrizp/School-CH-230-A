/*
    CH-230-A
    a5_p10.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

void countdown(int n)
{
    // Our base case
    if (n == 0)
    {
        return;
    }
    // Print the number
    printf("%d\n", n);

    // Call countdown for n-1
    countdown(n - 1);
}

int main()
{
    // Get the number and call the function
    int n;
    scanf("%d", &n);

    countdown(n);
    return 0;
}
