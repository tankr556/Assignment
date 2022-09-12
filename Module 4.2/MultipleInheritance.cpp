#include <iostream>
using namespace std;

class Person
{
    int age;
    string name;

public:
    void setPerson(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    void getPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};
class Student : public Person
{
    float percentage;

public:
    void setStudent(float percentage)
    {
        this->percentage = percentage;
    }
    void getStudent()
    {
        cout << "Percentage is : " << percentage << endl;
    }
};
class Teacher : public Person
{
    float salary;

public:
    void setTeacher(float salary)
    {
        this->salary = salary;
    }
    void getTeacher()
    {
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Student s1;
    s1.setPerson(25, "Rakesh");
    s1.getPerson();
    s1.setStudent(80);
    s1.getStudent();
    Teacher t1;
    t1.setTeacher(80000);
    t1.getTeacher();
    return 0;
}