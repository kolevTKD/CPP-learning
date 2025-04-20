#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cmd;
    getline(cin, cmd);

    while (cmd != "Stop")
    {
        cout << cmd << endl;

        getline(cin, cmd);
    }

    return 0;
}
