#include <iostream>

using namespace std;

int main()
{
    int age, toyPrice, total = 0;
    double washingMachineCost;

    cin >> age >> washingMachineCost >> toyPrice;

    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0)
            total += 10 / 2 * i - 1;

        else
            total += toyPrice;
    }

    double diff = abs(total - washingMachineCost);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (total >= washingMachineCost)
        cout << "Yes! " << diff << endl;

    else
        cout << "No! " << diff << endl;

    return 0;
}