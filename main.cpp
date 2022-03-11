// Exercise 4.16
#include <iostream>

using namespace std;

int main() {
	double totalFundsRaised{0.0};
	int lapsCompleted{0};
	cout << "Enter laps completed (-1 to quit): ";
	cin >> lapsCompleted;

	while( lapsCompleted >= 0) {
		int bonusLapsStartAt{40};
		double sponsorshipRate{0.0};
		cout << "Enter sponsorship rate: ";
		cin >> sponsorshipRate;
		double lapsBonus{0.0};
	double studentContribution{0.0};
		if (lapsCompleted > bonusLapsStartAt) {
			lapsBonus = (lapsCompleted - bonusLapsStartAt) * 1.5 * sponsorshipRate;
			studentContribution = sponsorshipRate * static_cast<double>(bonusLapsStartAt);
			studentContribution += lapsBonus;
		} else {
			studentContribution = sponsorshipRate * static_cast<double>(lapsCompleted) + lapsBonus;
		}
		totalFundsRaised += studentContribution;
		cout << "Student contribution is: " << studentContribution << '\n';
		cout << "Enter laps completed (-1 to quit): ";
		cin >> lapsCompleted;
	}
	cout << "Total funds raised: " << totalFundsRaised << '\n';
	return 0;
}