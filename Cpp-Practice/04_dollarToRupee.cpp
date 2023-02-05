#include <iostream>
#include <cstdlib>
using namespace std;

// 1 dol = 131.84 rs

class Dollar
{
public:
    int dol, cent;
    Dollar()
    {
        dol = 0;
        cent = 0;
    }
    Dollar(int d, int c)
    {
        dol = d;
        cent = c;
    }
    void display()
    {
        cout << "Dollar: " << dol << endl;
        cout << "Cent: " << cent << endl;
    }
};

class Rupee
{
public:
    int rs, paisa;
    Rupee()
    {
        rs = 0;
        paisa = 0;
    }
    Rupee(int r, int p)
    {
        rs = r;
        paisa = p;
    }
    void display()
    {
        cout << "Rupees: " << rs << endl;
        cout << "Paisa: " << paisa << endl;
    }

    friend Rupee convert_to_dollar(Dollar);
    friend Dollar convert_to_npr(Rupee &);
};

Rupee convert_to_dollar(Dollar obj)
{
    Rupee res;
    res.rs = obj.dol * 131;
    res.paisa = obj.cent * 87;
    return res;
}
Dollar convert_to_npr(Rupee &obj)
{
    Dollar res;
    res.dol = obj.rs / 131;
    res.cent = obj.paisa / 87;
    return res;
}

int main()
{
    Rupee R1, R2(234, 4), R3;
    Dollar D1, D2(50, 2), D3;
    D3 = convert_to_npr(R2);
    D3.display();
    R3 = convert_to_dollar(D2);
    R3.display();
}
