#include<iostream>
using namespace std;
//返回堆内存
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
    //释放内存
    delete p;
    cout<<*p<<endl;//已无法访问
}
void test_02()
{
    //创建一个数组(用堆内存)
    int * arr = new int[10];
    for (int i = 0;i < 10;i++) {
        arr[i] = 100 + i;
    }
    for (int i = 0;i < 10;i++) {
        cout<< arr[i] << endl;
    }
    //释放堆内存
    delete [] arr; //一定要带[] 表明这是一个数组
}
int main()
{
    test_01();
    test_02();
    system("pause");
    return 0;
}