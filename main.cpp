// Fig. 3.9: AccountTest.cpp
// Displaying and updating Account balances.
#include <iostream>
#include "MotorVehicle.h"

void printMotorVehicl(MotorVehicle m);

using namespace std;

int main()
{
	MotorVehicle m1{"Cadillac", "Black", 355};
	cout << "Enter fuel type for " << m1.getColor() << ' ' << m1.getMake()
	     << " (" << m1.getEngineCapacity() << "):\n";
	std::string fuelType{};
	std::cin >> fuelType;
	m1.setFuelType(fuelType);

	cout << "Enter year of manufacture  " << m1.getColor() << ' ' << m1.getMake()
	     << " (" << m1.getEngineCapacity() << "):\n";
	int yearOfManufacture{};
	std::cin >> yearOfManufacture;
	m1.setYearOfManufacture(yearOfManufacture);
	m1.displayCarDetails();

	return 0;
}
