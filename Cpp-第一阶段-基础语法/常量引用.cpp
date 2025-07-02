#include<iostream>
using namespace std;
void print( const int & a) 
{   
    //a = 1000;无法修改a的值
    cout<< " a = " << a << endl; 
}
int main()
{
    //常量引用的使用场景：形参的修饰，防止误操作而修改数据
    //const int & ref = 10;//底层的原理：int temp = 10; const int & ref = temp; 只不过这个temp访问不到
    //修饰形参
    int a = 100;
    print(a);
    system("pause");
    return 0;
}