#include <stdio.h>
#include <stdlib.h>
#include "account.h"
#include "lists.h"
#include "bank_account.h"
#include "account_list.h"

int main(void)
{	
	struct account_list *acct_list = create_new_account_list();
	int selection;
	do{
		printf("Bank Account Program\n");
		printf("----------------------");
		printf("1. Open new account.\n");
		printf("2. List accounts.\n");
		printf("3. List transactions.\n");
		printf("4. Quit.\n");
		printf("> ");
		scanf("%d",&selection);
		switch(selection)
		{
			case 1:
				open_new_bank_account(acct_list);
				break;
			case 2:
				list_accounts(acct_list);
				break;
			case 3:
				display_transactions(acct_list);
				break;
			case 4:
				printf("Goodbye.\n");
				break;
		}
	}while(selection != 4);
	
	return EXIT_SUCCESS;
}

void open_new_bank_account(struct account_list *acct_list)
{
	
}