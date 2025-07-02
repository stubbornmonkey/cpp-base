#include<iostream>
using namespace std;
//浅拷贝:简单的值传递
//深拷贝:在堆区开辟一块新的内存，将值存储在其中
class Person
{
public:
    int m_Age;
    int *Height;
    Person() 
    {
        cout <<"默认构造函数"<< endl;
    }
    Person(int age,int height) 
    {
        m_Age = age;
        Height = new int(height);
        cout<<"有参构造函数"<< endl;
    }
    Person(const Person &p) {
        m_Age = p.m_Age;
        Height = new int (*p.Height);//拷贝到新的内存中
    }
    ~Person() 
    {
        //析构函数的作用:释放堆内存
        if (Height != NULL) {
            delete Height;
            Height = NULL;
        }
        cout<<"析构函数"<<endl;
    }
};
void test_01() 
{
    Person p1(18,160);
    Person p2(p1);//这里会发生程序崩溃，原因:释放了同一块内存
    //解决方法写一个拷贝构造函数，创建一个新的内存来放值
}
int main()
{
    test_01();
    system("pause");
    return 0;
}