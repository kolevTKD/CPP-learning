#include <iostream>

using namespace std;

int main()
{
    int budget, fishermen;
    string season;

    cin >> budget >> season >> fishermen;

    double seasonalRent;
    double discount;

    if (season == "Spring")
        seasonalRent = 3000;

    else if (season == "Summer" || season == "Autumn")
        seasonalRent = 4200;

    else if (season == "Winter")
        seasonalRent = 2600;

    if (fishermen <= 6)
        discount = 0.1;

    else if (fishermen >= 7 && fishermen <= 11)
        discount = 0.15;

    else if (fishermen >= 12)
        discount = 0.25;

    double total = seasonalRent * (1 - discount);

    if (fishermen % 2 == 0 && season != "Autumn")
        total -= total * 0.05;

    bool isEnough = budget >= total;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (isEnough)
        cout << "Yes! You have " << budget - total << " leva left." << endl;

    else
        cout << "Not enough money! You need " << total - budget << " leva." << endl;

    return 0;
}
