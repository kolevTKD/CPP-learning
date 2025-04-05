#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double wrSeconds, distMeters, secsPerMeter;
    cin >> wrSeconds >> distMeters >> secsPerMeter;

    double contenderTime = distMeters * secsPerMeter;
    double resistanseSlowDown = floor(distMeters / 15) * 12.5;
    contenderTime += resistanseSlowDown;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (wrSeconds <= contenderTime)
        cout << "No, he failed! He was " << contenderTime - wrSeconds << " seconds slower." << endl;

    else if (contenderTime < wrSeconds)
        cout << "Yes, he succeeded! The new world record is " << contenderTime << " seconds." << endl;

    return 0;
}
