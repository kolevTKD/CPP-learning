#include <iostream>
//#include <format>

using namespace std;

int main()
{
    string projType;
    int rows, cols;
    double ticketPrice, total;

    cin >> projType >> rows >> cols;

    if (projType == "Premiere")
        ticketPrice = 12;

    else if (projType == "Normal")
        ticketPrice = 7.5;

    else if (projType == "Discount")
        ticketPrice = 5;

    total = rows * cols * ticketPrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << total << " leva" << endl;
    //cout << format("{:.2f} leva", total) << endl;

    return 0;
}
