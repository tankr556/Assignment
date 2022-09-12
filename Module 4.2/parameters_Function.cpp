#include <iostream>
using namespace std;

int Addition(int a, int b)
{
    int sum = a + b;
    return sum;
}
int Subtraction(int a, int b)
{
    int difference = a - b;
    return difference;
}
float Multiplication(int a, int b)
{
    float product = (float)a * (float)b;
    return product;
}
float Division(int a, int b)
{
    float quotient = (float)a / (float)b;
    return quotient;
}

int main()
{
    int opt;
    int a, b;

    cout.width(50);
    cout << "1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n";
    cout << " Enter option: ";
    cin >> opt;
    cout << " Enter Number 1:\t";
    cin >> a;
    cout << " Enter Number 2:\t";
    cin >> b;

    switch (opt)
    {
    case 1:
        cout << "\n The Sum is : " << Addition(a, b);
        break;
    case 2:
        cout << "\n The Sum is : " << Subtraction(a, b);
        break;
    case 3:
        cout << "\n The Sum is : " << Multiplication(a, b);
        break;
    case 4:
        cout << "\n The Sum is : " << Division(a, b);
        break;

    default:
        cout << "-----Enter correct option----";
        break;
    }
    return 0;
}