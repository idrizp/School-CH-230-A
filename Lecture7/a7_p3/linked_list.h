// The linked list header guard
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// The struct definition
struct node
{
    int value;
    struct node *next;
};

// Method definitions

// Prints the linked list
void print_list(struct node *);

// Removes the first element from the linked list
struct node *remove_first(struct node *);

// Pushes the value to the front of the linked list
struct node *push_front(struct node *, int);

// Adds to the end of the linked list
struct node *append(struct node *, int);

// Frees up the memory used by the linked list
void free_list(struct node *);

#endif