#include<iostream>
using namespace std;
//拷贝函数的应用场景
class Person
{
public:
    int age;
    Person() 
    {
        cout<<"无参构造函数" << endl;
    }
    Person(int a) 
    {
        age = a;
        cout<<"有参构造函数" << endl;
    }
    Person(const Person &p) 
    {
        age = p.age;
        cout<<"拷贝函数"<<endl;
    }
    ~Person()
    {
        cout<<"析构函数" << endl;
    }
};
//场景一:创建好一个对象，拷贝一份
void test_01() 
{
    Person p1;
    Person p2(p1);
}
//场景二:函数传参
void doWork01(Person p)
{

}
void test_02()
{
    Person p1;
    doWork01(p1);
}
//场景三:作为函数的返回值
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