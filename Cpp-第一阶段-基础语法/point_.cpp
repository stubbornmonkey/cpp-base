#include<iostream>
using namespace std;
int main()
{
    //指针的本质:指针的本质就是一个地址
    int a = 10;
    //指针的定义 数据类型 * 变量名
    int * p;
    //指针的赋值
    p = &a;
    cout<<"a的地址:" << &a <<endl;
    cout<< "p的值:" << p << endl;
    //指针的解引用（在指针前面加*即可）
    cout<< "p对应的内存的值:" << *p <<endl;
    system("pause");
    return 0;
}