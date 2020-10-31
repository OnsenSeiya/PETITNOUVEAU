
#include <stdio.h>
#include "linkedlist_simple.h"



List *list_init(){
	return NULL;
}

List *list_add(List *list, int data){
	List *lnew = (List *)malloc(sizeof(List));