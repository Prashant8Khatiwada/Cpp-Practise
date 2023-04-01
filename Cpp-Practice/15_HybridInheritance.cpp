#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    void studying() { cout << "I m studying" << endl; }
};
class Male
{
};
class Female
{
};
class Boy : public Student, public Male
{
};
class Girl : public Student, public Female
{
};

int main()
{
    Boy ram;
    ram.studying();

    Girl sita;
    sita.studying();
    return 0;
}