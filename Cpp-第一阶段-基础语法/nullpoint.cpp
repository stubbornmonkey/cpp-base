#include<iostream>
using namespace std;
int main()
{
    //��ָ����ָ���ڴ���Ϊ���ָ��
    int * p = NULL;
    //��ָ���ǲ��ܷ��ʵ�
    //��Ϊ�ڴ���0~255��ϵͳռ�õ��ڴ棬�ǲ����Ա����ʵ�
    *p = 100;
    cout<< *p << endl;
    system("pause");
    return 0;
}