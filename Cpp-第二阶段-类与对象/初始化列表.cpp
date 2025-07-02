

#include<iostream>
using namespace std;
class Person
{
public:
    int m_A;
    int m_B;
    int m_C;
    //û���ó�ʼ���б�
    // Person(int a,int b,int c) 
    // {
    //     m_A = a;
    //     m_B = b;
    //     m_C = c;
    // }
    // Person():m_A(10),m_B(20),m_C(30) {}
    Person(int a,int b,int c):m_A(a),m_B(b),m_C(c){};
};
void test() 
{
    // Person p;//��ʼ���б���ֵ�Ͳ��ø�ֵ��
    Person p(10,20,30);//��ʼ���б���ٴ�����
    cout<<"m_A = " << p.m_A <<" m_B = " << p.m_B << " m_C = " << p.m_C << endl;
}
int main()
{
    test();
    system("pause");
    return 0;
}