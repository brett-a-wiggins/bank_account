#include <stdio.h>
#include <stdlib.h>
#include "account.h"
#include "transaction.h"



void update_account_number(struct account *acct)
{
	int new_acct_num;
	printf("Please enter a new account number: ");
	scanf("%d",&new_acct_num);
	acct->account_number = new_acct_num;
	printf("Account number updated.\n");
}

void update_account_bsb(struct account *acct)
{
	int new_acct_bsb;
	printf("Please enter new account BSB: ");
	scanf("%d",&new_acct_bsb);
	acct->account_bsb = new_acct_bsb;
	printf("BSB updated\n");
}

void update_balance(struct account *acct)
{
	double new_acct_balance;
	printf("Please enter a new account balance: ");
	scanf("%lf", &new_acct_balance);
	acct->account_balance = new_acct_balance;
	printf("Account balance updated\n");
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
				
					print_transaction(listptr->transaction_entry);
				
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

struct account *create_new_account(void)
{
	struct account *new_account;
	int account_number;
	int account_bsb;
	double account_balance;

	printf("Please enter the account number: ");
	scanf("%d", &account_number);
	printf("Please enter the account BSB: ");
	scanf("%d", &account_bsb);
	printf("Please enter the opening balance: ");
	scanf("%lf", &account_balance);
	new_account = (struct account *) malloc(sizeof(struct account));

	new_account->account_number = account_number;
	new_account->account_bsb = account_bsb;
	new_account->account_balance = account_balance;
	new_account->transactions = (LISTNODE *) malloc(sizeof(LISTNODE));

	return new_account;

}
void delete_account(struct account *acct)
{
	free(acct);
	printf("Account deleted.\n");

}