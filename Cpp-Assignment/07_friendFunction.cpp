#include <iostream>
using namespace std;

class Time
{
private:
    int hour, minute, second;
    friend void addTime(Time T1, Time T2);

public:
    void getTime()
    {
        cin >> hour;
        cin >> minute;
        cin >> second;
    }

    void displayTime()
    {
        cout << "The time is " << hour << "-hour " << minute << "-minute " << second << "-second " << endl
             << endl;
    }
};

void addTime(Time T1, Time T2)
{
    Time T3;
    T3.second = T1.second + T2.second;
    T3.minute = T1.minute + T2.minute;
    T3.hour = T1.hour + T2.hour;
    if (T3.second >= 60)
    {
        T3.minute += T3.second / 60;
        T3.second = T3.second % 60;
    }
    if (T3.minute >= 60)
    {
        T3.hour += T3.minute / 60;
        T3.minute = T3.minute % 60;
    }
    cout << "The sum is " << T3.hour << "-hour " << T3.minute << "-minute " << T3.second << "-second " << endl;
}

int main()
{
    Time T1, T2;
    T1.getTime();
    T1.displayTime();
    T2.getTime();
    T2.displayTime();
    addTime(T1, T2);
    return 0;
}