#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "transaction_list.h"

struct account{
	int account_number;
	int account_bsb;
	double account_balance;
	struct transaction_list *transactions;
};

#endif