#include<iostream>
using namespace std;
int main() 
{
    //������������
    //1.�����������ĳ���
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"arr���ڴ���ռ�õĳ��ȣ�"<< sizeof(arr)<<endl;
    cout<<"arr[0]���ڴ��еĳ��ȣ�"<< sizeof(arr[0])<<endl;
    cout<<"������Ԫ�صĸ���" << sizeof(arr) / sizeof(arr[0]) <<endl;
    //2.���������׵�ַ
    cout<< "������׵�ַ" << (int)arr<<endl;//Ĭ��ʮ�����ƣ�ת��ʮ����
    cout<<"�����е�һ��Ԫ�صĵ�ַ"<<(int) &arr[0]<<endl;//�������׵�ַ��ͬ
    cout<<"�����еڶ���Ԫ�صĵ�ַ"<<(int)&arr[1] << endl;//�������׵�ַ���4
    system("pause");
    return 0;
}