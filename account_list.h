#ifndef ACCOUNT_LIST_H
#define ACCOUNT_LIST_H

struct account_list{
	struct account *acct;
	struct account_list *next_account;
};



#endif
