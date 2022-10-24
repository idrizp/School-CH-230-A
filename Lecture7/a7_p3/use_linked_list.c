/*
    CH-230-A
    a7_p3.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "linked_list.h"
#include <stdio.h>

int main()
{
    struct node *list = NULL;
    while (1)
    {
        char mode;
        scanf(" %c", &mode);
        switch (mode)
        {
        case 'a': {
            // Append
            int n;
            scanf("%d", &n);
            list = append(list, n);
            break;
        }
        case 'b': {
            // Push to the front
            int n;
            scanf("%d", &n);
            list = push_front(list, n);
            break;
        }
        case 'r':
            if (list == NULL)
            {
                break;
            }
            // Remove the first element
            list = remove_first(list);
            break;
        case 'p':
            // Print the elements
            print_list(list);
            break;
        case 'q':
            // Frees the list
            free_list(list);
            return 0;
        }
    }
    return 0;
}