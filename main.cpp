// Fig. 3.9: AccountTest.cpp
// Displaying and updating Account balances.
#include <iostream>
#include "Account.h"

// 3.13 (Removing Duplicated Code in the main Function) In Fig. 3.9, the main function
// contains six statements (lines 14–15, 16–17, 26–27, 28–29, 37–38 and 39–40) that
// each display an Account object’s name and balance. Study these statements and you’ll
// notice that they differ only in the Account object being manipulated—account1 or
// account2. In this exercise, you’ll define a new displayAccount function that contains
// one copy of that output statement. The member function’s parameter will be an Account
// object and the member function will output the object’s name and balance. You’ll then
// replace the six duplicated statements in main with calls to displayAccount, passing
// as an argument the specific Account object to output.

// Modify Fig. 3.9 to define the following displayAccount function after the using directive and
// before main:

// void displayAccount(Account accountToDisplay) {
//    // place the statement that displays
//    // accountToDisplay's name and balance here
// }

// Replace the comment in the member function’s body with a statement that displays
// accountToDisplay’s name and balance.
// Once you’ve completed displayAccount’s declaration, modify main to replace the
// statements that display each Account’s name and balance with calls to
// displayAccount of the form:

// displayAccount(nameOfAccountObject);

// In each call, the argument should be the account1 or account2 object, as appropriate.
// Then, test the updated program to ensure that it produces the same output as shown
// in Fig. 3.9.

using namespace std;

// display account function
void displayAccount(Account a) {
	std::cout << "account: " << a.getName() << " balance is $"
	          << a.getBalance() << '\n';
}

int main()
{
	Account account1{"Jane Green", 50};
	Account account2{"John Blue", -7};

	// display balances
	account1.displayAccount();
	account2.displayAccount();

	cout << "Enter deposit amount for account1: "; // prompt
	int depositAmount;
	cin >> depositAmount; // obtain user input
	cout << "adding " << depositAmount << " to account1 balance" << '\n';
	account1.deposit(depositAmount); // add to account1's balance

	// display balances
	displayAccount(account1);
	displayAccount(account2);

	cout << "Enter deposit amount for account2: "; // prompt
	cin >> depositAmount; // obtain user input
	cout << "adding " << depositAmount << " to account2 balance" << '\n';
	account2.deposit(depositAmount); // add to account2 balance

	// display balances
	account1.displayAccount(account1);
	account2.displayAccount(account2);
}