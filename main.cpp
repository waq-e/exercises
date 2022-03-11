// Exercise 4.16
#include <iostream>

using namespace std;

int main() {
	int counter{1};
	int largest{0};
	cout << "N\t5*N\t10*N\t15*N\n";

	while (counter <= 12) {
		cout << counter << '\t' << counter * 5 << '\t' << counter * 10
				<< "\t\t" << counter * 15 << '\n';
		counter++;
	}

	return 0;
}