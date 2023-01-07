#include <iostream>
using namespace std;
const float PI = 3.14;
inline float area(int x)
{
    float area;
    area = PI * x * x;
    return area;
};
int main()
{
    int a, r;
    cout << "Take radius as input" << endl;
    cin >> r;
    float Area = area(r);
    cout << "Area =" << Area << endl;
    return 0;
}