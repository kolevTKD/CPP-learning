#include <iostream>

using namespace std;

int main()
{
    int annualFee;
    cin >> annualFee;

    double sneakersTotal = annualFee - annualFee * 0.4;
    double equipmentTotal = sneakersTotal - sneakersTotal * 0.2;
    double basketballTotal = equipmentTotal * 0.25;
    double accessoariesTotal = basketballTotal * 0.2;

    double total = annualFee + sneakersTotal + equipmentTotal + basketballTotal + accessoariesTotal;

    cout << total << endl;

    return 0;
}
