#include<iostream>
using namespace std;
class Person
{
public:
    //���캯��:��ʼ������ (���Դ��Σ���������)
    Person() {
        cout<< "Person ���캯��" << endl;
    }

    //�����������ٶ���(�����Դ��Σ�����������)
    ~Person() {
        cout << "Person ����������"<< endl;
    }
};
void test() {
    Person p; //��ջ���У�����ִ�����ͷ�
}
int main() 
{
    //test();
    Person p;//ֻ��main����ִ������ͷ�
    system("pause");
    return 0;
}