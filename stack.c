#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

struct Stack_ {
    int size;
    int elems[50];
};

Stack *stack_init(){
    Stack *s = (Stack