#include<iostream>
using namespace std;
int main() 
{
    int a = 10;
    int b = 3;
    //�ӷ�
    cout<< a + b << endl;//15
    //����
    cout<< a - b << endl;
    //�˷�
    cout<< a * b << endl;
    //����
    cout<< a / b << endl;//�����̳�ȥ����

    double b1 = 0.5;
    double b2 = 0.25;
    cout<< b1 / b2 << endl;//2���������
    double c1 = 0.7;
    double c2 = 0.3;
    cout<< c1 / c2 << endl;//�����2.33333��ʵ��һ�����޲�ѭ��С��������c++�Ĺ�������6λ��Ч����

    //���������������
    //ǰ�õ���
    ++a;
    cout<< "a =" << a <<endl;//11
    //���õ���
    a++;
    cout<< "a = " << a <<endl; //12

    //ǰ�õ���:�Ƚ��е��������ڽ���ʽ�ӵ�����
    int res = ++a * 10;
    cout<< "res = " << res << endl;//130
    cout<< "a = " << a << endl;//13
    

    res = a++ * 10;
    cout<< "res =" << res <<endl;//130
    cout<< "a = " << a << endl;//14

    //��ֵ�����
    int num = 10;//��ͨ�����

    //�ӵ���
    num += 10;//num = 20;
    cout<< "num = " << num << endl;

    //������
    num -= 10;
    cout<< "num = " << num << endl;

    //�˵���
    num *= 10;
    cout<< "num = " << num << endl;

    //������
    num /= 10;
    cout<< "num = " << num << endl;

    //ȡģ����
    num %= 5;
    cout<< "num = " << num << endl;

    //�Ƚ������
    //==
    //ע�⣺C��C++ ���ԵıȽ������У� ==���桱�����֡�1������ʾ�� ���١������֡�0������ʾ��== 
    int num1 = 10;
    cout<< "num == num1?"<< (num1==num) << endl;

    //!=
    cout<< "num != num1?"<< (num1!=num) << endl;

    //>
    cout<< "num > num1?"<< (num1>num) << endl;

    //<
    cout<< "num < num1?"<< (num1<num) << endl;
    
    //>=
    cout<< "num >= num1?"<< (num1>=num) << endl;

    //<=
    cout<< "num <= num1?"<< (num1<=num) << endl;


    //�߼������
    bool F = false;

    //!
    cout<< "!F = "<< F << endl;

    bool T = true;

    //&&
    cout<< "F && T = "<< (F && T)<< endl;

    //||
    cout<< "T || F = " << (F || T)<<endl;


    system("pause");
    return 0;
}