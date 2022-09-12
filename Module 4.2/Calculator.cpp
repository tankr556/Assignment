#include <iostream>
using namespace std;

class Calculator
{
    int a, b;

public:
    void SetData(int x, int y)
    {
        a = x;
        b = y;
    }
    void Addition()
    {
        cout << " Addition of " << a << " and " << b << " is " << a + b << endl;
    }
    void Subtraction()
    {
        cout << " Subtraction of " << a << " and " << b << " is " << a - b << endl;
    }
    void Multiplication()
    {
        cout << " Multiplication of " << a << " and " << b << " is " << a * b << endl;
    }
    void Division()
    {

        cout << " Division of " << a << " and " << b << " is " << a / b << endl;
    }
};

int main()
{
    Calculator a1;
    a1.SetData(5, 6);
    a1.Addition();
    a1.Subtraction();
    a1.Multiplication();
    a1.Division();
    return 0;
}