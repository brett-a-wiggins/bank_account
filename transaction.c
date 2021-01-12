#include "transaction.h"
#include <stdio.h>

void print_transaction(struct transaction *transaction_entry)
{
					printf("\n");
					printf("Transaction Number: %d\n", transaction_entry->transaction_number);
					printf("Transaction Date:  %d-%d-%d",transaction_entry->transaction_date->tm_year, transaction_entry->transaction_date->tm_mon+1, transaction_entry->transaction_date->tm_mday);
					printf("Transaction Description: %s\n", transaction_entry->transaction_description);
					printf("Transaction category: %s\n", transaction_entry->transaction_category);
					printf("Transaction amount: %lf\n", transaction_entry->transaction_amount);
					printf("\n");
}