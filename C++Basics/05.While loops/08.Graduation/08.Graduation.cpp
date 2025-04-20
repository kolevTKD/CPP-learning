#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string name;
    double grade, total = 0;
    int year = 1;
    bool hasFailedOnce = false;

    cin >> name;
    cout << fixed << setprecision(2);

    while (year <= 12)
    {
        cin >> grade;

        if (grade < 4.0)
        {
            if (hasFailedOnce)
            {
                cout << name << " has been excluded at " << year << " grade" << endl;
                return 0;
            }

            hasFailedOnce = true;
            continue;
        }

        total += grade;
        year++;
    }

    cout << name << " graduated. Average grade: " << total / 12 << endl;

    return 0;
}