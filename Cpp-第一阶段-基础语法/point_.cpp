#include<iostream>
using namespace std;
int main()
{
    //ָ��ı���:ָ��ı��ʾ���һ����ַ
    int a = 10;
    //ָ��Ķ��� �������� * ������
    int * p;
    //ָ��ĸ�ֵ
    p = &a;
    cout<<"a�ĵ�ַ:" << &a <<endl;
    cout<< "p��ֵ:" << p << endl;
    //ָ��Ľ����ã���ָ��ǰ���*���ɣ�
    cout<< "p��Ӧ���ڴ��ֵ:" << *p <<endl;
    system("pause");
    return 0;
}