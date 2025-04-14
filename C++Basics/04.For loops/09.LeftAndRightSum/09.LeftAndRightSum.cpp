#include <iostream>

using namespace std;

int main()
{
    int numsCount, num, leftSum = 0, rightSum = 0;
    cin >> numsCount;

    for (int i = 1; i <= numsCount * 2; i++)
    {
        cin >> num;

        if (i <= numsCount)
            leftSum += num;

        else
            rightSum += num;
    }

    int diff = abs(leftSum - rightSum);

    if (diff == 0)
        cout << "Yes, sum = " << leftSum << endl;

    else
        cout << "No, diff = " << diff << endl;

    return 0;
}
