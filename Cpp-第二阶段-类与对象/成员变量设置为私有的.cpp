#include<iostream>
using namespace std;
#include<string>
//成员变量设置为私有的
class Person
{
private:
    string name; //可读可写 
    int age = 18;    //只读不可写 如果可以写了但传入数据要在 0 ~ 150 之间
    string hobby; //可写不可读
public:
    void setName(string m_Name) {
        name = m_Name;
    }

    string getName() {
        return name;
    }

    void setAge(int m_Age) {
        if (m_Age > 150 || m_Age < 0) {
            cout<< " 您输入的年龄："<< m_Age <<" 不合法 "<< endl;
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
    cout<< " 名字: " << p1.getName() << endl;

    //p1.setAge();//没有此方法访问不到
    cout<< " 年龄: " << p1.getAge() << endl;

    p1.setHobby("basketball");
    //p1,getHobby();//没有该方法访问不到
    p1.setAge(1000);
    system("pause");
    return 0;
}