#include<iostream>
using namespace std;
int main() 
{
    //布尔类型的值表示真或假(true表示真本质是1，false表示假本质是0)
    bool flag = true;
    cout<<"flag的值" << flag<<endl;//1
    bool flag1 = false;
    cout<< "false1的值的"<< flag1 <<endl;//0 
    //bool类型的内存大小
    cout<<"bool类型的大小"<< sizeof(bool)<<endl;
    system("pause");
    return 0;
}