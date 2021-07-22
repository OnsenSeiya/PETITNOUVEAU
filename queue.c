
#include <stdlib.h>
#include <stdio.h>
#include "queue.h"
#include "linkedlist_simple.h"

struct Queue_ {
    List *head;
    List *tail;