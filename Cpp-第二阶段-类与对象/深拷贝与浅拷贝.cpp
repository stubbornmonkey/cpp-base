#include<iostream>
using namespace std;
//ǳ����:�򵥵�ֵ����
//���:�ڶ�������һ���µ��ڴ棬��ֵ�洢������
class Person
{
public:
    int m_Age;
    int *Height;
    Person() 
    {
        cout <<"Ĭ�Ϲ��캯��"<< endl;
    }
    Person(int age,int height) 
    {
        m_Age = age;
        Height = new int(height);
        cout<<"�вι��캯��"<< endl;
    }
    Person(const Person &p) {
        m_Age = p.m_Age;
        Height = new int (*p.Height);//�������µ��ڴ���
    }
    ~Person() 
    {
        //��������������:�ͷŶ��ڴ�
        if (Height != NULL) {
            delete Height;
            Height = NULL;
        }
        cout<<"��������"<<endl;
    }
};
void test_01() 
{
    Person p1(18,160);
    Person p2(p1);//����ᷢ�����������ԭ��:�ͷ���ͬһ���ڴ�
    //�������дһ���������캯��������һ���µ��ڴ�����ֵ
}
int main()
{
    test_01();
    system("pause");
    return 0;
}