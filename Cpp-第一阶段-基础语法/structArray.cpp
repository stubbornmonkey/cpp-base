#include<iostream>
using namespace std;
//����һ���ṹ��
struct Student
{
    string name;
    int age;
    int score;
};

int main()
{
    //����һ���ṹ������
    struct Student studentArr[3] =
     {
        { "����",18,100 },
        { "����",19,102 },
        { "����",20,110}
    };
    for (int i = 0;i < 3;i++) {
        cout<<"���� " << studentArr[i].name 
            <<"���� " << studentArr[i].age
            <<"���� " << studentArr[i].age <<endl;
    }
    system("pause");
    return 0;
}