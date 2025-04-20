#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main()
{
    int min = INT_MAX;
    string cmd;
    cin >> cmd;

    int num;

    while (cmd != "Stop")
    {
        num = stoi(cmd);

        if (num < min)
            min = num;

        cin >> cmd;
    }

    cout << min << endl;

    return 0;
}
