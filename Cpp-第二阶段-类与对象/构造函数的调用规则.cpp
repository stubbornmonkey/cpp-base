#include<iostream>
using namespace std;
//����һ:������������ṩĬ�ϵ���������������������Ĭ�Ϲ��캯��������������
//�����:�������д���вι��캯�������������ṩ�޲κ��������ṩ�������캯��
//      �������д�˿������������������ṩ�вκ��޲ι��캯��
class Person{
public:
    int m_Age;
    // Person() {
    //     cout<<"Person��Ĭ�Ϲ��캯��"<<endl;
    // }
    // Person(int age)
    // {
    //     m_Age = age;
    //     cout <<"Person���вι��캯��"<< endl;
    // }
    Person(const Person &p)
    {
        m_Age = p.m_Age;
        cout <<"�������캯��"<< endl;
    }
    ~Person()
    {
        cout<<"Person��Ĭ����������"<<endl;
    }
};
void Test_01() 
{
    Person p1(18);//
    Person p2(p1);//û�п������캯��������µ����˱������ṩ��Ĭ�Ͽ�������
    cout<< "p2������"<<p2.m_Age << endl;
}
void Test_02() 
{
    // Person p1;//�����Ҳ����޲ι��캯��
    // Person p1(28);//û�б���ֻ�п������캯��ʱ����
    Person p2(p1);
}
int main()
{
    Test_02();
    system("pause");
    return 0;
}