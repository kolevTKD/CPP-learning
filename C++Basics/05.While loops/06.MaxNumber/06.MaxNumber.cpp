#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main()
{
    int max = INT_MIN;
    string cmd;
    cin >> cmd;
    int num;

    while (cmd != "Stop")
    {
        num = stoi(cmd);

        if (num > max)
            max = num;

        cin >> cmd;
    }

    cout << max << endl;
}
