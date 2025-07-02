#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    //1.引用必须从初始化
    //int &b;报错了
    int &b = a;
    //2.引用无法修改
    int c =20;
    b = c;//是将c的值赋值给b，并没有修改b的引用
    cout<<"b = " << b << endl;
    cout<< "a = " << a <<endl;
    cout<< "c = " << c <<endl;
    system("pause");
    return 0;
}