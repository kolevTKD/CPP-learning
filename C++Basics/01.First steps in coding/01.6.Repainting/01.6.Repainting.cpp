#include <iostream>

using namespace std;

int main()
{
    double protectiveNylonSqMPrice = 1.50;
    double paintPerLiterPrice = 14.50;
    double paintThinnerLiterPrice = 5.00;

    int neededNylonSqM, neededPaintLiters, neededPaintThinnerLiters, neededHours;

    cin >> neededNylonSqM;
    cin >> neededPaintLiters;
    cin >> neededPaintThinnerLiters;
    cin >> neededHours;

    double nylonTotal = (neededNylonSqM + 2) * protectiveNylonSqMPrice;
    double paintTotal = (neededPaintLiters + neededPaintLiters * 0.1) * paintPerLiterPrice;
    double paintThinnerTotal = neededPaintThinnerLiters * paintThinnerLiterPrice;

    double totalForMaterials = nylonTotal + paintTotal + paintThinnerTotal + 0.40;
    double totalForWorkers = (totalForMaterials * 0.3) * neededHours;

    double totalExpenses = totalForMaterials + totalForWorkers;

    cout << totalExpenses << endl;

    return 0;
}