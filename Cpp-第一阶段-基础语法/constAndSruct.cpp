#include<iostream>
using namespace std;
#include<string>
//定义一个结构体
struct student
{
    string name;
    int age;
    int score;
};
//创建一个输出的函数
void print(const student * s) //为了防止复制的变量太多从而占用内存直接用指针赋值
{
    //为了防止函数内部修改结构体中的信息给结构体加上const
    cout<<"学生的名字 " << s -> name << " 学生的年龄 " << s -> age << " 学生的分数 " << s -> score << endl;
}
int main() 
{
    //创建一个结构体变量
    struct student s = { "张三",15,60 };
    print(&s);
    system("pause");
    return 0;
}