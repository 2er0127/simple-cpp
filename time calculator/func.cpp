#include "time.h"

Time::Time() {
    hours = mins = 0;
}

Time::Time(int h, int m) {
    hours = h;
    mins = m;
}

void Time::addHours(int h) {
    hours += h;
};

void Time::addMins(int m) {
    mins += m;
    hours += mins / 60;
    mins %= 60;
};

Time Time::operator+(Time& t) {
    Time sum;
    sum.mins = mins + t.mins;
    sum.hours = hours + t.hours;
    sum.hours += sum.mins / 60;
    sum.mins %= 60;
    return sum;
};

void Time::show() {
    cout << hours << " 시간 " << mins << " 분"<< endl;
};

Time::~Time() {

}

ostream& operator<<(ostream& os, Time& t) {
    os << t.hours << " 시간 " << t.mins << " 분";
    return os;
}

NewDayTime::NewDayTime() : Time() {
    day = 0;
}

NewDayTime::NewDayTime(int h, int m, int d) : Time(h, m) {
    day = d;
}

void NewDayTime::show() {
    cout << day << " 일 " << getHours << " 시간 " << getMins << " 분" << endl; 
}
