#include<iostream>
using namespace std;
int main() 
{
    //二维数组的定义
    int arr1[2][2];
    arr1[0][0] = 1;
    arr1[0][1] = 2;
    arr1[1][0] = 3;
    arr1[1][1] = 4;
    for (int i = 0;i < 2;i++) {
        for (int j = 0;j < 2;j++) {
            cout<< arr1[i][j] <<endl;
        }
    }

    int arr2[2][2] = {
        {1,2},
        {1,2}
    };

    for (int i = 0;i < 2;i++) {
        for (int j = 0;j < 2;j++) {
            cout<< arr2[i][j] <<" ";
        }
        cout<<endl;
    }

    int arr3[2][2] = {1,2,3,4};
    for (int i = 0;i < 2;i++) {
        for (int j = 0;j < 2;j++) {
            cout<< arr3[i][j] <<" ";
        }
        cout<<endl;
    }

    int arr4[2][2] = {1,2,3,4};

    for (int i = 0;i < 2;i++) {
        for (int j = 0;j < 2;j++) {
            cout<< arr4[i][j] <<" ";
        }
        cout<<endl;
    }
   
    system("pause");
    return 0;
}