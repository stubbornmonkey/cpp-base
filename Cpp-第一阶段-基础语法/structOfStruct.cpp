#include<iostream>
using namespace std;
//����һ��ѧ���ṹ��
struct student 
{
    string name;
    int age;
    int score;
};
//����һ��tracher�ṹ��
struct teacher
{
    string name;
    int age;
    int id;
    struct student stu;
};
int main() 
{
    //����һ����ʦ����
    struct teacher t;
    t.name = "����";
    t.age = 50;
    t.id = 10000;
    t.stu.name = "��";
    t.stu.age = 18;
    t.stu.score = 60;
    cout<< "��ʦ������: " << t.name << " ��ʦ��id: " << t.id << " ��ʦ������ " << t.age 
        << " ѧ��������: " << t.stu.age << " ѧ��������: " << t.stu.name
        <<" ѧ���ĳɼ�: "<<t.stu.score <<endl;
    system("pause");
    return 0;
}