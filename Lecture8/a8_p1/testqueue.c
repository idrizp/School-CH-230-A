/**
 * @file testqueue.c
 *
 * CH-230-A
 * testqueue.c
 * Idriz Pelaj
 * ipelaj@jacobs-university.de
 */

#include <stdio.h>

#include "queue.h"

int main()
{
    Queue line;
    Item temp;
    char ch;

    initialize_queue(&line);

    while (((ch = getchar()) != EOF) && (ch != 'q'))
    {
        switch (ch)
        {
        case 'a':
            printf("add int: ");
            scanf("%d", &temp);
            if (!queue_is_full(&line))
            {
                printf("Putting %d into queue\n", temp);
                enqueue(temp, &line);
            }
            else
                puts("Queue is full");
            break;

        case 'd':
            if (queue_is_empty(&line))
                puts("Nothing to delete!");
            else
            {
                dequeue(&temp, &line);
                printf("Removing %d from queue\n", temp);
            }
            break;

        default:
            printf("%d items in queue\n", queue_item_count(&line));
            puts("Type a to add, d to delete, q to quit:");
        }
    }
    // For assignment one, this is not needed.
    // empty_queue(&line);
    puts("Bye.");
    return 0;
}
