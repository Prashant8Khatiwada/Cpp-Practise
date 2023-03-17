#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
    char *name;
    int length;

public:
    String()
    {
        length = 0;
        name = new char[length = 1];
    }

    String(char *S)
    {
        length = strlen(S);
        name = new char[length + 1];
        strcpy(name, S);
    }

    void display()
    {
        cout << "\n Name:-" << name << endl;
    }

    void join(String &a, String &b)
    {
        length = a.length + b.length;
        delete name;
        name = new char[length + 1];
        strcpy(name, a.name);
        strcat(name, "");
        strcat(name, b.name);
    }
};

int main()
{
    String fn("Prashant");
    String in("Shukla");
    String n;
    n.join(fn, in);
    n.display();
    return 0;
}