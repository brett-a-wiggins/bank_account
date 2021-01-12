#ifndef ACCOUNT_LIST_H
#define ACCOUNT_LIST_H

struct account_list *head;
struct account_list *current_node;
struct account_list *new_node;

struct account_list{
	struct account *acct;
	struct account_list *next_account;
};


struct account_list *create_new_account_list(void);
void delete_account_list(struct account_list *);
void new_account_node(struct account_list *);

#endif
