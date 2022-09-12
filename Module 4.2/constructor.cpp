#include <iostream>
using namespace std;

class constructor
{
    int x;
    int y;

public:
    constructor(int x, int y)
    {
        cout << "Addition of : " << x + y << endl;
        cout << "Subtraction of : " << x - y << endl;
        cout << "Multiplication of : " << x * y << endl;
        cout << "Divison of : " << (float)x / y << endl;
    }
};

int main()
{
    constructor b1(5, 6);

    return 0;
}