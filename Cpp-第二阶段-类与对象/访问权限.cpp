#include<iostream>
using namespace std;
#include<string>
//�������η�
//public    ���ڿ��Է��� ����Ҳ���Է���
//protected ���ڿ��Է��� ���ⲻ���Է��� ������Է��ʸ��������
//private   ���ڿ��Է��� ���ⲻ���Է��� ���಻���Է��ʸ��������
class Test
{
    //public������
public:
    int age = 18;
protected:
    string name = "cty";
private:
    string hobby = "qifei";
public:
    void show() 
    {
        cout<<"����:" << name << "����:"<< age << "����:" << hobby <<endl;;
    }
};
int main() 
{
    //ʵ����
    Test t1;
    t1.age = 20;
    //t1.name = "zhangsan";//���ʲ���
    //t1.hobby = "basketball";//���ɷ���
    t1.show();
    system("pause");
    return 0;
}
