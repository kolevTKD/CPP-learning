#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string seriesName;
    int episodeDuration, breakDuration;
    getline(cin, seriesName);
    cin >> episodeDuration >> breakDuration;

    double lunchTime = breakDuration * 1 / 8.0;
    double restTime = breakDuration * 1 / 4.0;
    double timeLeft = breakDuration - lunchTime - restTime;

    if (timeLeft >= episodeDuration)
        cout << "You have enough time to watch " << seriesName << " and left with " << ceil(timeLeft - episodeDuration) << " minutes free time." << endl;
    else
        cout << "You don't have enough time to watch " << seriesName << ", you need " << ceil(episodeDuration - timeLeft) << " more minutes." << endl;

    return 0;
}
