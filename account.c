#include <stdio.h>
#include <stdlib.h>
#include "account.h"
#include "transaction.h"



int update_account_number(struct account *acct)
{
	return 0;
}

int update_account_bsb(struct account *acct)
{
	return 0;
}

double update_balance(struct account *acct)
{
	return 0.0;
}

void print_account_number(struct account *acct)
{
	if(acct != NULL)
	{
		printf("Account Number is: %d\n", acct->account_number);
	}
	else
	{
		printf("Error: account is NULL\n");
	}
}

void print_bsb(struct account *acct)
{
	if(acct != NULL)
	{
		printf("BSB Number is: %d\n", acct->account_bsb);
	}
	else
	{
		printf("Error: account is NULL\n");
	}
}

void print_balance(struct account *acct)
{
	if(acct != NULL)
	{
		printf("Account Balance is: %f\n", acct->account_balance);
	}
	else
	{
		printf("Error: account is NULL\n");
	}
}

void print_transactions(struct account *acct)
{
	LISTNODE *listptr;
	if(acct != NULL)
	{
		if(acct->transactions != NULL)
		{
			listptr = acct->transactions;
			while(listptr != NULL)
			{
				
					printf("\n");
					printf("Transaction Number: %d\n", listptr->transaction_entry->transaction_number);
					printf("Transaction Date:  %d-%d-%d",listptr->transaction_entry->transaction_date->tm_year, listptr->transaction_entry->transaction_date->tm_mon+1, listptr->transaction_entry->transaction_date->tm_mday);
					printf("Transaction Description: %s\n", listptr->transaction_entry->transaction_description);
					printf("Transaction category: %s\n", listptr->transaction_entry->transaction_category);
					printf("Transaction amount: %lf\n", listptr->transaction_entry->transaction_amount);
					printf("\n");
				
					listptr = listptr->nextptr;
			}
		}
		else
		{
			printf("There are no transactions on this account.\n");
		}
	}
	else
	{
		printf("Error: account is NULL\n");
	}
}

struct account *new_account(void)
{
	return NULL;

}
void delete_account(struct account *acct)
{
	free(acct);
	printf("Account deleted.\n");

}