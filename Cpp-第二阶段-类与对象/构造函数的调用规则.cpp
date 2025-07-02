#include<iostream>
using namespace std;
//规则一:编译器会给类提供默认的三个函数（拷贝函数，默认构造函数，析构函数）
//规则二:如果类中写了有参构造函数，编译器则不提供无参函数，但提供拷贝构造函数
//      如果类中写了拷贝函数，编译器则不提供有参和无参构造函数
class Person{
public:
    int m_Age;
    // Person() {
    //     cout<<"Person的默认构造函数"<<endl;
    // }
    // Person(int age)
    // {
    //     m_Age = age;
    //     cout <<"Person的有参构造函数"<< endl;
    // }
    Person(const Person &p)
    {
        m_Age = p.m_Age;
        cout <<"拷贝构造函数"<< endl;
    }
    ~Person()
    {
        cout<<"Person的默认析构函数"<<endl;
    }
};
void Test_01() 
{
    Person p1(18);//
    Person p2(p1);//没有拷贝构造函数的情况下调用了编译器提供的默认拷贝函数
    cout<< "p2的年龄"<<p2.m_Age << endl;
}
void Test_02() 
{
    // Person p1;//报错找不到无参构造函数
    // Person p1(28);//没有报错（只有拷贝构造函数时报错）
    Person p2(p1);
}
int main()
{
    Test_02();
    system("pause");
    return 0;
}