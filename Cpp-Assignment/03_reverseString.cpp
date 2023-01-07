#include <iostream>
#include <string>
using namespace std;

string rev(string str)
{
    int len = str.length();
    char temp;
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}
int main()
{
    string str;
    cout << "Enter String" << endl;
    cin >> str;
    string reverse = rev(str);
    cout << reverse;
    return 0;
}