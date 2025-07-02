#include<iostream>
using namespace std;
int main()
{
    //空指针是指向内存编号为零的指针
    int * p = NULL;
    //空指针是不能访问的
    //因为内存编号0~255是系统占用的内存，是不可以被访问的
    *p = 100;
    cout<< *p << endl;
    system("pause");
    return 0;
}