#include <iostream>

using namespace std;

int main()
{
	double movieBudget, extraClothingCost;
	int extrasCount;

	cin >> movieBudget >> extrasCount >> extraClothingCost;

	double decorCost = movieBudget * 0.1;
	double clothingCost = extrasCount * extraClothingCost;

	if (extrasCount > 150)
		clothingCost -= clothingCost * 0.1;

	double movieTotal = decorCost + clothingCost;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (movieBudget >= movieTotal)
		cout << "Action!\nWingard starts filming with " << movieBudget - movieTotal << " leva left." << endl;

	else if (movieTotal > movieBudget)
		cout << "Not enough money!\nWingard needs " << movieTotal - movieBudget << " leva more." << endl;

	return 0;
}
