#include <iostream>

using namespace std;

int main()
{
    int tankLength, tankWidth, tankHeight;
    double usedSpacePercentage;

    cin >> tankLength;
    cin >> tankWidth;
    cin >> tankHeight;
    cin >> usedSpacePercentage;

    usedSpacePercentage /= 100;

    double tankVolumeDm = tankLength * tankWidth * tankHeight;
    double tankVolumeInLiters = tankVolumeDm / 1000;

    double neededLiters = tankVolumeInLiters * (1 - usedSpacePercentage);

    cout << neededLiters << endl;

    return 0;
}
