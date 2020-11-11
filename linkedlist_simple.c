
#include <stdio.h>
#include "linkedlist_simple.h"



List *list_init(){
	return NULL;
}

List *list_add(List *list, int data){
	List *lnew = (List *)malloc(sizeof(List));
	lnew->data = data;
	lnew->next = NULL;

	if (list == NULL)
		return lnew;

	List *llast = list;
	while (llast->next != NULL){
		llast = llast->next;
	}
	llast->next = lnew;
	return list;
}

List *list_remove(List *list, int data){
	if (list == NULL)
		return list;
	if (list->data == data)
		return list->next;
