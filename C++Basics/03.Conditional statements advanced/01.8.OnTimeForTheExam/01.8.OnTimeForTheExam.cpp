#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
	int examHour, examMinute, arrivalHour, arrivalMinute;
	cin >> examHour >> examMinute >> arrivalHour >> arrivalMinute;

	int examTInMins = examHour * 60 + examMinute;
	int arrivalTInMins = arrivalHour * 60 + arrivalMinute;

	int diff = examTInMins - arrivalTInMins;
	int diffH = abs(diff / 60);
	int diffM = abs(diff % 60);

	string arrival, message;

	if (diff == 0) {

		arrival = "On time";
	}

	else if (diff > 0) {


		if (diff <= 30) {

			arrival = "On time";
			message = to_string(diffM) + " minutes before the start";
		}

		else {

			arrival = "Early";

			ostringstream oss;
			oss << setw(2) << setfill('0') << diffM;

			if (diffH >= 1)
				message = to_string(diffH) + ':' + oss.str() + " hours before the start";

			else if (diffH == 0)
				message = to_string(diffM) + " minutes before the start";
		}
	}

	else if (diff < 0) {

		arrival = "Late";

		ostringstream oss;
		oss << setw(2) << setfill('0') << diffM;

		if (diffH >= 1)
			message = to_string(diffH) + ':' + oss.str() + " hours after the start";

		else if (diffH == 0)
			message = to_string(diffM) + " minutes after the start";
	}

	cout << arrival << endl;
	cout << message << endl;

	return 0;
}
