#include <iostream>

using namespace std;

int main()
{
    double pensPackPrice = 5.80;
    double markersPackPrice = 7.20;
    double detergentPerLiterPrice = 1.20;

    int penPacksCount, markerPacksCount, detergentQty;
    double discountPercentage;

    cin >> penPacksCount;
    cin >> markerPacksCount;
    cin >> detergentQty;
    cin >> discountPercentage;
    discountPercentage /= 100;

    double pensTotal = penPacksCount * pensPackPrice;
    double markersTotal = markerPacksCount * markersPackPrice;
    double detergentTotal = detergentQty * detergentPerLiterPrice;

    double subTotal = pensTotal + markersTotal + detergentTotal;
    double total = subTotal - subTotal * discountPercentage;

    cout << total << endl;

    return 0;
}
