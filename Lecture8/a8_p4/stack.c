/*
    CH-230-A
    stack.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>

// Pushes a value onto the stack. Checks for a stack overflow.
void push(struct stack *stack, int value)
{
    if (stack->count == 12)
    {
        printf("Pushing Stack Overflow\n");
        return;
    }
    stack->array[stack->count] = value;
    stack->count++;
}

// Pops a value from the stack. Checks for a stack underflow.
int pop(struct stack *stack)
{
    if (stack->count <= 0)
    {
        return -1;
    }
    int head = stack->array[stack->count - 1];
    stack->array[stack->count - 1] = 0;
    stack->count--;
    return head;
}

// Empties the stack by going backwards and popping each element.
void empty(struct stack *stack)
{
    for (int i = stack->count - 1; i >= 0; i--)
    {
        printf("%d ", stack->array[i]);
        stack->array[i] = 0;
    }
    stack->count = 0;
}

// Checks if the stack has no elements by checking if the count is zero.
int isEmpty(struct stack *stack)
{
    return stack->count == 0;
}