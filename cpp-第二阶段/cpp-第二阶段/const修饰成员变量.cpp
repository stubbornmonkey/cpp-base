//#include<iostream>
//using namespace std;
//class Person 
//{
//public:
//	//this是一个指针常量 Person * const this;
//	//常函数底层时修改的this指针在 整个指针前加const 变成不可修改值
//	//常函数不可修改成员属性
//	void func_01() const
//	{
//		//m_Age = 100;//报错不可修改
//		m_Salary = 10000;//可以修改，原因:m_Salary是一个特殊变量，可以在常函数中修改
//	}
//	void func_02()
//	{
//		//成员函数中可以修改属性
//		m_Age = 100;
//	}
//	int m_Age;
//	mutable int m_Salary;
//};
//void test_01()
//{
//	Person p;
//	p.func_01();
//}
////常对象
//void test_02()
//{
//	const Person p;
//	//p.func_02();//常对象不能调用成员函数,原因:成员函数可以修改成员属性，常对象的属性不能修改，所以不能调用成员变量
//	//常对象只能调用长函数
//	//p.func_01();
//}
//int main()
//{
//	system("pause");
//	return 0;
//}