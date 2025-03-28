#include <iostream>

using namespace std;

int main()
{
    float depositSum, yearsInterestPercenatge;
    int depositTerm;

    cin >> depositSum;
    cin >> depositTerm;
    cin >> yearsInterestPercenatge;

    float totalInterest = depositSum * (yearsInterestPercenatge / 100);
    float monthlyInterest = totalInterest / 12;
    float totalSum = depositSum + depositTerm * monthlyInterest;

    cout << totalSum << endl;

    return 0;
}
