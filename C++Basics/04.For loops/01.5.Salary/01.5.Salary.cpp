#include <iostream>

using namespace std;

int main()
{
    int tabsOpened, salary;
    cin >> tabsOpened >> salary;

    string tab;

    for (int i = 0; i < tabsOpened; i++)
    {
        cin >> tab;

        if (tab == "Facebook")
            salary -= 150;
        else if (tab == "Instagram")
            salary -= 100;
        else if (tab == "Reddit")
            salary -= 50;

        if (salary <= 0)
        {
            cout << "You have lost your salary." << endl;
            return 0;
        }
    }

    cout << salary << endl;
    return 0;
}
