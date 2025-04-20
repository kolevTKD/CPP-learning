#include <iostream>

using namespace std;

int main()
{
    int target, num = 1;
    cin >> target;

    while (num <= target)
    {
        cout << num << endl;
        num = num * 2 + 1;
    }

    return 0;
}
