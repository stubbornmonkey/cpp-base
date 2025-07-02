#include<iostream>
using namespace std;
int main()
{
    //引用的语法 变量类型 &别名 = 原名 注意：两个名称操纵的是一块内存
    int a = 10;
    int &b = a;
    cout<< " a = " << a <<endl;
    cout<< " b = " << b << endl;
    b = 20;
    cout<< " a = " << a << endl;
    system("pause");
    return 0;
}