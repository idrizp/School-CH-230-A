/*
    CH-230-A
    a7_p2.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Node struct definition
struct node
{
    char value;
    struct node *next;
    struct node *previous;
};

// Inserts the node at the first position.
struct node *insert_node_first(struct node *list, char value)
{
    // Allocates the node.
    struct node *next = (struct node *)malloc(sizeof(struct node));
    if (next == NULL)
    {
        printf("Not enough memory to allocate a node.");
        exit(1);
    }
    // Assigns the value and sets the next to be the list.
    next->value = value;
    next->next = list;

    if (list != NULL)
    {
        // This is a doubly linked list, so we set the previous element of
        // the list to the new element.
        list->previous = next;
    }
    return next;
}

struct node *remove_node_matching(struct node *list, char value)
{
    // We start with the current node, and have a found variable. If the
    // found variable is zero, we know there is no element that matches.
    struct node *curr = list;
    int found = 0;
    while (curr != NULL)
    {
        // If the value doesn't match, skip.
        if (curr->value != value)
        {
            curr = curr->next;
            continue;
        }
        found = 1;

        struct node *next = curr->next;
        struct node *prev = curr->previous;

        // If our provided list is the current element, we update it to be
        // the next one.
        if (list == curr)
        {
            list = next;
        }

        // If there is a previous value, we assign the previous value's
        // next element to be the next element to the current node.
        if (prev != NULL)
        {
            prev->next = next;
        }

        // If the node has a next node, we assign the next node's previous
        // element to be the current node's previous element, therefore
        // completing the link and removing any references to the current
        // node in the list.
        if (next != NULL)
        {
            next->previous = prev;
        }

        free(curr);
        curr = next;
    }

    // If found hasn't been updated, we can print that the element is not
    // in the list.
    if (!found)
    {
        printf("The element is not in the list!\n");
    }
    return list;
}

void print_list(struct node *list)
{
    // Print the list by iterating through the nodes.
    struct node *curr = list;
    while (curr != NULL)
    {
        printf("%c ", curr->value);
        curr = curr->next;
    }
    printf("\n");
}

void print_list_backwards(struct node *list)
{
    // First find the end node, then go backwards.
    struct node *curr = list;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    while (curr != NULL)
    {
        printf("%c ", curr->value);
        curr = curr->previous;
    }
    printf("\n");
}

// Prints and frees the list.
void print_and_free(struct node *list)
{
    struct node *curr = list;
    while (curr != NULL)
    {
        printf("%c ", curr->value);
        struct node *prev = curr;
        curr = curr->next;
        free(prev);
    }
    printf("\n");
}

int main()
{
    // Start with a NULL node.
    struct node *list = NULL;

    // Loop forever in order to keep accepting user input. Scan the mode
    // the user wants to use, and use a switch block with case blocks in
    // order to handle the input.
    while (1)
    {
        int input;
        scanf("%d", &input);
        switch (input)
        {
        case 1: {
            // Inserts the node at the beginning of the list.
            char c;
            scanf(" %c", &c);
            list = insert_node_first(list, c);
            break;
        }
        case 2: {
            // Removes the node matching the character.
            char c;
            scanf(" %c", &c);
            list = remove_node_matching(list, c);
            break;
        }
        case 3: {
            // Prints the list.
            print_list(list);
            break;
        }
        case 4: {
            // Prints the list, but backwards.
            print_list_backwards(list);
            break;
        }
        case 5: {
            // Frees the memory and exits the program.
            print_and_free(list);
            return 0;
        }
        default: {
            printf("Unknown operation provided.\n");
            break;
        }
        }
    }
}
