#include<iostream>
using namespace std;
class Person
{
    //��̬��Ա��������
    //1.���������������ʼ��
    //2.���еĶ������ͬһ������
    //3.�ڱ���ʱ�ͷ����ڴ�(ȫ����)
    public: static int m_A;
    private: static int m_B;
};
int Person::m_A = 100;//�����ʼ��
int Person::m_B = 200;
void test_01() 
{
    //���ʾ�̬����
    Person p1;
    cout<< p1.m_A <<endl;//100
    //�ı�һ�³�Ա�����ĸ�ֵ
    Person p2;
    cout<< p2.m_A << endl;//100
    //�޸�һ�¾�̬��Ա����
    p1.m_A = 200;
    cout<< p2.m_A <<endl;///200
}
void test_02()
{
    //��̬��Ա�����ַ��ʷ�ʽ
    //��һ��:�����������
    Person p;
    cout << p.m_A <<endl;
    //�ڶ��ַ��ʷ�ʽ����ֱ�ӷ���
    cout<< Person::m_A<<endl;
    //ע�⾲̬��Ա����Ҳ��Ȩ�����η�
    // cout << p.m_B<<endl;//�������ɷ���
}
int main()
{
    // test_01();
    test_02();
    system("pause");
    return 0;
}