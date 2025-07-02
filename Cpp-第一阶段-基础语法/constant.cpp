#include<iostream>
using namespace std;
//常量的两种定义方法
//第一种:在函数上面宏定义 #define 常量名 常量值
//第二种:在函数中变量前加const
#define day 7
int main()
{   
    cout<<"一周总共有" << day << "天" << endl ;
    const int month = 12;
    cout<<"一年有" << month << "月" << endl;
    system("pause");
    return 0;
}