#include<iostream>
using namespace std;
int main() 
{
    //三目运算符：表达式1 ? 表达式2 ：表达式3`
    int a = 0;
    int b = 10;
    int c = 20;
    a = b > c? b : c;
    cout<<"结果是 ="<< a << endl;

    //三目运算符可以直接被赋值
    (a > b ? a : b)  = 100;//相当于直接给结果的变量赋值
    cout<< "a = "<< a << endl;
    cout<< "b = "<< b << endl;
    cout<< "c = "<< c <<endl;
    system("pause");
    return 0;
}