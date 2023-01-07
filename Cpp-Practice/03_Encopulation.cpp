#include <iostream>
using namespace std;

class Account
{
private:
    long balance;
    long accountable;

public:
    void setBalance(long b)
    {
        balance = b;
    }
    void setAccount(long a)
    {
        accountable = a;
    }
    long getBalance() { return balance; }
    long getAccount() { return accountable; }
};

int main()
{
    Account acc;
    acc.setBalance(1000);
    acc.setAccount(201);
    cout << acc.getAccount() << endl;
    cout << acc.getBalance() << endl;
    return 0;
}