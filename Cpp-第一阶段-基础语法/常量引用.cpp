#include<iostream>
using namespace std;
void print( const int & a) 
{   
    //a = 1000;�޷��޸�a��ֵ
    cout<< " a = " << a << endl; 
}
int main()
{
    //�������õ�ʹ�ó������βε����Σ���ֹ��������޸�����
    //const int & ref = 10;//�ײ��ԭ��int temp = 10; const int & ref = temp; ֻ�������temp���ʲ���
    //�����β�
    int a = 100;
    print(a);
    system("pause");
    return 0;
}