#include<iostream>
using namespace std;
class Person{
public:
    int age;
    Person(){
        cout<<"Person���޲ι���" << endl;
    }
    Person(int a) {
        age = a;
        cout<<"Person���вι���"<< endl;
    }
    Person(const Person &p) {
        age = p.age;
        cout<<"Pserson�Ŀ������캯��"<<endl;
    }
    ~Person() 
    {
        cout<<"Person����������"<< endl;
    }
};
//�����ĵ���
void test() 
{
    //���ŷ�����
    //Person p1;
    //Person p2(10);
    //Person p3(p2);
    //ע������:�޲ι��첻��Person xx();�������ñ���������Ϊ����һ������������

    //��ʾ������
    Person p1;
    Person p2 = Person(10);
    Person p3 = Person(p2);
    Person(10);//���ʱ�������ã�ִ�������д����ֱ���ͷ��ڴ�

    //��ʽת����
    Person p4 = 10;//�൱�� Person p4 = Person(10);
    //ע��:��ʽת�������ܵ��ÿ�����������ʼ�������������������Ϊ�Ƕ��������
}
int main() 
{
    test();
    system("pause");
    return 0;
}