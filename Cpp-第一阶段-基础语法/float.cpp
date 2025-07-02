#include<iostream>
using namespace std;
int main()
{
    //浮点型 单精度: float:最多显示7个有效数字(全部的数字) 赋值的时候数字后面要加f（系统默认的字符类型是double）
    //双精度:double(能显示15-16个有效数字) c++默认输出6位有效数字，想要输出多的有效数字的话需要自己配置
    float f1 = 3.14f;
    cout<<"f1的大小"<< f1<<endl;
    double d1 = 3.1415926;
    cout<<"d1的大小" << d1 <<endl;//输出3.14159
    //float 和 double 的内存大小
    cout<< "float的内存大小"<<sizeof(float) <<endl;
    cout<<"double的内存大小"<< sizeof(double)<< endl;

    //科学计数法
    float f2 = 3e2f;//相当于3 * 10 ^ 2;
    cout<<"3e2的大小"<< f2 << endl;
    float f3 = 3e-1;//相当于3 * 10 ^ -1;
    cout<<"3e-1的大小"<<f3<<endl;
    system("pause");
    return 0;
}