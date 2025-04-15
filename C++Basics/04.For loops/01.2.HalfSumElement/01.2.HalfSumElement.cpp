#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int numsCount, num, sum = 0;
    cin >> numsCount;

    int max = INT_MIN;

    for (int i = 0; i < numsCount; i++)
    {
        cin >> num;
        sum += num;

        if (num > max)
            max = num;
    }

    int diff = abs(max - (sum - max));

    if (max == sum - max)
        cout << "Yes\nSum = " << max << endl;

    else
        cout << "No\nDiff = " << diff << endl;

    return 0;
}
