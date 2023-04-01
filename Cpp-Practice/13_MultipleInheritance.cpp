// A derived class with multiple base class is miltiple inheritance.

#include <iostream>
#include <string>
using namespace std;

class Youtuber
{
public:
    Youtuber(int x) { cout << "Youtuber" << endl; }
    void work() { cout << "Working on youtube" << endl; }
};
class Engineer
{
public:
    Engineer(int y) { cout << "Engineer" << endl; }
    void work() { cout << "Working as Engineer" << endl; }
};
class Prashant : public Engineer, public Youtuber
{
public:
    Prashant(int x, int y) : Engineer(x), Youtuber(y) { cout << "Prashant" << endl; }
};

int main()
{
    Prashant r1(1, 2);
    //  r1.work(); this will give error due to function name ambiguity
    // to solve this error
    r1.Youtuber::work();
    r1.Engineer::work();
    // else if
    Engineer pr = r1;
    pr.work();
    Youtuber pk = r1;
    pk.work();

    // else
    (static_cast<Engineer>(r1)).work();
    (static_cast<Youtuber>(r1)).work();
    return 0;
}