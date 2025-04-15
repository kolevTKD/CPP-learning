#include <iostream>

using namespace std;

int main()
{
    int numsCount, num;
    double p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    cin >> numsCount;

    for (int i = 0; i < numsCount; i++)
    {
        cin >> num;

        if (num < 200)
            p1++;
        else if (num >= 200 && num <= 399)
            p2++;
        else if (num >= 400 && num <= 599)
            p3++;
        else if (num >= 600 && num <= 799)
            p4++;
        else if (num >= 800)
            p5++;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << p1 / numsCount * 100 << '%' << endl;
    cout << p2 / numsCount * 100 << '%' << endl;
    cout << p3 / numsCount * 100 << '%' << endl;
    cout << p4 / numsCount * 100 << '%' << endl;
    cout << p5 / numsCount * 100 << '%' << endl;

    return 0;
}
