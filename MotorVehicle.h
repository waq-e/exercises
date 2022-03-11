//
// MotorVehicle.h created by waqe on 20220310.  &-:
//

#include <string>
#include <iostream>

class MotorVehicle {
public:
	MotorVehicle(std::string initialMake, std::string initialColor, int initialCapacity)
			: make{initialMake}, color{initialColor}, engineCapacity(initialCapacity) {
		if (engineCapacity < 155) {
			engineCapacity = 155;
		}
	}

	void displayCarDetails() const {
		std::cout << "make: " << make
				<< "\nfuelType: " << fuelType
				<< "\nyearOfManufacture: " << yearOfManufacture
				<< "\ncolor: " << color
				<< "\nengineCapacity: " << engineCapacity << '\n';
	}

	const std::string &getMake() const {
		return make;
	}

	void setMake(const std::string &make) {
		MotorVehicle::make = make;
	}

	const std::string &getFuelType() const {
		return fuelType;
	}

	void setFuelType(const std::string &fuelType) {
		MotorVehicle::fuelType = fuelType;
	}

	int getYearOfManufacture() const {
		return yearOfManufacture;
	}

	void setYearOfManufacture(int yearOfManufacture) {
		MotorVehicle::yearOfManufacture = yearOfManufacture;
	}

	const std::string &getColor() const {
		return color;
	}

	void setColor(const std::string &color) {
		MotorVehicle::color = color;
	}

	int getEngineCapacity() const {
		return engineCapacity;
	}

	void setEngineCapacity(int engineCapacity) {
		MotorVehicle::engineCapacity = engineCapacity;
	}

private:
	std::string make{};
	std::string fuelType{};
	int yearOfManufacture{};
	std::string color{};
	int engineCapacity{};
};