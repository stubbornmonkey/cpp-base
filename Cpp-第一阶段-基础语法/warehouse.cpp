#include<iostream>
using namespace std;
//在栈中开辟数据
int * func() 
{
    int a = 10;
    return &a;
}
int main()
{
    //调用函数
    int * p = func();
    //没有访问到
    cout<<"p = " <<  *p << endl;
    cout<<"p = " <<  *p << endl;
    system("pause");
    return 0;
}