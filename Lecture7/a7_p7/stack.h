#ifndef STACKHEADER_GUARD
#define STACKHEADER_GUARD

struct stack
{
    unsigned int count;
    int array[12];
};

// Pops an element from the stack.
int pop(struct stack *stack);

// Returns if the stack is empty.
int isEmpty(struct stack *stack);

// Pushes an element to the stack.
void push(struct stack *stack, int value);

// Empties a stack.
void empty(struct stack *stack);

#endif
