#include<iostream>
using namespace std;
int main() 
{
    //��Ŀ����������ʽ1 ? ���ʽ2 �����ʽ3`
    int a = 0;
    int b = 10;
    int c = 20;
    a = b > c? b : c;
    cout<<"����� ="<< a << endl;

    //��Ŀ���������ֱ�ӱ���ֵ
    (a > b ? a : b)  = 100;//�൱��ֱ�Ӹ�����ı�����ֵ
    cout<< "a = "<< a << endl;
    cout<< "b = "<< b << endl;
    cout<< "c = "<< c <<endl;
    system("pause");
    return 0;
}