#include<iostream>
using namespace std;
int main()
{   
    short num1 = 10;
    cout << "short的内存大小" << sizeof(num1) << endl;
    int num2 = 10;
    cout<<"int的内存大小" << sizeof(num2) << endl;
    long num3 = 10;
    cout<< "long的内存大小" << sizeof(num3)<< endl;
    long long num4 = 10;
    cout<<"long long的内存大小" << sizeof(num4) << endl;
    system("pause");
    return 0;
}