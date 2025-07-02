#include<iostream>
using namespace std;
int main() 
{
    //switch的使用
    //switch语句中表达式类型只能是整型或者字符型
    int a;
    cout<<"今天星期几?"<<endl;
    cin>>a;
    switch(a){
        case 1:
        cout<<"今天星期一"<<endl;
        break;
        case 2:
        cout<<"今天星期二"<<endl;
        break;
        case 3:
        cout<<"今天星期三"<<endl;
        break;
        case 4:
        cout<<"今天星期四"<<endl;
        break;
        case 5:
        cout<<"今天星期五"<<endl;
        break;
        case 6:
        cout<<"今天星期六"<<endl;
        break;
        case 7:
        cout<<"今天星期日"<<endl;
        break;
        default:
        cout<<"请输入正确的星期数"<<endl;
        break;
    }
    system("pause");
    return 0;
}