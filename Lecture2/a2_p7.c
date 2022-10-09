/*
    CH-230-A
    a2_p7.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int i = 8;
    while (i >= 4)
    {
        // To fix the bug, we must indent the code block with brackets so that we decrement the counter.
        printf("i is %d\n", i);
        i--;
    }
    printf("That's it.\n");
    return 0;
}