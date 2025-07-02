#include<iostream>
using namespace std;
int main() 
{
    //用指针指向数组
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int * p = arr;//arr就是数组的地址
    cout<<"利用指针访问数组的第一个元素:" << *p << endl;
    //怎么访问第二个元素呢
    p++;//因为p是int类型的指针所以p++会向后移动四个字节
    cout<< "利用指针访问第二个元素:"<< *p << endl;

    //利用指针遍历数组
    int * p2 = arr;
    for (int i = 0;i < 10;i++) {
        cout<< *p2 << endl;
        p2++;
    }
    system("pause");
    return 0;
}