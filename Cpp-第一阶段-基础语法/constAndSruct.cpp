#include<iostream>
using namespace std;
#include<string>
//����һ���ṹ��
struct student
{
    string name;
    int age;
    int score;
};
//����һ������ĺ���
void print(const student * s) //Ϊ�˷�ֹ���Ƶı���̫��Ӷ�ռ���ڴ�ֱ����ָ�븳ֵ
{
    //Ϊ�˷�ֹ�����ڲ��޸Ľṹ���е���Ϣ���ṹ�����const
    cout<<"ѧ�������� " << s -> name << " ѧ�������� " << s -> age << " ѧ���ķ��� " << s -> score << endl;
}
int main() 
{
    //����һ���ṹ�����
    struct student s = { "����",15,60 };
    print(&s);
    system("pause");
    return 0;
}