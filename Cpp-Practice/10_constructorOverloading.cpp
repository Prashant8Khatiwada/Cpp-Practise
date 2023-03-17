#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
    int code, price;

public:
    Item()
    {
        // Default Constructor
        code = price = 0;
    }

    Item(int C, int P)
    {
        // Parameterized Constructor
        code = C;
        price = P;
    }

    Item(Item &x)
    {
        // Parameterized Constructor
        code = x.code;
        price = x.price;
    }

    void display()
    {
        cout << "Code:: " << code << endl
             << "Price:: " << price << endl
             << endl;
    }
};

int main()
{
    Item I1;
    Item I2(100, 3000);
    Item I3(I2);
    I2.display();
    I3.display();
    return 0;
}