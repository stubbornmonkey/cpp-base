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
    cout<< " ѧ�������� " << s.name << " ѧ�������� " 
        << s.age << " ѧ���ķ��� " << s.score << endl;
}

void print2(struct student * p) 
{
    p->age = 200;
    cout<< " ѧ�������� " << p -> name << " ѧ�������� " 
        << p -> age << " ѧ���ķ��� " << p -> score << endl;
}
int main() 
{
    struct student s = {"cty",21,100};
    //print1(s);
    print2(&s);
    cout<< " ѧ�������� " << s.name << " ѧ�������� " 
        << s.age << " ѧ���ķ��� " << s.score << endl;
    system("pause");
    return 0;
}