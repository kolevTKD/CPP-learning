#include <iostream>

using namespace std;

int main()
{
	double budget, forSpending;
	string season, destination, site;

	cin >> budget >> season;

	if (budget <= 100) {

		destination = "Bulgaria";

		if (season == "summer") {

			site = "Camp";
			forSpending = budget * 0.3;
		}

		else if (season == "winter") {

			site = "Hotel";
			forSpending = budget * 0.7;
		}
	}

	else if (budget > 100 && budget <= 1000) {

		destination = "Balkans";

		if (season == "summer") {

			site = "Camp";
			forSpending = budget * 0.4;
		}

		else if (season == "winter") {

			site = "Hotel";
			forSpending = budget * 0.8;
		}
	}

	else if (budget > 1000) {

		destination = "Europe";
		site = "Hotel";
		forSpending = budget * 0.9;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Somewhere in " << destination << endl;
	cout << site << " - " << forSpending << endl;

	return 0;
}
