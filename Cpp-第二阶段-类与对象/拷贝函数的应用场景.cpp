#include<iostream>
using namespace std;
//����������Ӧ�ó���
class Person
{
public:
    int age;
    Person() 
    {
        cout<<"�޲ι��캯��" << endl;
    }
    Person(int a) 
    {
        age = a;
        cout<<"�вι��캯��" << endl;
    }
    Person(const Person &p) 
    {
        age = p.age;
        cout<<"��������"<<endl;
    }
    ~Person()
    {
        cout<<"��������" << endl;
    }
};
//����һ:������һ�����󣬿���һ��
void test_01() 
{
    Person p1;
    Person p2(p1);
}
//������:��������
void doWork01(Person p)
{

}
void test_02()
{
    Person p1;
    doWork01(p1);
}
//������:��Ϊ�����ķ���ֵ
Person doWork02() {
    Person p1;
    return p1;
}
void test_03() 
{
    doWork02();
}
int main()
{
    //test_01();
    //test_02();
    test_03();
    system("pause");
    return 0;
}