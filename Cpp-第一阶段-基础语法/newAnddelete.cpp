#include<iostream>
using namespace std;
//���ض��ڴ�
int * func() 
{
    int * p = new int(10);
    return p;
}
void test_01()
{
    int *p = func();
    cout<<*p << endl;
    cout<<*p << endl;
    cout<<*p << endl;
    //�ͷ��ڴ�
    delete p;
    cout<<*p<<endl;//���޷�����
}
void test_02()
{
    //����һ������(�ö��ڴ�)
    int * arr = new int[10];
    for (int i = 0;i < 10;i++) {
        arr[i] = 100 + i;
    }
    for (int i = 0;i < 10;i++) {
        cout<< arr[i] << endl;
    }
    //�ͷŶ��ڴ�
    delete [] arr; //һ��Ҫ��[] ��������һ������
}
int main()
{
    test_01();
    test_02();
    system("pause");
    return 0;
}