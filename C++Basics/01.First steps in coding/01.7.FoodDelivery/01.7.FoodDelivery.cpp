#include <iostream>

using namespace std;

int main()
{
    double chickenMenuPrice = 10.35;
    double fishMenuPrice = 12.40;
    double vegetarianMenuPrice = 8.15;
    double delivery = 2.50;

    int chickenMenusCount, fishMenusCount, vegetarianMenusCount;

    cin >> chickenMenusCount;
    cin >> fishMenusCount;
    cin >> vegetarianMenusCount;

    double chickenMenusTotal = chickenMenusCount * chickenMenuPrice;
    double fishMenusTotal = fishMenusCount * fishMenuPrice;
    double vegetarianMenusTotal = vegetarianMenusCount * vegetarianMenuPrice;

    double subTotal = chickenMenusTotal + fishMenusTotal + vegetarianMenusTotal;

    double dessertPrice = subTotal * 0.2;

    double total = subTotal + dessertPrice + delivery;

    cout << total << endl;

    return 0;
}
