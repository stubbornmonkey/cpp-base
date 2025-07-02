#include<iostream>
using namespace std;
#include<string>
//结构体:自定义的变量类型
struct Student{
    //属性
    string name;
    int age;
    int score;
}s3;//第三种创建方式

int main()
{
    //创建结构体变量
    //第一种方式
    Student s1;
    s1.name = "cty";
    s1.age = 10;
    s1.score = 100;
    cout<< "姓名 " << s1.name << "年龄 " << s1.age << "分数 " << s1.score << endl;
    //第二种方式
    Student s2 = { "张三",19,88 };
    cout<< "姓名 " << s2.name << "年龄 " << s2.age << "分数 " << s2.score << endl;

    //第三种方式:在创建结构体的时候创建
    s3.name = "李四";
    s3.age = 20;
    s3.score = 0;
    cout<< "姓名 " << s3.name << "年龄 " << s3.age << "分数 " << s3.score << endl;
    system("pause");
    return 0;
}