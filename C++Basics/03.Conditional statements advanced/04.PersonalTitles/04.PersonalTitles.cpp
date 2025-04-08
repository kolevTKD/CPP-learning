#include <iostream>

using namespace std;

int main()
{
    double age;
    char gender;
    string personalTitle;

    cin >> age >> gender;

    if (gender == 'm') {
        if (age >= 16)
            personalTitle = "Mr.";
        else
            personalTitle = "Master";
    }

    else if (gender == 'f') {
        if (age >= 16)
            personalTitle = "Ms.";

        else
            personalTitle = "Miss";
    }

    cout << personalTitle << endl;

    return 0;
}
