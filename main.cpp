// Exercise 4.16
#include <iostream>

using namespace std;

int main() {
	int counter{1};
	int largest{0};

	while (counter <= 10) {
		cout << "Enter #" << counter++ << ": ";
		int number{};
		cin >> number;
		if (number > largest) {
			largest = number;
		}
	}
	cout << "The largest number was " << largest << '\n';

	return 0;
}