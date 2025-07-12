//#include<iostream>
//using namespace std;
//class Person 
//{
//public:
//	int* m_Age;
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//	//重载赋值运算符（链式编程）
//	Person& operator=(Person &p)
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//	~Person()
//	{
//		if (m_Age != NULL) {
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//};
//void test()
//{
//	Person p1(10);
//	Person p2(20);
//	p2 = p1;
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}