
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
    h->tail = NULL;
    return h;
}

void queue_enqueue(Queue *q, int elem){
    List *lnew = (List *) malloc(sizeof(List));
    lnew->data = elem;
    lnew->next = NULL;

	if (q->head == NULL){
		q->head = lnew;
	}
	else if(q->tail == NULL){
		q->head->next = lnew;
		q->tail = lnew;
	}
	else{
		List *prevtail = q->tail;
		prevtail->next = lnew;
		q->tail = lnew;
	}
}