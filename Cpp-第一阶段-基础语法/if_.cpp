#include<iostream>
using namespace std;
int main() 
{
    //if语句的使用
    int score;
    cin>>score;

    cout<<"您输出的分数" << score << endl;
    if (score > 514) {
        cout <<"我过一本线了"<< endl;
    }//注意：if语句过后不要加分号

    //多行if语句
    if (score > 425) {
        cout << "我过二本线了"<< endl;
    } else {
        cout<<"上大专吧你"<<endl;
    }

    //多条件的if语句
    if (score > 514) {
        cout<<"我过一本线了"<<endl;
    } else if (score > 425) {
        cout<<"我过二本线了"<< endl;
    } else {
        cout<<"上大专吧你"<<endl;
    }

    system("pause");
    return 0;
}