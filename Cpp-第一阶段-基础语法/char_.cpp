#include<iostream>
using namespace std;
int main()
{
    //char：字符类型
    //定义方式
    char c1 = 'a';
    cout<<"c1 = " << c1 << endl;
    //char类型的内存大小(单位:字节)
    cout<< "char类型的内存大小"<<sizeof(char)<< endl;
    //char类型在计算机本质是一个数字
    cout<<"char类型的本质"<< (int) c1 << endl;//97
    system("pause");
    return 0;
}