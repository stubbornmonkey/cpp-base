#include<iostream>
using namespace std;
class Person
{
public :
    static int m_B;
    int m_A;
    void func(){}
    static void func2() {}

};
int Person::m_B= 100;
void test_01()
{
    Person p;
    cout<< "�ն���Ĵ�С:" << sizeof(p) <<endl; //1
    cout<< "��һ���Ǿ�̬�����Ķ���Ĵ�С:" << sizeof(p) <<endl;//4
    cout<< "��һ���Ǿ�̬�����ͷǾ�̬�����Ķ����С:" <<sizeof(p) <<endl;//4
    cout<<"��һ����̬������һ���Ǿ�̬������һ���Ǿ�̬�����Ķ����С" << sizeof(p) << endl;//4
    cout<<"��һ����̬�����;�̬������һ���Ǿ�̬�����ͷǾ�̬�����Ķ����С" <<sizeof(p) <<endl;//4
}
int main()
{
    test_01();
    system("pause");
    return 0;
}