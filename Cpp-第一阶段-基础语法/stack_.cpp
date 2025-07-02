#include<iostream>
using namespace std;
int * func()
{
    int* p = new int(10); //用new关键字去开辟一块堆内存，new出来之后是该内存的地址
    return p ;
}
int main() 
{
    //调用堆内存
    int * p = func();
    cout << *p << endl;//访问到了
    system("pause");
    return 0;
}