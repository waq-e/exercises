// Exercise 4.22: Mystery3.cpp
#include <iostream>

using namespace std;

int main() {
	cout << "Enter 5 digit integer to test if palindrome: ";
	int number{};
	cin >> number;

	bool outer{(number % 10) == (number / 10000 % 10)};
	bool inner{(number /10 % 10) == (number / 1000 % 10)};
	if (outer && inner) {
		cout << number << " is a palindrome! " << '\n';
	} else {
		cout << number << " isn't palindrome. " << '\n';
	}
}