#include <iostream>
#include <string>

using namespace std;

int main()
{
    string architectName;
    int projectsCount, projCompletionHrs;
    projCompletionHrs = 3;

    cin >> architectName;
    cin >> projectsCount;

    int totalTime = projectsCount * projCompletionHrs;

    cout << "The architect " << architectName << " will need " << totalTime << " hours to complete " << projectsCount << " project/s." << endl;

    return 0;
}