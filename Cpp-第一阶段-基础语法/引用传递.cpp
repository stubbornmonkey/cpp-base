#include<iostream>
using namespace std;
//���������ô���
void swap(int &a,int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    swap(a,b);
    cout<<"a = " << a <<endl;
    cout<< "b = " << b << endl;
    //�����˽�����˵�����ô��ݵ��βλ�Ӱ��ʵ��
    system("pause");
    return 0;
}