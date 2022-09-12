#include <iostream>
using namespace std;

class Bank
{
    string accountnum;
    string name;
    string accounttype;
    int balance;
    int newbalance;
    int newbalance1;

public:
    void value(string name, string accountnum, string accounttype, int balance)
    {
        this->name = name;
        this->accountnum = accountnum;
        this->accounttype = accounttype;
        this->balance = balance;
        cout << name << " " << endl;
        cout << accountnum << " " << endl;
        cout << accounttype << " " << endl;
        cout << " Balance amount = " << balance << endl;
    }
    void depositer(int depositer)
    {
        cout << " After diposite amount= " << balance << endl;
        cout << " diposite amount= " << depositer << endl;
        cout << " Before diposite amount= " << balance + depositer << endl;
        newbalance = balance + depositer;
    }
    void withdraw(int withdraw)
    {
        cout << " New amount= " << newbalance << endl;
        cout << " withdraw amount= " << withdraw << endl;
        newbalance1 = newbalance - withdraw;
    }
    void display()
    {
        cout << " " << name << endl;
        cout << "Final amount = " << newbalance1 << endl;
    }
};

int main()
{
    Bank b;
    b.value(" Name of the depositor = Tank Rakesh Mangalbhai ", " Account number = 8874563212 ", " Type of Account = Saving Account ", 600000);
    b.depositer(100000);
    b.withdraw(10000);
    b.display();
    return 0;
}