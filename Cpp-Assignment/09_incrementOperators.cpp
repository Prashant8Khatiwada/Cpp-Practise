#include <iostream>
using namespace std;
class Time
{
private:
    int hour, min, sec;

public:
    void getTime()
    {
        cout << "Input time in hour, minute and second form" << endl;
        cin >> hour >> min >> sec;
    }
    // prefix increment
    Time &operator++()
    {
        sec++;
        if (sec >= 60)
        {
            min++;
            sec = sec % 60;
        }
        if (min >= 60)
        {
            hour++;
            min = min % 60;
        }
        return *this;
    }

    // postfix increment
    // Time &operator++()
    // {
    //     Time newTime = *this;
    //     sec++;
    //     if (sec >= 60)
    //     {
    //         min++;
    //         sec = sec % 60;
    //     }
    //     if (min >= 60)
    //     {
    //         hour++;
    //         min = min % 60;
    //     }
    //     return newTime;
    // }

    void showTime()
    {
        cout << hour << " : " << min << " : " << sec << "." << endl;
    }
};

int main()
{
    Time T1;
    T1.getTime();
    cout << "During Increment \n";
    (++T1).showTime();
    cout << "After Increment\n";
    T1.showTime();
    return 0;
}