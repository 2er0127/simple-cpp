#include <iostream>
#include "time.h"

using namespace std;

int main() {
    int day1time[2];
    int day2time[2];

    cout << "1번째 시: ";
    cin >> day1time[0];
    cout << "1번째 분: ";
    cin >> day1time[1];
    cout << endl;
    cout << "2번째 시: ";
    cin >> day2time[0];
    cout << "2번째 분: ";
    cin >> day2time[1];

    Time day1(day1time[0], day1time[1]);
    Time day2(day2time[0], day2time[1]);

    cout << "-----\n";

    day1.show();
    day2.show();

    cout << endl;

    Time total;
    total = day1.operator+(day2);
    // = total = day1 + day2;

    cout << total << endl;
    // = total.show();

    return 0;
}