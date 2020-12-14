#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "transaction_list.h"

struct account{
	int account_number;
	int account_bsb;
	double account_balance;
	LISTNODE *transactions;
};

int update_account_number(struct account *acct);
int update_account_bsb(struct account *acct);
double update_balance(struct account *acct);

void print_account_number(struct account *acct);
void print_bsb(struct account *acct);
void print_balance(struct account *acct);
void print_transactions(struct account *acct);

struct account *new_account(void);
void delete_account(struct account *acct);
#endif