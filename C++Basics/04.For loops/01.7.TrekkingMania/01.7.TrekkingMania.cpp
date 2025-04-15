#include <iostream>

using namespace std;

int main()
{
    int groupsCount, climbers, totalClimbers = 0;

    cin >> groupsCount;

    int groups[5] = {0};

    for (int i = 0; i < groupsCount; i++)
    {
        cin >> climbers;
        totalClimbers += climbers;

        if (climbers <= 5)
            groups[0] += climbers;

        else if (climbers >= 6 && climbers <= 12)
            groups[1] += climbers;

        else if (climbers >= 13 && climbers <= 25)
            groups[2] += climbers;

        else if (climbers >= 26 && climbers <= 40)
            groups[3] += climbers;

        else if (climbers >= 41)
            groups[4] += climbers;
    }

    int length = sizeof(groups) / sizeof(groups[0]);

    cout.setf(ios::fixed);
    cout.precision(2);

    for (int i = 0; i < length; i++)
    {
        cout << (double)groups[i] / totalClimbers * 100 << "%" << endl;
    }

    return 0;
}
