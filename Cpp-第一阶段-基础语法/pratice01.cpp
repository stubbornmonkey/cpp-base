#include<iostream>
using namespace std;
int main()
{
    //��һ��if������ϰ����
    /*
    * ��ʾ�û�����һ���߿����Է��������ݷ����������ж�
    * �����������600����Ϊ����һ��������500�ֿ��϶���������400����������������Ϊδ���ϱ��ƣ�
    * ��һ�������У��������700�֣����뱱�󣬴���650�֣������廪������600�����˴�
    */
    int score;
    cin>> score;
    if (score > 600){
        if (score > 700) {
            cout<< "�ҿ������廪"<<endl;
        } else if (score > 650) {
            cout<<"�ҿ����˱���"<<endl;
        } else {
            cout<<"�ҿ������˴�"<<endl;
        }
    } else if (score > 500) {
        cout<<"�ҹ��˶�����"<< endl;
    } else if (score > 400) {
        cout<<"�ҹ���������"<<endl;
    }else {
        cout<<"δ���ϱ���"<<endl;
    }
    system("pause");
    return 0;
}