#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	char operand;
	double result;

	cin >> num1 >> num2 >> operand;

	if (operand == '\/' || operand == '\%') {

		if (num2 == 0) {
			cout << "Cannot divide " << num1 << " by zero" << endl;
			return 0;
		}

		else {

			if (operand == '\/') {

				result = (double)num1 / num2;

				cout.setf(ios::fixed);
				cout.precision(2);
				cout << num1 << " / " << num2 << " = " << result;
			}

			else {

				result = num1 % num2;
				cout << num1 << " % " << num2 << " = " << result;
			}
		}
	}

	else if (operand == '\+' || operand == '\-' || operand == '\*') {

		if (operand == '\+')
			result = num1 + num2;

		else if (operand == '\-')
			result = num1 - num2;

		else if (operand == '\*')
			result = num1 * num2;

		if ((int)result % 2 == 0)
			cout << num1 << " " << operand << " " << num2 << " = " << result << " - even" << endl;

		else
			cout << num1 << " " << operand << " " << num2 << " = " << result << " - odd" << endl;
	}

	return 0;
}
