#include "account_list.h"
#include "account.h"
#include <stdlib.h>
#include <stdio.h>





struct account_list *create_new_account_list(void)
{
	struct account_list *new_acct_list;
	new_acct_list = (struct account_list *)malloc(sizeof(struct account_list));
	if(new_acct_list != NULL){
		return new_acct_list;
	}
	else
	{
		printf("Error allocating memory for account list.\n");
		return NULL;
	}
}

void new_account_node(struct account_list *acct_list)
{
	
	
	//head = acct_list;

	// current_node = acct_list;
	// current_node = head;
	// while(current_node->next_account != NULL)
	// {
	// 	current_node = current_node->next_account;
	// }
	// new_node = (struct account_list *) malloc(sizeof(struct account_list));
	// new_node->acct = create_new_account();
	// new_node->next_account = NULL;
	// current_node->next_account = new_node;

}

void delete_account_list(struct account_list *acct_list)
{
	free(acct_list);
}