#include <stdio.h>
#include <stdlib.h>
#include "account.h"
#include "lists.h"
#include "bank_account.h"

int main(void)
{	
	struct account *new_account;
	new_account = create_new_account();
	
	return EXIT_SUCCESS;
}