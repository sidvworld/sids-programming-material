/* This program defines a structure for a bank account and includes a 
 * function to update the balance of the account by adding the annual interest. 
 * The program initializes an array of bank accounts, updates each account's balance, 
 * and prints the updated account information.
 * 
 * struct bank_account
 * - int acct_number: the bank account number
 * - double balance: current balance
 * - double interest: annual interest rate as a decimal (e.g., 2.5% is 0.025)
 *
 * void update_account(struct bank_account *account)
 * - Description: Updates the balance of the given bank account by adding the 
 *           annual interest.
 * - Parameters: struct bank_account *account - pointer to the bank account to be updated
 * 
 * 	Siddharth Ghosh - July 12 2024
 */

#include <stdio.h>

struct bank_account{
	int acct_number;
	double balance;
	double interest;
};

void update_account(struct bank_account *account){
	account->balance += account->balance * account->interest;
}

int main (void) {
	
	struct bank_account account_list[] = {
        {10907, 2000.00, 0.015},
        {47112, 5372.25, 0.024},
        {87435, 1800.00, 0.030}
    };
	
	printf("Account #\tBalance\n---------\t-------\n");
	
	for (int i = 0; i < 3; i++){
		update_account(&account_list[i]);
		printf("%i\t\t%.2f\n", account_list[i].acct_number, account_list[i].balance);
	}
	
	return 0;
}
