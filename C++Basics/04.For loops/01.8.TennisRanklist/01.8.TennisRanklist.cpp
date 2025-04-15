#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int tournamentsCount, initialPts, totalPts = 0, wins = 0;
    string rank;
    cin >> tournamentsCount >> initialPts;

    for (int i = 0; i < tournamentsCount; i++)
    {
        cin >> rank;

        if (rank == "W")
        {
            totalPts += 2000;
            wins++;
        }

        else if (rank == "F")
            totalPts += 1200;

        else if (rank == "SF")
            totalPts += 720;
    }


    cout << "Final points: " << totalPts + initialPts << endl;
    cout << "Average points: " << floor((double)totalPts / tournamentsCount) << endl;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << (double)wins / tournamentsCount * 100 << "%" << endl;

    return 0;
}
