#include<iostream>
using namespace std;
int main()
{
    //指针的大小
    int a = 10;
    int * p = &a;
    //不管是什么类型的指针占用内存空间都是4个字节(32位操作系统下的,64位是8字节)
    cout<<"sizeof(int *) = "<< sizeof(p)<< endl;
    cout<<"sizeof(float *) = "<< sizeof(float *)<< endl;
    cout<<"sizeof(double *) = "<< sizeof(double *)<< endl;
    cout<<"sizeof(char *) = "<< sizeof(char *)<< endl;
    system("pause");
    return 0;
}