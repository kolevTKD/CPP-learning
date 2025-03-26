#include <iostream>

using namespace std;

int main()
{
    double dogFoodPrice, catFoodPrice;
    dogFoodPrice = 2.50;
    catFoodPrice = 4.00;

    int dogFoodPackages, catFoodPackages;

    cin >> dogFoodPackages;
    cin >> catFoodPackages;

    double totalDogFood, totalCatFood, totalAll;
    totalDogFood = dogFoodPackages * dogFoodPrice;
    totalCatFood = catFoodPackages * catFoodPrice;

    totalAll = totalDogFood + totalCatFood;

    cout << totalAll << " lv." << endl;

    return 0;
}
