#include<iostream>
using namespace std;
class Person
{
    //静态成员变量特征
    //1.类内声明，类外初始化
    //2.所有的对象访问同一份数据
    //3.在编译时就分配内存(全局区)
    public: static int m_A;
    private: static int m_B;
};
int Person::m_A = 100;//类外初始化
int Person::m_B = 200;
void test_01() 
{
    //访问静态变量
    Person p1;
    cout<< p1.m_A <<endl;//100
    //改变一下成员变量的赋值
    Person p2;
    cout<< p2.m_A << endl;//100
    //修改一下静态成员变量
    p1.m_A = 200;
    cout<< p2.m_A <<endl;///200
}
void test_02()
{
    //静态成员的两种访问方式
    //第一种:创建对象访问
    Person p;
    cout << p.m_A <<endl;
    //第二种访问方式类名直接访问
    cout<< Person::m_A<<endl;
    //注意静态成员变量也有权限修饰符
    // cout << p.m_B<<endl;//报错，不可访问
}
int main()
{
    // test_01();
    test_02();
    system("pause");
    return 0;
}