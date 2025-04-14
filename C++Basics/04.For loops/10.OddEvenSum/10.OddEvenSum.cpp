#include <iostream>

using namespace std;

int main()
{
    int numsCount, num, evenSum = 0, oddSum = 0;
    cin >> numsCount;

    for (int i = 1; i <= numsCount; i++)
    {
        cin >> num;

        if (i % 2 == 0)
            evenSum += num;

        else
            oddSum += num;
    }

    int diff = abs(evenSum - oddSum);

    if (diff == 0)
        cout << "Yes\nSum = " << evenSum << endl;

    else
        cout << "No\nDiff = " << diff << endl;

    return 0;
}
