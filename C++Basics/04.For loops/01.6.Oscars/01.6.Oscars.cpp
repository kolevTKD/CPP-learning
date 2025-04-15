#include <iostream>
#include <string>

using namespace std;

int main()
{
    string actorName, jmName;
    double academyPts = 0, jmPts, totalPts = 0;
    int juryMembers = 0;

    //cin.ignore();
    getline(cin, actorName);
    cin >> academyPts >> juryMembers;

    totalPts += academyPts;

    cout.setf(ios::fixed);
    cout.precision(1);

    for (int i = 0; i < juryMembers; i++)
    {
        cin.ignore();
        getline(cin, jmName);
        cin >> jmPts;

        totalPts += jmName.length() * jmPts / 2;

        if (totalPts > 1250.5)
        {
            cout << "Congratulations, " << actorName << " got a nominee for leading role with " << totalPts << "!" << endl;
            return 0;
        }
    }

    cout << "Sorry, " << actorName << " you need " << 1250.5 - totalPts << " more!";

    return 0;
}
