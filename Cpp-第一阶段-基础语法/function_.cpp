#include<iostream>
using namespace std;
//дһ���ӷ�����(����������)
int add(int num1,int num2);

int main()
{
    int a = 10;
    int b = 10;
    int sum = add(a,b);
    cout<< "sum = "<< sum<< endl;
    system("pause");
    return 0;
}

int add(int num1,int num2) 
{
    int sum = num1 + num2;
    return sum;
}
