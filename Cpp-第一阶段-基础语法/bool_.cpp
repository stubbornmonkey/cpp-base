#include<iostream>
using namespace std;
int main() 
{
    //�������͵�ֵ��ʾ����(true��ʾ�汾����1��false��ʾ�ٱ�����0)
    bool flag = true;
    cout<<"flag��ֵ" << flag<<endl;//1
    bool flag1 = false;
    cout<< "false1��ֵ��"<< flag1 <<endl;//0 
    //bool���͵��ڴ��С
    cout<<"bool���͵Ĵ�С"<< sizeof(bool)<<endl;
    system("pause");
    return 0;
}