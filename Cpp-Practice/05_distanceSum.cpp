#include <iostream>
#include <string>
using namespace std;

static int count = 0;
struct Distance
{
    int meter, centimeter;

    void setDistance()
    {
        cout << "Enter meter and centimeter for " << ++count << "\n";
        cin >> meter >> centimeter;
    }

    void getDistance()
    {
        cout << "meter = " << meter << "\n"
             << "Centimeter = " << centimeter;
    }

    Distance addDistance(Distance D)
    {
        Distance D3;
        D3.meter = meter + D.meter;
        D3.centimeter = centimeter + D.centimeter;
        if (D3.centimeter >= 100)
        {
            D3.meter += D3.centimeter / 100;
            D3.centimeter = D3.centimeter % 100;
        }
        return D3;
    }
};

int main()
{
    Distance D1, D2, D3;
    D1.setDistance();
    D2.setDistance();
    D3 = D2.addDistance(D1);

    D3.getDistance();
    return 0;
}