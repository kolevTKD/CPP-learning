#include <iostream>

using namespace std;

int main()
{
    int numsCount, num, total = 0;
    cin >> numsCount;

    for (int i = 1; i <= numsCount; i++)
    {
        cin >> num;
        total += num;
    }

    cout << total << endl;

    return 0;
}
