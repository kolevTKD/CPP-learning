#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int min = INT_MAX;
    int max = INT_MIN;

    int numsCount, num;
    cin >> numsCount;

    for (int i = 1; i <= numsCount; i++)
    {
        cin >> num;

        if (num < min)
            min = num;

        if (num > max)
            max = num;
    }

    cout << "Max number: " << max << endl;
    cout << "Min number: " << min << endl;

    return 0;
}
