#include<iostream>
using namespace std;
//���������Ϻ�������
void func(int & a) 
{
    cout<< " func(int & a) " <<endl;
}
void func(const int & a) 
{
    cout<< " func(const int & a) " <<endl;
}
//��������������Ĭ�ϲ���
void func2(int a)
{
      cout<< " func2(int a) " << endl;
} 
void func2(int a, int b = 10)
{
      cout<< " func2(int a, int b = 10) " << endl;
} 
int main() 
{
    int a = 10;
    func(a);//���õ�һ�� ��Ϊ const int & a = ��ַ ���﷨���Ϸ�
    func(10);//���õڶ��� ��Ϊ int & a = 10 ���﷨���Ϸ�
    //func2(10);//�����������֪�����ĸ� �޷����ֻ�ܱ����������
    func2(10,10);//���õڶ���
    system("pause");
    return 0;
}