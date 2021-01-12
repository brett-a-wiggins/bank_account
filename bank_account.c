#include <stdio.h>
#include <stdlib.h>
#include "account.h"
#include "lists.h"
#include "bank_account.h"
#include "account_list.h"

int main(void)
{	
	struct account_list *acct_list = create_new_account_list();
	head = acct_list;

	int selection;
	do{
		printf("Bank Account Program\n");
		printf("----------------------\n");
		printf("1. Open new account.\n");
		printf("2. List accounts.\n");
		printf("3. List transactions.\n");
		printf("4. Quit.\n");
		printf("> ");
		scanf("%d",&selection);
		switch(selection)
		{
			case 1:
				open_new_bank_account(head);
				break;
			case 2:
				list_accounts(head);
				break;
			case 3:
				display_transactions(head);
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
	new_account_node(acct_list);
}

void list_accounts(struct account_list *list_node)
{

	printf("Active accounts.\n");
	printf("----------------\n");
	while(list_node != NULL)
	{

		print_account_number(list_node->acct);
		list_node = list_node->next_account;
	}
}

void display_transactions(struct account_list *acct_list)
{

}