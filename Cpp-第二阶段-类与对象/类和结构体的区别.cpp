#include<iostream>
using namespace std;
class c1
{
    int a; //Ĭ��Ȩ����˽��
};
struct s1
{
    int a;//Ĭ��Ȩ���ǹ��е�
};
int main() 
{
    c1 c;
    //c.a = 10;//���ʲ���
    s1 s;
    s.a = 10;//���ʵ���
    system("pause");
    return 0;
}