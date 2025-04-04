#include <iostream>

using namespace std;

int main()
{
	string secretPassword = "s3cr3t!P@ssw0rd";

	string inputPassword;
	cin >> inputPassword;

	inputPassword == secretPassword ? cout << "Welcome" << endl : cout << "Wrong password!" << endl;

	return 0;
}
