#include<iostream>
using namespace std;
#include<string>
//�����Ƚ�������ʼ�����ڳ�ʼ���࣬�������࣬�����������
class Phone
{
public:
    string P_Name;
    Phone(string name):P_Name(name){
        cout<<"Phone�Ĺ��캯��"<< endl;
    }
    ~Phone()
    {
        cout<<"Phone����������"<<endl;
    }
};
class Person
{
public:
    string m_Name;
    Phone phone;
    Person(string name,string p_Name):m_Name(name),phone(p_Name) {
        cout<<"Person�Ĺ��캯��"<<endl;
    };
    ~Person()
    {
        cout<<"Person����������"<<endl;
    }
};
void test() 
{
    Person p1("����","ƻ��MAX");
}
int main() 
{
    test();
    system("pause");
    return 0;
}