#include<iostream>
using namespace std;
#include<string>
//��Ա��������Ϊ˽�е�
class Person
{
private:
    string name; //�ɶ���д 
    int age = 18;    //ֻ������д �������д�˵���������Ҫ�� 0 ~ 150 ֮��
    string hobby; //��д���ɶ�
public:
    void setName(string m_Name) {
        name = m_Name;
    }

    string getName() {
        return name;
    }

    void setAge(int m_Age) {
        if (m_Age > 150 || m_Age < 0) {
            cout<< " ����������䣺"<< m_Age <<" ���Ϸ� "<< endl;
        }
        age = m_Age;
    }

    int getAge() {
        return age;
    }

    void setHobby(string m_Hobby) {
        hobby = m_Hobby;
    }
};
int main()
{
    Person p1;
    p1.setName("cty");
    cout<< " ����: " << p1.getName() << endl;

    //p1.setAge();//û�д˷������ʲ���
    cout<< " ����: " << p1.getAge() << endl;

    p1.setHobby("basketball");
    //p1,getHobby();//û�и÷������ʲ���
    p1.setAge(1000);
    system("pause");
    return 0;
}