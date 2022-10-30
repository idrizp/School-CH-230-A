/*
    CH-230-A
    convertingstack.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Initializes a stack.
    struct stack stack;
    stack.count = 0;

    unsigned int number;
    scanf("%d", &number);

    printf("The binary representation of %d is: ", number);
    while (number > 0)
    {
        // We push to the stack and integer-divide by two.
        push(&stack, number % 2);
        number /= 2;
    }

    // While we have elements in the stack, pop and print them.
    while (!isEmpty(&stack))
    {
        int n = pop(&stack);
        printf("%d", n);
    }

    printf("\n");
    return 0;
}