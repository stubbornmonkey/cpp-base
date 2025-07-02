#include<iostream>
using namespace std;
int main() 
{
    //goto 标志 作用：可以无条件跳转语句
    cout<< "1.xxxx"<< endl;

    cout<< "2.xxxx"<< endl;
    goto FLAG;
    cout<< "3.xxxx"<< endl;
    FLAG:
    cout<< "4.xxxx"<< endl;

    cout<< "5.xxxx"<< endl;

    system("pause");
    return 0;
}