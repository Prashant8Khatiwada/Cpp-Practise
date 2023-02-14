#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string data;
    ofstream fout;
    fout.open("abc.txt");
    cout << "Enter Anything:" << endl;
    getline(cin, data);
    fout << data;
    fout.close();

    ifstream fin;
    fin.open("abc.txt");
    cout << "Content of file is \n";

    while (!fin.eof())
    {
        getline(fin, data);
        cout << data << endl;
    }

    fin.close();
    return 0;
}