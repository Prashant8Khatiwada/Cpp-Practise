#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inch;

public:
    // default constructor
    Distance() {}

    void getDistance()
    {
        cout << "Enter Feet:\n";
        cin >> feet;
        cout << "Enter Inch:\n";
        cin >> inch;
    }

    Distance sum(Distance &D2)
    {
        Distance D;
        D.feet = feet + D2.feet;
        D.inch = inch + D2.inch;
        if (D.inch > 12)
        {

            D.feet += D.inch / 12;
            D.inch = D.inch % 12;
        }
        return D;
    }
    void displayDistance()
    {
        cout << feet << "-feet " << inch << "-inch.\n";
    }
};

int main()
{
    Distance D1, D2;
    D1.getDistance();
    D2.getDistance();
    Distance D3 = D1.sum(D2);
    cout << "D1 = ";
    D1.displayDistance();
    cout << "D2 = ";
    D2.displayDistance();
    cout << "D3 = ";
    D3.displayDistance();
    return 0;
}