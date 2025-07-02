#include<iostream>
using namespace std;
//定义一个学生结构体
struct student 
{
    string name;
    int age;
    int score;
};
//定义一个tracher结构体
struct teacher
{
    string name;
    int age;
    int id;
    struct student stu;
};
int main() 
{
    //创建一个老师变量
    struct teacher t;
    t.name = "老王";
    t.age = 50;
    t.id = 10000;
    t.stu.name = "王";
    t.stu.age = 18;
    t.stu.score = 60;
    cout<< "老师的姓名: " << t.name << " 老师的id: " << t.id << " 老师的年龄 " << t.age 
        << " 学生的年龄: " << t.stu.age << " 学生的姓名: " << t.stu.name
        <<" 学生的成绩: "<<t.stu.score <<endl;
    system("pause");
    return 0;
}