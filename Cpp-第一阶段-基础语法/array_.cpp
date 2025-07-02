#include<iostream>
using namespace std;
int main() 
{
    //定义方式一
    int arr1[3];
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;

    //定义方式二
    int arr2[3] = {0,1,2};

    //定义方式三
    int arr3[3] = {0,1,2};
    
    system("pause");
    return 0;
}