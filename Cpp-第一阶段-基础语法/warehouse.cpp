#include<iostream>
using namespace std;
//��ջ�п�������
int * func() 
{
    int a = 10;
    return &a;
}
int main()
{
    //���ú���
    int * p = func();
    //û�з��ʵ�
    cout<<"p = " <<  *p << endl;
    cout<<"p = " <<  *p << endl;
    system("pause");
    return 0;
}