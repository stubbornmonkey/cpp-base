#include<iostream>
using namespace std;
int main()
{
    //���õ��﷨ �������� &���� = ԭ�� ע�⣺�������Ʋ��ݵ���һ���ڴ�
    int a = 10;
    int &b = a;
    cout<< " a = " << a <<endl;
    cout<< " b = " << b << endl;
    b = 20;
    cout<< " a = " << a << endl;
    system("pause");
    return 0;
}