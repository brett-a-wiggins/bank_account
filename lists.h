#ifndef LISTS_H
#define LISTS_H
#include "transaction_list.h"
#include "ptrfuncs.h"

/* Code taken from 'Joy of C. Programming in C second edition' - Miller, Quilici*/

typedef LISTNODE *LIST;

LIST list_create(void);
void list_traverse(LIST l, ACT_FPTR action);
LIST list_insert(LIST l, void *dataptr, CMP_FPTR cmp);
void list_destroy(LIST l);
LIST list_update(LIST l, void *dataptr, CMP_FPTR cmp, UPD_FPTR upd);



#endif