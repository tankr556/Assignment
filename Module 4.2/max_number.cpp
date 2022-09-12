#include <iostream>
using namespace std;
class Two;
class One
{
    int a;

public:
    void read()
    {
        cout << " Enter a Number " << endl;
        cin >> a;
    }
    friend void max(One, Two);
};
class Two
{
    int b;

public:
    void read()
    {
        cout << " Enter a Number " << endl;
        cin >> b;
    }
    friend void max(One, Two);
};
void max(One X, Two Y)
{
    if (X.a > Y.b)
        cout << " class One Value is Greater " << endl;
    else
        cout << " class Two Value is Greater " << endl;
}

int main()
{
    One a1;
    Two b1;
    a1.read();
    b1.read();
    max(a1, b1);
    return 0;
}