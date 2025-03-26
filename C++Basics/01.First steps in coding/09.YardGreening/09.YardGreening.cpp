#include <iostream>

using namespace std;

int main()
{
    double priceSqM, discountFromTotalPercent, yardSqM;
    priceSqM = 7.61;
    discountFromTotalPercent = 0.18;

    cin >> yardSqM;

    double subtotalWithoutDiscount, discountSum, total;

    subtotalWithoutDiscount = yardSqM * priceSqM;
    discountSum = subtotalWithoutDiscount * discountFromTotalPercent;
    total = subtotalWithoutDiscount - discountSum;


    cout << "The final price is: " << total << " lv." << endl;
    cout << "The discount is: " << discountSum << " lv." << endl;
}
