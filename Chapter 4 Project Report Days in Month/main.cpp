#include <iostream>
using namespace std;

int main() {
	int month, year;
	int daysInMonth; // Variable to store the number of days in the month
	bool leapYear; // Variable to determine if the year is a leap year

	// Prompt the user for input month
	cout << "Enter month (1-12): ";
	cin >> month;

	// Prompt the user for input year
	cout << "Enter year: ";
	cin >> year;

	//Determine if the year is a leap year
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		leapYear = true;
	} else {
		leapYear = false;
	}
	// Determine the number of days in the month
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		daysInMonth = 31;
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
		daysInMonth = 30;
	} else if (month == 2) {
		if (leapYear) {
			daysInMonth = 29;
		} else {
			daysInMonth = 28;
		}
	} else {
		cout << "Invalid month entered." << endl;
		return 1; // Exit with an error code
	}
	// Output the number of days in the month
	cout << "Number of days in month " << month << " of year " << year << ": " << daysInMonth << endl;
}