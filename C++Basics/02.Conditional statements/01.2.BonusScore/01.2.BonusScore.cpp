#include <iostream>

using namespace std;

int main()
{
	int initPoints;
	cin >> initPoints;
	double bonusPoints = 0;

	if (initPoints <= 100)
		bonusPoints += 5;

	else if (initPoints > 100 && initPoints <= 1000)
		bonusPoints = initPoints * 0.2;

	else if (initPoints > 1000)
		bonusPoints = initPoints * 0.1;

	if (initPoints % 2 == 0)
		bonusPoints += 1;

	else if (initPoints % 10 == 5)
		bonusPoints += 2;

	cout << bonusPoints << endl << initPoints + bonusPoints << endl;

	return 0;
}
