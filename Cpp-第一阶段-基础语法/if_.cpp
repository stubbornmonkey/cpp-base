#include<iostream>
using namespace std;
int main() 
{
    //if����ʹ��
    int score;
    cin>>score;

    cout<<"������ķ���" << score << endl;
    if (score > 514) {
        cout <<"�ҹ�һ������"<< endl;
    }//ע�⣺if������Ҫ�ӷֺ�

    //����if���
    if (score > 425) {
        cout << "�ҹ���������"<< endl;
    } else {
        cout<<"�ϴ�ר����"<<endl;
    }

    //��������if���
    if (score > 514) {
        cout<<"�ҹ�һ������"<<endl;
    } else if (score > 425) {
        cout<<"�ҹ���������"<< endl;
    } else {
        cout<<"�ϴ�ר����"<<endl;
    }

    system("pause");
    return 0;
}