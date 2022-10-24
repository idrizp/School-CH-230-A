
#include "linked_list.h"

#include <stdio.h>
#include <stdlib.h>

// Print the list
void print_list(struct node *list)
{
    struct node *curr = list;
    while (curr != NULL)
    {
        printf("%d ", curr->value);
        curr = curr->next;
    }
    printf("\n");
}

// Removes the first element from the list
struct node *remove_first(struct node *list)
{
    struct node *next = list->next;
    free(list);
    return next;
}

struct node *push_front(struct node *list, int value)
{
    // Creates a new element.
    struct node *element;
    element = (struct node *)malloc(sizeof(struct node));
    if (element == NULL)
    {
        printf("Couldn't allocate enough memory for node.");
        exit(1);
    }
    element->value = value;
    element->next = list;
    return element;
}

struct node *append(struct node *list, int value)
{
    // Creates two pointers to nodes, a cursor and an element.
    struct node *cursor, *element;
    cursor = list;

    // The element is allocated and value is set.
    element = (struct node *)malloc(sizeof(struct node));
    if (element == NULL)
    {
        printf("Couldn't allocate enough memory for node.");
        exit(1);
    }

    element->value = value;
    element->next = NULL;

    // If there is no cursor, our list is the element alone.
    if (cursor == NULL)
    {
        return element;
    }

    // Keep going until we reach the last element.
    while (cursor->next != NULL)
    {
        cursor = cursor->next;
    }
    // Set the cursor's next element to be our element.
    cursor->next = element;
    return list;
}

void free_list(struct node *list)
{
    // Continuously deallocates the list.
    struct node *next;
    while (list != NULL)
    {
        next = list->next;
        free(list);
        list = next;
    }
}