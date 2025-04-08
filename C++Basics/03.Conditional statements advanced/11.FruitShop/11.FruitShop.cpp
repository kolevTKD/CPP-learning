#include <iostream>

using namespace std;

int main()
{
	string fruit, weekDay;
	double quantity, price;
	bool validInput = true;

	cin >> fruit >> weekDay >> quantity;

	if (weekDay == "Monday" || weekDay == "Tuesday" || weekDay == "Wednesday" || weekDay == "Thursday" || weekDay == "Friday") {

		if (fruit == "banana")
			price = 2.5;

		else if (fruit == "apple")
			price = 1.2;

		else if (fruit == "orange")
			price = 0.85;

		else if (fruit == "grapefruit")
			price = 1.45;

		else if (fruit == "kiwi")
			price = 2.7;

		else if (fruit == "pineapple")
			price = 5.5;

		else if (fruit == "grapes")
			price = 3.85;

		else {
			validInput = false;
			cout << "error" << endl;
		}

	}

	else if (weekDay == "Saturday" || weekDay == "Sunday") {

		if (fruit == "banana")
			price = 2.7;

		else if (fruit == "apple")
			price = 1.25;

		else if (fruit == "orange")
			price = 0.9;

		else if (fruit == "grapefruit")
			price = 1.6;

		else if (fruit == "kiwi")
			price = 3.0;

		else if (fruit == "pineapple")
			price = 5.6;

		else if (fruit == "grapes")
			price = 4.2;

		else {
			validInput = false;
			cout << "error" << endl;
		}
	}

	else {
		validInput = false;
		cout << "error" << endl;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (validInput)
	cout << quantity * price << endl;

	return 0;
}