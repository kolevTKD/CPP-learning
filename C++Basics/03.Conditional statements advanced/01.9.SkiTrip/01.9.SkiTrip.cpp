#include <iostream>
#include <string>

using namespace std;

int main()
{
    int days;
    string roomType, rating;
    double rfopPrice = 18;
    double appPrice = 25;
    double pAppPrice = 35;

    cin >> days;
    cin.ignore();
    getline(cin, roomType);
    cin >> rating;

    int nights = --days;

    double total = 0;

    if (nights < 10) {

        if (roomType == "room for one person")
            total = nights * rfopPrice;

        else if (roomType == "apartment")
            total = nights * appPrice * (1 - 0.3);

        else if (roomType == "president apartment")
            total = nights * pAppPrice * (1 - 0.1);
    }

    else if (nights >= 10 && nights <= 15) {

        if (roomType == "room for one person")
            total = nights * rfopPrice;

        else if (roomType == "apartment")
            total = nights * appPrice * (1 - 0.35);

        else if (roomType == "president apartment")
            total = nights * pAppPrice * (1 - 0.15);
    }

    else if (nights > 15) {

        if (roomType == "room for one person")
            total = nights * rfopPrice;

        else if (roomType == "apartment")
            total = nights * appPrice * (1 - 0.5);

        else if (roomType == "president apartment")
            total = nights * pAppPrice * (1 - 0.2);
    }

    if (rating == "positive")
        total *= 1.25;

    else if (rating == "negative")
        total *= (1 - 0.1);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << total << endl;

    return 0;
}
