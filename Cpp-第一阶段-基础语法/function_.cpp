#include<iostream>
using namespace std;
//写一个加法函数(函数的声明)
int add(int num1,int num2);

int main()
{
    int a = 10;
    int b = 10;
    int sum = add(a,b);
    cout<< "sum = "<< sum<< endl;
    system("pause");
    return 0;
}

int add(int num1,int num2) 
{
    int sum = num1 + num2;
    return sum;
}
