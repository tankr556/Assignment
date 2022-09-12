#include <iostream>
using namespace std;

template <class T>
class Swap
{
    T mem1, mem2;

public:
    Swap(T t1, T t2)
    {
        mem1 = t1;
        mem2 = t2;
    }
    void display()
    {
        cout << " mem1= " << mem1 << " and mem2 " << mem2 << endl;
    }
    void swap()
    {
        T temp;
        temp = mem1;
        mem1 = mem2;
        mem2 = temp;
    }
};

int main()
{
    Swap<int> a1(5, 6);
    a1.display();
    a1.swap();
    cout << " After swapping integer : " << endl;
    a1.display();
    Swap<float> b1(5.6, 4.4);
    b1.display();
    b1.swap();
    cout << " After swapping float : " << endl;
    b1.display();

    return 0;
}