#include <iostream>

using namespace std;

int main()
{

    double flowerPrice = 0;
    double priceChange = 0;
    double total = 0;

    string flowerType;
    int flowersCount, budget;

    cin >> flowerType >> flowersCount >> budget;

    if (flowerType == "Roses") {

        flowerPrice = 5;
        total = flowersCount * flowerPrice;

        if (flowersCount > 80)
            total -= total * 0.1;
    }

    else if (flowerType == "Dahlias") {
        
        flowerPrice = 3.8;
        total = flowersCount * flowerPrice;

        if (flowersCount > 90)
            total -= total * 0.15;
    }

    else if (flowerType == "Tulips") {
        
        flowerPrice = 2.8;
        total = flowersCount * flowerPrice;

        if (flowersCount > 80)
            total -= total * 0.15;
    }

    else if (flowerType == "Narcissus") {

        flowerPrice = 3;
        total = flowersCount * flowerPrice;

        if (flowersCount < 120)
            total *= 1.15;
    }

    else if (flowerType == "Gladiolus") {

        flowerPrice = 2.5;
        total = flowersCount * flowerPrice;

        if (flowersCount < 80)
            total *= 1.2;
    }

    bool isEnough = budget >= total;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (isEnough)
        cout << "Hey, you have a great garden with " << flowersCount << " " << flowerType << " and " << budget - total << " leva left." << endl;

    else
        cout << "Not enough money, you need " << total - budget << " leva more." << endl;

    return 0;
}
