#include<iostream>
using namespace std;
#include<string>
int main()
{   
    //数据输入cin>>变量
    int i = 0;
    cout<<"请输入整型变量"<<endl;
    cin>>i;
    cout<<i<<endl;
    double d = 0;
    cout<<"请输入整型变量"<<endl;
    cin>>d;
    cout<<d<<endl;
    char ch = ' ';
    cout<<"字符输入"<<endl;
    cin>>ch;
    cout<<ch<<endl;
    string name = "";
    cout<<"字符串输入"<<endl;
    cin>>name;
    cout<<name<<endl;
    bool flag = false;
    cout<<"bool输入"<<endl;
    cin>>flag;
    cout<<flag<<endl;
    system("pause");
    return 0;
}