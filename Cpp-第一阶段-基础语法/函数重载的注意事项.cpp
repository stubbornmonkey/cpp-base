#include<iostream>
using namespace std;
//当引用遇上函数重载
void func(int & a) 
{
    cout<< " func(int & a) " <<endl;
}
void func(const int & a) 
{
    cout<< " func(const int & a) " <<endl;
}
//当函数重载遇上默认参数
void func2(int a)
{
      cout<< " func2(int a) " << endl;
} 
void func2(int a, int b = 10)
{
      cout<< " func2(int a, int b = 10) " << endl;
} 
int main() 
{
    int a = 10;
    func(a);//调用第一个 因为 const int & a = 地址 该语法不合法
    func(10);//调用第二个 因为 int & a = 10 该语法不合法
    //func2(10);//报错编译器不知道调哪个 无法解决只能避免这种情况
    func2(10,10);//调用第二个
    system("pause");
    return 0;
}