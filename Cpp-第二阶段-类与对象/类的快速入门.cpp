#include<iostream>
using namespace std;
//����һ������PI
const double PI = 3.14;
//����һ��Բ��
class circle{
    //����ȷ��Ȩ��
public:
    int r;//�뾶
    //дһ��������������Բ���ܳ�
    double calculateZC () {
        return 2*r*PI;
    }
};
int main()
{
    //ʵ����һ��Բ����
    circle c1;
    c1.r = 10;//���뾶��ֵ
    double ZC = c1.calculateZC();
    cout<<"Բ���ܳ�:"<< ZC << endl;
    system("pause");
    return 0;
}