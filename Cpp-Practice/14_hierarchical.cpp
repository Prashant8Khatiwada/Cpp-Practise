// Multiple derived classes with same base class

#include <iostream>
#include <string>
using namespace std;

// Example: 1

class Human
{
public:
    void breathing() { cout << "I am breathing" << endl; }
};
class Youtuber : public Human
{
public:
    void work() { cout << "Creating Videos" << endl; }
};
class Engineer : public Human
{
public:
    void work() { cout << "Working on Project" << endl; }
};
class Doctor : public Human
{
public:
    void work() { cout << "Saving your grandmon" << endl; }
};

int main()
{
    Youtuber y;
    y.breathing();
    y.work();
    Engineer e;
    e.breathing();
    e.work();
    Doctor d;
    d.breathing();
    d.work();

    return 0;
}