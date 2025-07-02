#include<iostream>
using namespace std;
class c1
{
    int a; //默认权限是私密
};
struct s1
{
    int a;//默认权限是公有的
};
int main() 
{
    c1 c;
    //c.a = 10;//访问不到
    s1 s;
    s.a = 10;//访问到了
    system("pause");
    return 0;
}