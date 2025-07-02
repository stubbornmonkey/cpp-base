#include<iostream>
using namespace std;
int main() 
{   
    //转义字符
    //换行符:\n
    cout<<"换行前\n换行后"<<endl;
    //制表符
    cout<<"你好\thello"<<endl;
    //\\转义字符
    cout<<"你\\好"<<endl;//输出内容：你\号
    system("pause");
    return 0;
}