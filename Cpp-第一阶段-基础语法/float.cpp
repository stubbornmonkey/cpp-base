#include<iostream>
using namespace std;
int main()
{
    //������ ������: float:�����ʾ7����Ч����(ȫ��������) ��ֵ��ʱ�����ֺ���Ҫ��f��ϵͳĬ�ϵ��ַ�������double��
    //˫����:double(����ʾ15-16����Ч����) c++Ĭ�����6λ��Ч���֣���Ҫ��������Ч���ֵĻ���Ҫ�Լ�����
    float f1 = 3.14f;
    cout<<"f1�Ĵ�С"<< f1<<endl;
    double d1 = 3.1415926;
    cout<<"d1�Ĵ�С" << d1 <<endl;//���3.14159
    //float �� double ���ڴ��С
    cout<< "float���ڴ��С"<<sizeof(float) <<endl;
    cout<<"double���ڴ��С"<< sizeof(double)<< endl;

    //��ѧ������
    float f2 = 3e2f;//�൱��3 * 10 ^ 2;
    cout<<"3e2�Ĵ�С"<< f2 << endl;
    float f3 = 3e-1;//�൱��3 * 10 ^ -1;
    cout<<"3e-1�Ĵ�С"<<f3<<endl;
    system("pause");
    return 0;
}