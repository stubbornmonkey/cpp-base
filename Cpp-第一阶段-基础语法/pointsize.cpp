#include<iostream>
using namespace std;
int main()
{
    //ָ��Ĵ�С
    int a = 10;
    int * p = &a;
    //������ʲô���͵�ָ��ռ���ڴ�ռ䶼��4���ֽ�(32λ����ϵͳ�µ�,64λ��8�ֽ�)
    cout<<"sizeof(int *) = "<< sizeof(p)<< endl;
    cout<<"sizeof(float *) = "<< sizeof(float *)<< endl;
    cout<<"sizeof(double *) = "<< sizeof(double *)<< endl;
    cout<<"sizeof(char *) = "<< sizeof(char *)<< endl;
    system("pause");
    return 0;
}