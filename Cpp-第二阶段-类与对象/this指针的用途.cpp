#include<iostream>
using namespace std;
//this的用途
//1.解决重名的问题
//2.返回对象本身
class Person
{
    public: int age;
    Person(int age){
        this->age = age;
    }
    //做链式返回（一定更要返回应用不然会复制一份）
    Person& PersonAddAge(Person &p)
    {
        this->age += p.age;
        return *this;
    }
};
void test_01()
{
    Person p1(10);
    cout<< p1.age<< endl;
    Person p2(10);
    p1.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2);
    cout<<p1.age<<endl;
}
int main()
{
    test_01();
    system("pause");
    return 0;
}