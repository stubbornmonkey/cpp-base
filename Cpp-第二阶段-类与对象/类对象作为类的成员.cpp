#include<iostream>
using namespace std;
#include<string>
//规则：先将类对象初始化，在初始化类，先销毁类，再销毁类对象
class Phone
{
public:
    string P_Name;
    Phone(string name):P_Name(name){
        cout<<"Phone的构造函数"<< endl;
    }
    ~Phone()
    {
        cout<<"Phone的析构函数"<<endl;
    }
};
class Person
{
public:
    string m_Name;
    Phone phone;
    Person(string name,string p_Name):m_Name(name),phone(p_Name) {
        cout<<"Person的构造函数"<<endl;
    };
    ~Person()
    {
        cout<<"Person的析构函数"<<endl;
    }
};
void test() 
{
    Person p1("张三","苹果MAX");
}
int main() 
{
    test();
    system("pause");
    return 0;
}