#include <iostream>

using namespace std;

int main()
{
	string month;
	int nights;
	double studioPrice, appPrice;

	cin >> month >> nights;

	if (month == "May" || month == "October") {

		studioPrice = 50;
		appPrice = 65;

		if (nights > 7 && nights <= 14) 
			studioPrice -= studioPrice * 0.05;

		else if (nights > 14)
			studioPrice -= studioPrice * 0.3;

	}

	else if (month == "June" || month == "September") {

		studioPrice = 75.20;
		appPrice = 68.70;

		if (nights > 14)
			studioPrice -= studioPrice * 0.2;
	}

	else if (month == "July" || month == "August") {

		studioPrice = 76;
		appPrice = 77;
	}

	if (nights > 14)
		appPrice -= appPrice * 0.1;

	//nights++;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Apartment: " << appPrice * nights << " lv." << endl;
	cout << "Studio: " << studioPrice * nights << " lv." << endl;

	return 0;
}
