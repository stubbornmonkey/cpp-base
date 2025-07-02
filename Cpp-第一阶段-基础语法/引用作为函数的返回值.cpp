#include<iostream>
using namespace std;
//局部变量的引用不能作为返回值(因为局部变量在栈区，函数执行完会释放内存)
int& func01()
{
    int a = 10;
    return a;
}

int& function()
{
    static int a = 10;//可以作为返回值，静态变量在全局区中
    return a;
}
int main() 
{
    //int &ref = func01();
    //cout<<"ref = " << ref << endl;//访问不到
    int &ref = function();
    cout<< "ref = " <<ref <<endl;//访问到了
    //当函数返回值为引用类型时，引用类型可以当左值使用
    function() = 1000;//将返回的变量引用修改
    cout<< "ref = " << ref <<endl;//1000
    system("pause");
    return 0;
}