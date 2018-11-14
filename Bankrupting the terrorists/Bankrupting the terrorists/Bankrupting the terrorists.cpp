#include <iostream>
using namespace std;

void normalTransaction(int account1, int account2);
void hackedTransaction(int& account1, int& account2);
void displayAccounts(int& account1, int& account2);

int main()
{
	int myAccount = 200; //Initial value for my account.
	int terroristAccount = 10000000; //Initial value for the terrorist account.
	displayAccounts(myAccount, terroristAccount);
	normalTransaction(myAccount, terroristAccount); //Perform the unsucessfu1 transaction.
	displayAccounts(myAccount, terroristAccount);
	hackedTransaction(myAccount, terroristAccount); //Perform the successful transaction.
	displayAccounts(myAccount, terroristAccount);
	system("pause");
	return 0;
}
void normalTransaction(int account1, int account2) //Temporarily swaps the 2accounts.  Creates 2 local variables, account1 and account2.
{
	cout << "Initiating normal transaction. \n\n";
	//Swap the value of the 1ocal variables accountl and account2.
	int accountTemp = account1;
	account1 = account2;
	account2 = accountTemp;
	return;//Local variables, account1 and account2 cease to exist. No change to the accounts in main).  Unsuccessful Swap.
}

void hackedTransaction(int& account1, int& account2) //create a reference to the accounts passed to the function.
{
	cout << "Initiating hacked transaction. \n\n";
	// Swap the value of the 2 accounts that were passed to the function.
	int accountTemp = account1;
	account1 = account2;
	account2 = accountTemp;
	return; //Returns no value.  The references, account1 and account2 cease to exist, but the accounts they were referencing have changed in main).  Successful swap
}
void displayAccounts(int& myAccount, int& terroristAccount) //display the value of myAccount and terroristAccount.
{
	cout << "myAccount: $" << myAccount << endl;
	cout << "terroristAccount: S" << terroristAccount << "\n\n";
	return;
}




