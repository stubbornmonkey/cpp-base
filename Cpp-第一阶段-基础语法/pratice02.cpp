#include<iostream>
using namespace std;
int main() 
{

    //����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС�����أ�
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

    cout<<"�������ص�С��"<< maxWeight<<endl;
    system("pause");
    return 0;
}