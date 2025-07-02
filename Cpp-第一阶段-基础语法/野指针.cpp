#include<iostream>
using namespace std;
int main() 
{
    //野指针：就是指向一个非法空间的指针
    //会报错
    int * p = (int *) 0x1100;
    cout<< *p << endl;

    system("pause");
    return 0;
} 