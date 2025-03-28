#include <iostream>

using namespace std;

int main()
{
    int pagesCount, pagesPerHour, daysCount;
    cin >> pagesCount;
    cin >> pagesPerHour;
    cin >> daysCount;

    int hoursPerBook = pagesCount / pagesPerHour;
    int hoursPerDay = hoursPerBook / daysCount;

    cout << hoursPerDay << endl;

    return 0;
}
