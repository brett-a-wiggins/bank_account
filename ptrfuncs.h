#ifndef PTRFUNCS_H
#define PTRFUNCS_H

/* Code taken from 'Joy of C. Programming in C second edition' - Miller, Quilici*/

enum status {UPDATE, CREATE}; /* controls whether update function 
									creates or updates list node */

typedef int (*CMP_FPTR)(const void *, const void *); /* comparison*/
typedef void (*ACT_FPTR)(void *); /* action */
typedef void *(*UPD_FPTR)(void *, enum status);
#endif