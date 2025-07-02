#include<iostream>
using namespace std;
int main() 
{

    //有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？
    int A,B,C;
    cin>>A>>B>>C;

    int maxWeight = 0;
    if (A > B) {
        maxWeight = A;
    } else {
        maxWeight = B;
    }
    if (C > maxWeight) {
        maxWeight = C;
    }

    cout<<"体重最重的小猪："<< maxWeight<<endl;
    system("pause");
    return 0;
}