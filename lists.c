#include "lists.h"

/* Code taken from 'Joy of C. Programming in C second edition' - Miller, Quilici*/


LIST list_create(void)
{
	return NULL;
}

void list_traverse(LIST list, ACT_FPTR actfptr)
{
	LISTNODE *curr;

	for(curr = list; curr != NULL; curr = curr->nextptr)
		actfptr(curr->transaction_entry);
}

LIST list_insert(LIST list, void *target, CMP_FPTR cmpfptr)
{
	LISTNODE *nptr;
	LISTNODE *curr = list;
	LISTNODE *prev = NULL;

	for( ; curr != NULL; prev = curr, curr = curr->nextptr)
	{
		if(cmpfptr(curr->transaction_entry, target) > 0)
			break;
	}
	nptr = ln_create(target, curr);
	if(prev == NULL)
		list = nptr;			/* insert at front*/	
	else					
		prev->nextptr = nptr;	/* insert in middle or end */
	return list;				/* return updated list*/
}

void list_destroy(LIST list)
{
	LISTNODE *curr = list;
	LISTNODE *temp;

	for( ; curr != NULL; curr = temp)
	{
		temp = curr->nextptr;
		ln_destroy(curr);
	}
}
