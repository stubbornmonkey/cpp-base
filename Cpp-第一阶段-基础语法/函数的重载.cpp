#include<iostream>
using namespace std;
/*
    �������ص�����
    1.������ͬһ����������
    2.����ͬ�ĺ�����
    3.�����ĸ��������������ͣ�������˳�򶼲���ͬ
*/ 
void func()
{
    cout<<"func() " <<endl;
}

void func(int a)
{
    cout<<"func(int a) " <<endl;
}
void func(double a)
{
    cout<<"func(double a)" <<endl;
}
void func(double a,int b)
{
    cout<<"func(double a,int b)" <<endl;
}

void func(int a ,double b)
{
    cout<<"func(int a ,double b)" <<endl;
}
//ע��:�����ķ���ֵ������Ϊ�������ص�����
int main()
{
    func();
    func(10);
    func(3.14);
    func(3.14,10);
    func(10,3.14);
    system("pause");
    return 0;
}