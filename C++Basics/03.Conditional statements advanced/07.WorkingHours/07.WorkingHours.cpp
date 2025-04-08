#include <iostream>

using namespace std;

int main()
{
    int hour;
    string weekDay;

    cin >> hour >> weekDay;

    if (weekDay == "Monday" || weekDay == "Tuesday" || weekDay == "Wednesday" || weekDay == "Thursday" || weekDay == "Friday" || weekDay == "Saturday") {

        if (hour >= 10 && hour < 18)
            cout << "open" << endl;

        else
            cout << "closed" << endl;
    }
    else
        cout << "closed" << endl;

    return 0;
}
