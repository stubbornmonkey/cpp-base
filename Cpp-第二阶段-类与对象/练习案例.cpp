#include<iostream>
using namespace std;
#include<string>
//����Ҫ��:���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
class Student{
public:
    //��Ա����
    string name;
    string id;

    void setName(string f_Name) {
        name = f_Name;
    }

    void setId(string f_Id) {
        id = f_Id;
    }
    //��Ա����
    void show() {
        cout<< " ����: " << name << " id: " << id << endl;
    }
};
int main()
{
    //ʵ����һ������
    Student s;
    s.setId("123456");
    s.setName("cty");
    s.show();
    system("pause");
    return 0;
}