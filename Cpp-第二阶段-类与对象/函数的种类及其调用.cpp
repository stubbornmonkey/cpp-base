#include<iostream>
using namespace std;
class Person{
public:
    int age;
    Person(){
        cout<<"Person的无参构造" << endl;
    }
    Person(int a) {
        age = a;
        cout<<"Person的有参构造"<< endl;
    }
    Person(const Person &p) {
        age = p.age;
        cout<<"Pserson的拷贝构造函数"<<endl;
    }
    ~Person() 
    {
        cout<<"Person的析构函数"<< endl;
    }
};
//函数的调用
void test() 
{
    //括号法调用
    //Person p1;
    //Person p2(10);
    //Person p3(p2);
    //注意事项:无参构造不能Person xx();这样调用编译器会认为这是一个函数的声明

    //显示法调用
    Person p1;
    Person p2 = Person(10);
    Person p3 = Person(p2);
    Person(10);//这个时匿名调用，执行完这行代码就直接释放内存

    //隐式转换法
    Person p4 = 10;//相当于 Person p4 = Person(10);
    //注意:隐式转换法不能调用拷贝函数，初始化匿名对象编译器会认为是对象的声明
}
int main() 
{
    test();
    system("pause");
    return 0;
}