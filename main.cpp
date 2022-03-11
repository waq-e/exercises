// Exercise 4.15
#include <iostream>

using namespace std;

int main() {
	double hoursWorked{0.0};
	cout << "Enter number of hours worked (-1 to quit): ";
	cin >> hoursWorked;

	while( hoursWorked >= 0) {
		double accruedLeave{0.0};
		accruedLeave += 2.0;
		accruedLeave += hoursWorked * 0.10;
		cout << "Accrued leave " << accruedLeave << '\n';
		cout << "Enter number of hours worked (-1 to quit): ";
		cin >> hoursWorked;
	}
	return 0;
}