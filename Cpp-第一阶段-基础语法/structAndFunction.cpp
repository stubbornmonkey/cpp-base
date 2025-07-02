#include<iostream>
using namespace std;
struct student
{
    string name;
    int age;
    int score;
};
void print1(struct student s)  
{
    s.age = 100;
    cout<< " 学生的姓名 " << s.name << " 学生的年龄 " 
        << s.age << " 学生的分数 " << s.score << endl;
}

void print2(struct student * p) 
{
    p->age = 200;
    cout<< " 学生的姓名 " << p -> name << " 学生的年龄 " 
        << p -> age << " 学生的分数 " << p -> score << endl;
}
int main() 
{
    struct student s = {"cty",21,100};
    //print1(s);
    print2(&s);
    cout<< " 学生的姓名 " << s.name << " 学生的年龄 " 
        << s.age << " 学生的分数 " << s.score << endl;
    system("pause");
    return 0;
}