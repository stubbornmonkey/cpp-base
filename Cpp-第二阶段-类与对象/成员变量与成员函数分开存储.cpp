#include<iostream>
using namespace std;
class Person
{
public :
    static int m_B;
    int m_A;
    void func(){}
    static void func2() {}

};
int Person::m_B= 100;
void test_01()
{
    Person p;
    cout<< "空对象的大小:" << sizeof(p) <<endl; //1
    cout<< "有一个非静态变量的对象的大小:" << sizeof(p) <<endl;//4
    cout<< "有一个非静态函数和非静态变量的对象大小:" <<sizeof(p) <<endl;//4
    cout<<"有一个静态变量和一个非静态函数和一个非静态变量的对象大小" << sizeof(p) << endl;//4
    cout<<"有一个静态变量和静态函数和一个非静态变量和非静态函数的对象大小" <<sizeof(p) <<endl;//4
}
int main()
{
    test_01();
    system("pause");
    return 0;
}