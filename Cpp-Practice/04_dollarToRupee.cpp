
#include <iostream>
#include <math.h>
using namespace std;

// Dollar class
class Dollar
{
    float dol;
    float cent;

public:
    Dollar(float d, float c)
    {
        dol = d;
        cent = c;
    }
};

// Rupees class
class Rupees
{
    float rs;
    float paisa;

public:
    Rupees(float r, float p)
    {
        rs = r;
        paisa = p;
    }
};

// function to convert Dollar to Rupees
Rupees convertDolToRs(Dollar d)
{
    float dolRs, centRs;
    dolRs = d.dol * 75.50;
    centRs = d.cent * 0.7550;
    int totalRs = trunc(dolRs + centRs);
    int totalPaisa = round((dolRs + centRs - totalRs) * 100);
    Rupees r(totalRs, totalPaisa);
    return r;
}

int main()
{
    float dol, cent;
    cout << "Enter the amount in Dollar: ";
    cin >> dol;
    cout << "Enter the amount in Cent: ";
    cin >> cent;
    Dollar d(dol, cent);
    Rupees r = convertDolToRs(d);
    cout << "The amount in Rupees is: " << r.rs << " Rs and " << r.paisa << " paisa.";
    return 0;
}