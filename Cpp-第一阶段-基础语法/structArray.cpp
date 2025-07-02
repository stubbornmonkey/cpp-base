#include<iostream>
using namespace std;
//定义一个结构体
struct Student
{
    string name;
    int age;
    int score;
};

int main()
{
    //创建一个结构体数组
    struct Student studentArr[3] =
     {
        { "张三",18,100 },
        { "李四",19,102 },
        { "王五",20,110}
    };
    for (int i = 0;i < 3;i++) {
        cout<<"姓名 " << studentArr[i].name 
            <<"年龄 " << studentArr[i].age
            <<"分数 " << studentArr[i].age <<endl;
    }
    system("pause");
    return 0;
}