#include<iostream>
using namespace std;
//this����;
//1.�������������
//2.���ض�����
class Person
{
    public: int age;
    Person(int age){
        this->age = age;
    }
    //����ʽ���أ�һ����Ҫ����Ӧ�ò�Ȼ�Ḵ��һ�ݣ�
    Person& PersonAddAge(Person &p)
    {
        this->age += p.age;
        return *this;
    }
};
void test_01()
{
    Person p1(10);
    cout<< p1.age<< endl;
    Person p2(10);
    p1.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2);
    cout<<p1.age<<endl;
}
int main()
{
    test_01();
    system("pause");
    return 0;
}