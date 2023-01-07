#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << left << setw(10) << "S.No." << setw(15) << "City" << setw(15) << "District" << setw(15) << "Provience" << right << setw(15) << "Population" << endl;
    cout << left << setw(10) << "1." << setw(15) << "Kathmandu" << setw(15) << "Kathmandu" << setw(15) << "Bagmati" << right << setw(15) << "500000" << endl;
    cout << left << setw(10) << "2." << setw(15) << "Pokhara" << setw(15) << "Kaski" << setw(15) << "Gandaki" << right << setw(15) << "50000" << endl;
    cout << left << setw(10) << "3." << setw(15) << "Butwal" << setw(15) << "Rupendehi" << setw(15) << "Lumbini" << right << setw(15) << "100000" << endl;
    cout << left << setw(10) << "4." << setw(15) << "Dharan" << setw(15) << "Sunsari" << setw(15) << "Prov 1" << right << setw(15) << "80000" << endl;
    return 0;
}