#include <iostream>
using namespace std;

inline int multiplication(int a, int b)
{
    return a * b;
}
inline float cube(float a)
{

    return (a * a * a);
}

int main()
{
    cout << multiplication(5, 6) << endl;

    cout << cube(3) << endl;
    return 0;
}