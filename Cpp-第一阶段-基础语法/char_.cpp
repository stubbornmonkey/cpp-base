#include<iostream>
using namespace std;
int main()
{
    //char���ַ�����
    //���巽ʽ
    char c1 = 'a';
    cout<<"c1 = " << c1 << endl;
    //char���͵��ڴ��С(��λ:�ֽ�)
    cout<< "char���͵��ڴ��С"<<sizeof(char)<< endl;
    //char�����ڼ����������һ������
    cout<<"char���͵ı���"<< (int) c1 << endl;//97
    system("pause");
    return 0;
}