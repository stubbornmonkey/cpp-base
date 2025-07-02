#include<iostream>
using namespace std;
//函数的默认值
//注意事项一:函数的第一个参数有默认值，这个参数的后面的参数都要有默认值
int func1(int a,int b = 10,int c = 10)
{
    return a + b + c;
}
//注意事项二:函数的声明与实现只能有一个默认值,否则会出现报错
int func2(int a,int b,int c);

int func2(int a = 10,int b = 10 ,int c =20) 
{
    return a + b + c;
}


int main() 
{
    int res = func1(10);
    cout<< "res = " << res << endl;
    int res2 = func2();
    cout << "res2 = " << res2 << endl;
    system("pause");
    return 0;
}