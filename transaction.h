#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <time.h>

struct transaction{
	int transaction_number;
	struct tm *transaction_date;
	char *transaction_description;
	char *transaction_category;
	double transaction_amount;
};

struct transaction *new_transaction(void);
void print_transaction(struct transaction*);
#endif