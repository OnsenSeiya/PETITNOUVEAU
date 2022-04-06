#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

struct Stack_ {
    int size;
    int elems[50];
};

Stack *stack_init(){
    Stack *s = (Stack *) malloc(sizeof(Stack));
    s->size = 0;
    return s;
}

void stack_push(Stack *s, int elem){
    s->elems[s->size++]