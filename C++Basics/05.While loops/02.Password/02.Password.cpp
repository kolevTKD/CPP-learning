#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user, password, input;
    getline(cin, user);
    cin.ignore();
    getline(cin, password);
    cin.ignore();
    getline(cin, input);


    while (input != password)
    {
        cin.ignore();
        getline(cin, input);
    }

    cout << "Welcome " << user << "!" << endl;

    return 0;
}
