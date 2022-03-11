//
// Date.h created by waqe on 20220310.  &-:
//

#include <iostream>

class Date {
public:
	Date(int m, int d, int y) : month{m}, day{d}, year{y} {
		if (month < 1 || month > 12) {
			month = 1;
		}
	}

	void displayDate() {
		std::cout << month << '/' << day << '/' << year << '\n';
	}

	int getMonth() const {
		return month;
	}

	void setMonth(int month) {
		Date::month = month;
	}

	int getDay() const {
		return day;
	}

	void setDay(int day) {
		Date::day = day;
	}

	int getYear() const {
		return year;
	}

	void setYear(int year) {
		Date::year = year;
	}

private:
	int month{1};
	int day{};
	int year{};
};