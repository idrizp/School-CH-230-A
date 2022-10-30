/**
 * @file queue.c
 * CH-230-A
 * queue.c
 * Idriz Pelaj
 * ipelaj@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
    return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    // Check if the queue is full
    if (queue_is_full(pq))
    {
        return -1;
    }

    // Allocate a new node
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->item = item;

    // Check if the queue is empty, in which case we set the front to be
    // the new node
    if (queue_is_empty(pq))
    {
        pq->front = new_node;
    }

    // If we have a rear node, set the current rear node's next element to
    // be the new rear node.
    if (pq->rear != NULL)
    {
        pq->rear->next = new_node;
    }

    // Update the node to be the rear node, update the number of items.
    pq->rear = new_node;
    pq->items = pq->items + 1;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    // Check if the queue is empty
    if (queue_is_empty(pq))
    {
        return -1;
    }

    // Update the pitem pointer to reflect the item of the front of the
    // queue
    Node *front = pq->front;
    *pitem = front->item;

    // If the rear is the same as the front, we can delete the rear
    // entirely
    if (pq->rear == pq->front)
    {
        pq->rear = NULL;
    }

    // Free the memory used by the front of the queue, update the front
    // to point to the next element in the queue.
    pq->front = pq->front->next;
    free(front);
    pq->items = pq->items - 1;
    return 0;
}

void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq))
    {
        dequeue(&dummy, pq);
    }
}
