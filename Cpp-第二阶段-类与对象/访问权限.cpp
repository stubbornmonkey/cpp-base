#include<iostream>
using namespace std;
#include<string>
//访问修饰符
//public    类内可以访问 类外也可以访问
//protected 类内可以访问 类外不可以访问 子类可以访问父类的内容
//private   类内可以访问 类外不可以访问 子类不可以访问父类的内容
class Test
{
    //public的属性
public:
    int age = 18;
protected:
    string name = "cty";
private:
    string hobby = "qifei";
public:
    void show() 
    {
        cout<<"姓名:" << name << "年龄:"<< age << "爱好:" << hobby <<endl;;
    }
};
int main() 
{
    //实例化
    Test t1;
    t1.age = 20;
    //t1.name = "zhangsan";//访问不到
    //t1.hobby = "basketball";//不可访问
    t1.show();
    system("pause");
    return 0;
}
