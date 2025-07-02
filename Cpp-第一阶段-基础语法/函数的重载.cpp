#include<iostream>
using namespace std;
/*
    函数重载的条件
    1.必须在同一个作用域中
    2.有相同的函数名
    3.参数的个数，参数的类型，参数的顺序都不相同
*/ 
void func()
{
    cout<<"func() " <<endl;
}

void func(int a)
{
    cout<<"func(int a) " <<endl;
}
void func(double a)
{
    cout<<"func(double a)" <<endl;
}
void func(double a,int b)
{
    cout<<"func(double a,int b)" <<endl;
}

void func(int a ,double b)
{
    cout<<"func(int a ,double b)" <<endl;
}
//注意:函数的返回值不能作为函数重载的条件
int main()
{
    func();
    func(10);
    func(3.14);
    func(3.14,10);
    func(10,3.14);
    system("pause");
    return 0;
}