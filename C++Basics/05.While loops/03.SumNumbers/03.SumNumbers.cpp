#include <iostream>

using namespace std;

int main()
{
    int target, sum = 0, num;
    cin >> target;

    while (sum < target)
    {
        cin >> num;
        sum += num;
    }

    cout << sum << endl;

    return 0;
}