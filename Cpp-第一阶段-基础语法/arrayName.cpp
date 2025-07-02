#include<iostream>
using namespace std;
int main() 
{
    //数组名的作用
    //1.获得整个数组的长度
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"arr在内存中占用的长度："<< sizeof(arr)<<endl;
    cout<<"arr[0]在内存中的长度："<< sizeof(arr[0])<<endl;
    cout<<"数组中元素的个数" << sizeof(arr) / sizeof(arr[0]) <<endl;
    //2.获得数组的首地址
    cout<< "数组的首地址" << (int)arr<<endl;//默认十六进制，转成十进制
    cout<<"数组中第一个元素的地址"<<(int) &arr[0]<<endl;//与数组首地址相同
    cout<<"数组中第二个元素的地址"<<(int)&arr[1] << endl;//与数组首地址相差4
    system("pause");
    return 0;
}