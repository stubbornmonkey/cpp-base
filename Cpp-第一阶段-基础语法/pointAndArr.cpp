#include<iostream>
using namespace std;
int main() 
{
    //��ָ��ָ������
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int * p = arr;//arr��������ĵ�ַ
    cout<<"����ָ���������ĵ�һ��Ԫ��:" << *p << endl;
    //��ô���ʵڶ���Ԫ����
    p++;//��Ϊp��int���͵�ָ������p++������ƶ��ĸ��ֽ�
    cout<< "����ָ����ʵڶ���Ԫ��:"<< *p << endl;

    //����ָ���������
    int * p2 = arr;
    for (int i = 0;i < 10;i++) {
        cout<< *p2 << endl;
        p2++;
    }
    system("pause");
    return 0;
}