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
int main()
{
    //ָ�����ýṹ��
    //�����ṹ��
    struct student s = { "����",18,100 };
    //����ָ��ָ��
    struct student * p = &s;
    //��ô����ָ��������е�������
    cout<<"���� "<< p -> name << "���� " << p -> age << "���� "<< p ->score <<endl;
    system("pause");
    return 0;
}