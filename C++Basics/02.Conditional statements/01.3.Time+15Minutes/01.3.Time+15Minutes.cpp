#include <iostream>

using namespace std;

int main()
{
    int startHours, startMinutes;
    cin >> startHours >> startMinutes;

    int timeInMinutes = startHours * 60 + startMinutes;
    int timePlus15 = timeInMinutes + 15;

    int hours = timePlus15 / 60;
    int minutes = timePlus15 % 60;

    if (hours >= 24)
        hours -= 24;

    if (minutes < 10)
        cout << hours << ":0" << minutes << endl;
    else
        cout << hours << ":" << minutes << endl;

    return 0;
}
