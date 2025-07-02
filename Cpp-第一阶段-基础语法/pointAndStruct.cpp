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
int main()
{
    //指针引用结构体
    //创建结构体
    struct student s = { "张三",18,100 };
    //创建指针指向
    struct student * p = &s;
    //怎么利用指针访问其中的属性呢
    cout<<"姓名 "<< p -> name << "年龄 " << p -> age << "分数 "<< p ->score <<endl;
    system("pause");
    return 0;
}