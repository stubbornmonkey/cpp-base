//#include<iostream>
//using namespace std;
////继承中的重名问题
//class Base
//{
//	
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	int m_A;
//	void func()
//	{
//		cout << "Base - func()" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base - func(int a)" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	int m_A;
//
//	void func()
//	{
//		cout << "Son - func()"<< endl;
//	}
//};
////测试一下成员变量
//void test_01()
//{
//	Son s;
//	cout << "son 中的m_A  = " << s.m_A << endl;
//	//调用父类中的m_A
//	cout << "Base 中的m_A  = "<< s.Base::m_A<<endl;//调用父类中重名的成员必须要加声明
//}
////测试重名函数
//void test_02()
//{
//	Son s;
//	s.func();
//	//重名函数调用也需要声明
//	s.Base::func();
//
//	//s.func(100);//报错，当父类中的函数与子类中的函数重名时，子类中的函数全部覆盖父类中的函数，如果要调用必须要加声明
//	s.Base::func(100);
//}
//int main()
//{
//	//test_01();
//	test_02();
//	system("pause");
//	return 0;
//}