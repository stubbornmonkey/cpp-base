#include<iostream>
using namespace std;
#include<string> //注意c++风格的字符串需要加入这个头文件
int main() 
{   
    //c风格的字符串：char变量名[] = 变量值
    char s1 [] = "你好";
    cout<<"s1的值:"<< s1<<endl;
    //c++风格：String 变量名 = 变量值
    string name = "cty";//注意string的s是小写(java是大写)
    cout<<"name = " << name <<endl;
    system("pause");
    return 0;
}