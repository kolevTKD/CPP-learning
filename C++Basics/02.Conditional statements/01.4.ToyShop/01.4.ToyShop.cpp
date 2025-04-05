#include <iostream>

using namespace std;

int main()
{
    double puzzlePrice = 2.60;
    double dollPrice = 3.0;
    double plushiePrice = 4.10;
    double minionPrice = 8.20;
    double toyTruckPrice = 2.0;

    double tripCost;
    int puzzlesCount, dollsCount, plushiesCount, minionsCount, toyTrucksCount;
    cin >> tripCost >> puzzlesCount >> dollsCount >> plushiesCount >> minionsCount >> toyTrucksCount;

    double puzzlesTotal = puzzlesCount * puzzlePrice;
    double dollsTotal = dollsCount * dollPrice;
    double plushiesTotal = plushiesCount * plushiePrice;
    double minionsTotal = minionsCount * minionPrice;
    double toyTrucksTotal = toyTrucksCount * toyTruckPrice;

    double total = puzzlesTotal + dollsTotal + plushiesTotal + minionsTotal + toyTrucksTotal;
    int toysCount = puzzlesCount + dollsCount + plushiesCount + minionsCount + toyTrucksCount;

    if (toysCount >= 50)
        total -= total * 0.25;

    total -= total * 0.1;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (tripCost > total)
        cout << "Not enough money! " << tripCost - total << " lv needed." << endl;
    else if (total >= tripCost)
        cout << "Yes! " << total - tripCost << " lv left." << endl;

    return 0;
}
