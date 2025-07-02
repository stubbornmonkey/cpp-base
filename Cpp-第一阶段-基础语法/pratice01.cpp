#include<iostream>
using namespace std;
int main()
{
    //做一个if语句的练习案例
    /*
    * 提示用户输入一个高考考试分数，根据分数做如下判断
    * 分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
    * 在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。
    */
    int score;
    cin>> score;
    if (score > 600){
        if (score > 700) {
            cout<< "我考上了清华"<<endl;
        } else if (score > 650) {
            cout<<"我考上了北大"<<endl;
        } else {
            cout<<"我考上了人大"<<endl;
        }
    } else if (score > 500) {
        cout<<"我过了二本线"<< endl;
    } else if (score > 400) {
        cout<<"我过了三本线"<<endl;
    }else {
        cout<<"未考上本科"<<endl;
    }
    system("pause");
    return 0;
}