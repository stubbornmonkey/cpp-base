#include<iostream>
using namespace std;
//函数占位符语法 返回值 函数名(数据类型) {}
//占位符也有默认值语法 数据类型 = 默认值
void print(int a , int = 10) 
{
    cout << " This is a function" << endl;
}
int main()
{
    print(10);//占位符必须传参
    system("pause");
    return 0;
}