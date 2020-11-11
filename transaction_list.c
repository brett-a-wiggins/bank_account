#include "transaction_list.h"
#include <stdlib.h>
/* Code taken from 'Joy of C. Programming in C second edition' - Miller, Quilici*/

LISTNODE *ln_create(struct transaction *dataptr, LISTNODE *nodeptr)
{
	LISTNODE *nptr = malloc(sizeof(LISTNODE));

	if(nptr != NULL)
	{
		nptr->transaction_entry = dataptr;
		nptr->nextptr = nodeptr;
	}
	return nptr;
}

void ln_destroy(LISTNODE *nptr)
{
	free(nptr);
}