#include<iostream>
using namespace std;
#include<string>
//�ṹ��:�Զ���ı�������
struct Student{
    //����
    string name;
    int age;
    int score;
}s3;//�����ִ�����ʽ

int main()
{
    //�����ṹ�����
    //��һ�ַ�ʽ
    Student s1;
    s1.name = "cty";
    s1.age = 10;
    s1.score = 100;
    cout<< "���� " << s1.name << "���� " << s1.age << "���� " << s1.score << endl;
    //�ڶ��ַ�ʽ
    Student s2 = { "����",19,88 };
    cout<< "���� " << s2.name << "���� " << s2.age << "���� " << s2.score << endl;

    //�����ַ�ʽ:�ڴ����ṹ���ʱ�򴴽�
    s3.name = "����";
    s3.age = 20;
    s3.score = 0;
    cout<< "���� " << s3.name << "���� " << s3.age << "���� " << s3.score << endl;
    system("pause");
    return 0;
}