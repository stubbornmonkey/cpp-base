#include<iostream>
using namespace std;
//��̬��Ա�������ص�
// 1.ֻ�ܷ��ʾ�̬��Ա����
// 2.���ж�����һ����̬��Ա����
class Person {
public: static int m_A;
public: 
    static void func()
    {
        cout<< "static void func()�ĵ���" << endl;
        m_A = 200;//���Է��ʳ�Ա����
        // m_B = 100;//���� ԭ��:�޷��ֱ���������������ĸ����������
    }
public: int m_B;
};
int Person::m_A = 100;
void test_01()
{
    //��̬��Ա�����ķ��ʷ�ʽ
    //��һ��:�����������
    Person p;
    p.func();
    //�ڶ���:ֱ��ͨ�������
    Person::func();
}
void test_02()
{
    //����������õ���һ����̬��Ա����
    Person p1;
    p1.func();
    Person p2;
    p2.func();
}
int main()
{
    test_01();
    system("pause");
    return 0;
}