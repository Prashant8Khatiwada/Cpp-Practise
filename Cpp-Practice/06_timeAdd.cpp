#include <iostream>
#include <string>
using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    void setTime();
    void getTime();
    friend void addTime(Time T1, Time T2);
};

// for time input
void Time ::setTime()
{
    cout << "Input Time \n";
    cin >> hour >> minute >> second;
}
// for time output
void Time::getTime()
{
    cout << hour + ": " << minute + ": " << second + ".";
}

// to add times
void addTime(Time T1, Time T2)
{
    Time T;
    T.hour = T1.hour + T2.hour;
    T.minute = T1.minute + T2.minute;
    T.second = T1.second + T2.second;

    if (T.second >= 60)
    {
        T.minute += T.second / 60;
        T.second = T.second % 60;
    }
    if (T.minute >= 60)
    {
        T.hour += T.minute / 60;
        T.minute = T.minute % 60;
    }

    cout << "The sum is " << T.hour << "-hour " << T.minute << "-minute " << T.second << "-second " << endl;
}
int main()
{
    Time T1, T2, T3;
    T1.setTime();
    T2.setTime();
    addTime(T1, T2);
    // T3.getTime();
    return 0;
}