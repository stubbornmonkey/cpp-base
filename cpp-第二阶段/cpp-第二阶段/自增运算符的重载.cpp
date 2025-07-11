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
//	//前置++重载（返回引用，可以进行链式编程）
//	MyInteger& operator++()
//	{
//		m_Num++;
//		return *this;
//	}
//	//后置++重载(返回对象，不会发生链式编程的情况，用int做占位符表示后置++)
//	MyInteger operator++(int)
//	{
//		MyInteger temp = *this;
//		m_Num++;
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
//void test_01()
//{
//	MyInteger myint;
//	cout << myint << endl;
//	cout << myint++ << endl;
//	cout << ++myint << endl;
//}
//int main()
//{
//	test_01();
//	system("pause");
//	return 0;
//}