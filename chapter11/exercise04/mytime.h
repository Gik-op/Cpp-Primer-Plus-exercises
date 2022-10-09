#ifndef EXERCISE04_MYTIME_H
#define EXERCISE04_MYTIME_H

#include <iostream>

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    friend Time operator+(const Time & t1,const Time & t);
    friend Time operator-(const Time & t1,const Time & t);
    friend Time operator*(const Time &t1,double n);
    friend Time operator*(double m, const Time & t)
    { return t * m; }   // inline definition
    friend std::ostream & operator<<(std::ostream & os, const Time & t);

};

#endif //EXERCISE04_MYTIME_H
