#include <iostream>

using namespace std;

int main()
{
	double gpuPrice = 250.0;

	double budget;
	int gpusCount, cpusCount, ramsCount;

	cin >> budget >> gpusCount >> cpusCount >> ramsCount;

	double gpusTotal = gpusCount * gpuPrice;
	double cpusTotal = cpusCount * (gpusTotal * 0.35);
	double ramsTotal = ramsCount * (gpusTotal * 0.1);

	double total = gpusTotal + cpusTotal + ramsTotal;

	if (gpusCount > cpusCount)
		total -= total * 0.15;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= total)
		cout << "You have " << budget - total << " leva left!" << endl;
	else
		cout << "Not enough money! You need " << total - budget << " leva more!" << endl;

	return 0;
}
