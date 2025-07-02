#include<iostream>
using namespace std;
//静态成员函数的特点
// 1.只能访问静态成员变量
// 2.所有对象共享一个静态成员函数
class Person {
public: static int m_A;
public: 
    static void func()
    {
        cout<< "static void func()的调用" << endl;
        m_A = 200;//可以访问成员变量
        // m_B = 100;//报错 原因:无法分辨这个变量到底是哪个对象的属性
    }
public: int m_B;
};
int Person::m_A = 100;
void test_01()
{
    //静态成员函数的访问方式
    //第一种:创建对象访问
    Person p;
    p.func();
    //第二种:直接通过类访问
    Person::func();
}
void test_02()
{
    //两个对象调用的是一个静态成员函数
    Person p1;
    p1.func();
    Person p2;
    p2.func();
}
int main()
{
    test_01();
    system("pause");
    return 0;
}