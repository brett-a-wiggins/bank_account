#ifndef TRANSACTION_LIST_H
#define TRANSACTION_LIST_H

/* Code taken from 'Joy of C. Programming in C second edition' - Miller, Quilici*/

typedef struct listnode{
	struct transaction *transaction_entry;
	struct listnode *nextptr;
}LISTNODE;

LISTNODE *ln_create(struct transaction *dataptr, LISTNODE *nodeptr);
void ln_destroy(LISTNODE *nodeptr);
#endif