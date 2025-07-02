#include<iostream>
using namespace std;
//定义一个常量PI
const double PI = 3.14;
//创建一个圆类
class circle{
    //首先确定权限
public:
    int r;//半径
    //写一个函数用来计算圆的周长
    double calculateZC () {
        return 2*r*PI;
    }
};
int main()
{
    //实例化一个圆对象
    circle c1;
    c1.r = 10;//给半径赋值
    double ZC = c1.calculateZC();
    cout<<"圆的周长:"<< ZC << endl;
    system("pause");
    return 0;
}