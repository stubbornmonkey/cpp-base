#include<iostream>
using namespace std;
//函数的引用传递
void swap(int &a,int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    swap(a,b);
    cout<<"a = " << a <<endl;
    cout<< "b = " << b << endl;
    //发生了交换，说明引用传递的形参会影响实参
    system("pause");
    return 0;
}