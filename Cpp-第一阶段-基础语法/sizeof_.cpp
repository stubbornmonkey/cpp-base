#include<iostream>
using namespace std;
int main()
{   
    short num1 = 10;
    cout << "short���ڴ��С" << sizeof(num1) << endl;
    int num2 = 10;
    cout<<"int���ڴ��С" << sizeof(num2) << endl;
    long num3 = 10;
    cout<< "long���ڴ��С" << sizeof(num3)<< endl;
    long long num4 = 10;
    cout<<"long long���ڴ��С" << sizeof(num4) << endl;
    system("pause");
    return 0;
}