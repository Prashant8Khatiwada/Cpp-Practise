#include <iostream>

using namespace std;

// Define the Distance structure
struct Distance
{
    int meter;
    int centimeter;
};

// Function prototypes
void inputDistance(Distance &d);
void outputDistance(Distance d);
Distance addDistances(Distance d1, Distance d2);

int main()
{
    Distance d1, d2, d3;

    // Input the first distance
    cout << "Enter the first distance in meters and centimeters:" << endl;
    inputDistance(d1);

    // Input the second distance
    cout << "Enter the second distance in meters and centimeters:" << endl;
    inputDistance(d2);

    // Add the two distances and store the result in d3
    d3 = addDistances(d1, d2);

    // Output the result
    cout << "The sum of the two distances is: ";
    outputDistance(d3);

    return 0;
}

// Function to input a distance in meters and centimeters
void inputDistance(Distance &d)
{
    cin >> d.meter >> d.centimeter;
}

// Function to output a distance in meters and centimeters
void outputDistance(Distance d)
{
    cout << d.meter << " meters and " << d.centimeter << " centimeters" << endl;
}

// Function to add two distances and return the result
Distance addDistances(Distance d1, Distance d2)
{
    Distance d;
    d.meter = d1.meter + d2.meter;
    d.centimeter = d1.centimeter + d2.centimeter;
    if (d.centimeter >= 100)
    {
        d.meter += d.centimeter / 100;
        d.centimeter = d.centimeter % 100;
    }
    return d;
}
