//#include<iostream>
//using namespace std;
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	//前置--的重载
//	MyInteger& operator--()
//	{
//		m_Num--;
//		return *this;
//	}
//	//后置--的重载
//	MyInteger operator--(int)
//	{
//		MyInteger temp = *this;
//		m_Num--;
//		return temp;
//	}
//private:
//	int m_Num;
//};
////左移运算符的重载
//ostream& operator<<(ostream &cout,MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//void test()
//{
//	MyInteger myint;
//	cout << myint << endl;
//	cout << myint-- << endl;
//	cout << --myint << endl;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}