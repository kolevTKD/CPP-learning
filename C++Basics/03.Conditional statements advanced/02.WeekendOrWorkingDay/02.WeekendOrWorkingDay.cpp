#include <iostream>
#include <string>

using namespace std;

int main()
{
	string weekDay;
	getline(cin, weekDay);

	if (weekDay == "Monday" || weekDay == "Tuesday" || weekDay == "Wednesday" || weekDay == "Thursday" || weekDay == "Friday")
		cout << "Working day" << endl;


	else if (weekDay == "Saturday" || weekDay == "Sunday")
		cout << "Weekend" << endl;

	else
		cout << "Error" << endl;

	return 0;
}
