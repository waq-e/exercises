// Exercise 4.22: Mystery3.cpp
#include <iostream>

using namespace std;

int main() {
	cout << "Enter size to make a hollow square of (1-20): ";
	int size{};
	cin >> size;

	for (int row = 0; row < size; row++) {
		for (int column = 0; column < size; column++) {
			if (row == 0 || row == size-1) {
				cout << "*";
			} else {
				if (column == 0 || column == size-1) {
					cout << "*";
				} else {
					cout << " ";
				}
			}
		}
		cout << '\n';
	}

}