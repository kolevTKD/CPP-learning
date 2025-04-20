#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cmd;
    double money, sum = 0;

    getline(cin, cmd);

    cout.setf(ios::fixed);
    cout.precision(2);

    while (cmd != "NoMoreMoney")
    {
        money = stod(cmd);

        if (money < 0)
        {
            cout << "Invalid operation!" << endl;
            break;
        }

        sum += money;
        cout << "Increase: " << money << endl;

        getline(cin, cmd);
    }

    cout << "Total: " << sum << endl;
}
