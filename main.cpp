// Exercise 4.13
#include <iostream>

using namespace std;

int main() {
	int kiloDriven{0};
	int totalKiloDriven{0};
	int totalLitersUsed{0};
	cout << "Enter kilometers driven (-1 to quit): ";
	cin >> kiloDriven;

	while( kiloDriven >= 0) {
		cout << "Enter liters used: ";
		int litersUsed{};
		cin >> litersUsed;
		totalKiloDriven += kiloDriven;
		totalLitersUsed += litersUsed;
		double thisKms{static_cast<double>(kiloDriven) / static_cast<double>(litersUsed)};
		cout << "Kms per liter this trip: " << thisKms << '\n';
		cout << "Total kms per liter: "
				<< static_cast<double>(totalKiloDriven) / static_cast<double>(totalLitersUsed) << '\n';
		cout << "\nEnter kilometers driven (-1 to quit): ";
		cin >> kiloDriven;

	}
	return 0;
}