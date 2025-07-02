#include<iostream>
using namespace std;
class Person
{
public:
    //构造函数:初始化对象 (可以传参，可以重载)
    Person() {
        cout<< "Person 构造函数" << endl;
    }

    //析构函数销毁对象(不可以传参，不可以重载)
    ~Person() {
        cout << "Person 的析构函数"<< endl;
    }
};
void test() {
    Person p; //在栈区中，函数执行完释放
}
int main() 
{
    //test();
    Person p;//只有main函数执行完才释放
    system("pause");
    return 0;
}