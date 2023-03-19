#ifndef TIMEH
#define TIMEH

#include <iostream>

using namespace std;

class Time {
    private:
        int hours;
        int mins;
    public:
        Time();
        Time(int, int);
        void addHours(int);
        void addMins(int);
        Time operator+(Time&);
        virtual void show();
        virtual ~Time();
        int getHours() {
            return hours;
        }
        int getMins() {
            return mins;
        }
        friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewDayTime : public Time {
    private:
        int day;
    public:
        NewDayTime();
        NewDayTime(int, int, int);
        void show();
};

#endif
