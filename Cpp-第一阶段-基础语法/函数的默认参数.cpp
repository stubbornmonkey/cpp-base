#include<iostream>
using namespace std;
//������Ĭ��ֵ
//ע������һ:�����ĵ�һ��������Ĭ��ֵ����������ĺ���Ĳ�����Ҫ��Ĭ��ֵ
int func1(int a,int b = 10,int c = 10)
{
    return a + b + c;
}
//ע�������:������������ʵ��ֻ����һ��Ĭ��ֵ,�������ֱ���
int func2(int a,int b,int c);

int func2(int a = 10,int b = 10 ,int c =20) 
{
    return a + b + c;
}


int main() 
{
    int res = func1(10);
    cout<< "res = " << res << endl;
    int res2 = func2();
    cout << "res2 = " << res2 << endl;
    system("pause");
    return 0;
}