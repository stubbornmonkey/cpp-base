#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    //1.���ñ���ӳ�ʼ��
    //int &b;������
    int &b = a;
    //2.�����޷��޸�
    int c =20;
    b = c;//�ǽ�c��ֵ��ֵ��b����û���޸�b������
    cout<<"b = " << b << endl;
    cout<< "a = " << a <<endl;
    cout<< "c = " << c <<endl;
    system("pause");
    return 0;
}