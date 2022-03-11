// Exercise 4.13
#include <iostream>

using namespace std;

int main() {
	int accountNumber{0};
	cout << "Enter account number (-1 to quit): ";
	cin >> accountNumber;

	while( accountNumber >= 0) {
		cout << "Enter beginning balance: ";
		double beginningBalance{};
		cin >> beginningBalance;
		cout << "Enter total charges: ";
		double totalCharges{};
		cin >> totalCharges;
		cout << "Enter total credits: ";
		double totalCredits{};
		cin >> totalCredits;
		cout << "Enter credit limit: ";
		double creditLimit{};
		cin >> creditLimit;
		double balance{beginningBalance + totalCharges - totalCredits};
		cout << "New balance is " << balance << '\n';
		cout << "Account:       " << accountNumber << '\n';
		cout << "Credit limit:  " << creditLimit << '\n';
		cout << "Balance:       " << balance << '\n';
		if (balance > creditLimit) {
			cout << "Credit limit exceeded." << '\n';
		} else {
			cout << "New balance is " << balance << '\n';
		}
		cout << "Enter account number (-1 to quit): ";
		cin >> accountNumber;
	}
	return 0;
}