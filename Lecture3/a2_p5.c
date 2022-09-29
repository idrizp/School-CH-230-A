/*
    CH-230-A
    a2_p5.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    // Define and scan the integer variable from the user input.
    int a;
    scanf("%d", &a);
    printf("a=%d\n", a);

    // Declare and print the pointer of the variable a.
    int *ptr_a = &a;
    printf("address=%p\n", ptr_a);

    // Increment a by five by using pointer dereferencing.
    *ptr_a += 5;
    printf("modified a=%d\n", a);

    // Print the address to prove that it has not changed.
    printf("address=%p\n", &a);

    return 0;
}