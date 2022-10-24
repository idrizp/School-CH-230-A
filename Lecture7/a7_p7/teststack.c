/*
    CH-230-A
    teststack.c - a7_p7.c
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
    while (1)
    {
        char mode;
        scanf(" %c", &mode);
        switch (mode)
        {
        case 's': {
            // Pushes onto the stack.
            int x;
            scanf(" %d", &x);

            push(&stack, x);
            break;
        }
        case 'p': {
            // Pops from the stack.
            pop(&stack);
            break;
        }
        case 'e':
            // Empties the stack.
            empty(&stack);
            break;
        case 'q':
            // Quits the program.
            printf("Quit\n");
            return 0;
        }
    }
    return 0;
}