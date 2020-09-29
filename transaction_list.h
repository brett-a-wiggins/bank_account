#ifndef TRANSACTION_LIST_H
#define TRANSACTION_LIST_H

struct transaction_list{
	struct transaction transaction_entry;
	struct transaction_list *next_transaction;
};
#endif