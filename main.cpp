// Exercise 4.16
#include <iostream>

using namespace std;

int main() {
	int counter{1};
	int larger{0};
	int largest{0};

	while (counter <= 10) {
		cout << "Enter #" << counter++ << ": ";
		int number{};
		cin >> number;
		if (number > larger && number > largest) {
			larger = largest;
			largest = number;
		}
		if (number > larger && number < largest) {
			larger = number;
		}
	}
	cout << "The larger number was " << larger << '\n';
	cout << "The largest number was " << largest << '\n';

	return 0;
}