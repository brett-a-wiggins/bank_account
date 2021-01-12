#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include "account_list.h"

void print_menu(void);
void open_new_bank_account(struct account_list *);
void list_accounts(struct account_list *);
void display_transactions(struct account_list *);
#endif