#include<iostream>
using namespace std;
//�ֲ����������ò�����Ϊ����ֵ(��Ϊ�ֲ�������ջ��������ִ������ͷ��ڴ�)
int& func01()
{
    int a = 10;
    return a;
}

int& function()
{
    static int a = 10;//������Ϊ����ֵ����̬������ȫ������
    return a;
}
int main() 
{
    //int &ref = func01();
    //cout<<"ref = " << ref << endl;//���ʲ���
    int &ref = function();
    cout<< "ref = " <<ref <<endl;//���ʵ���
    //����������ֵΪ��������ʱ���������Ϳ��Ե���ֵʹ��
    function() = 1000;//�����صı��������޸�
    cout<< "ref = " << ref <<endl;//1000
    system("pause");
    return 0;
}