
#include <stdlib.h>
#include <stdio.h>
#include "queue.h"
#include "linkedlist_simple.h"

struct Queue_ {
    List *head;
    List *tail;
};

Queue *queue_init(){
	Queue *h = (Queue *)malloc(sizeof(Queue));
    h->head = NULL;