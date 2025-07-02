#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    //常量指针
    const int * p1 = &a;//可以改变指针的指向，但不能改变指针指向的值
    
    int * const p2 = &a;
    //指针常量 可以改变指针指向的值，但不可以改变指针的指向

    //两个都修饰
    
    const int * const p3 = &a;
    //即不可以改变指向的值，又不能改变指针的指向

    system("pause");
    return 0;
}