#include<iostream>
using namespace std;
int * func()
{
    int* p = new int(10); //��new�ؼ���ȥ����һ����ڴ棬new����֮���Ǹ��ڴ�ĵ�ַ
    return p ;
}
int main() 
{
    //���ö��ڴ�
    int * p = func();
    cout << *p << endl;//���ʵ���
    system("pause");
    return 0;
}