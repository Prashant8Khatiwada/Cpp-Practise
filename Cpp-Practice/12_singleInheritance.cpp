#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
    void driveVehicle() { cout << "Driving Vehicle" << endl; }
};

// Car can be derived from vehicle class because car "is-a" Vehicle
class Car : public Vehicle
{
public:
    // getTires is inside class because car "has-a" tire
    void getTires() { cout << "Four Tires" << endl; }
};

int main()
{
    Car c;
    c.getTires();
    c.driveVehicle();
    return 0;
}