#include<iostream>
using namespace std;
#include<string>
//案例要求:设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student{
public:
    //成员变量
    string name;
    string id;

    void setName(string f_Name) {
        name = f_Name;
    }

    void setId(string f_Id) {
        id = f_Id;
    }
    //成员方法
    void show() {
        cout<< " 姓名: " << name << " id: " << id << endl;
    }
};
int main()
{
    //实例化一个对象
    Student s;
    s.setId("123456");
    s.setName("cty");
    s.show();
    system("pause");
    return 0;
}