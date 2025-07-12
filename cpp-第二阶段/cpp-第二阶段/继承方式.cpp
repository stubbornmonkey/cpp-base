#include<iostream>
using namespace std;
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
//公开继承
class Son1 :public Base
{
public:
	void test()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100;//上面两个都可以访问，就私有变量不可以访问
	}
};
void test_01()
{
	Son1 s1;
	s1.m_A = 1000;
	//s1.m_B = 1000;//不可访问，权限变成了protected
}
class Son2 :protected Base
{
public:
	void test()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100;//无法访问
	}
};
void test_02()
{
	Son2 s2;
	//s2.m_A = 1000;无法访问，变成了protected
	//s2.m_B = 1000;无法访问，变成了protected
}
class Son3 :private Base
{
public:
	void test()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100;不可访问
	}
};
void test_03()
{
	Son3 s3;
	//s3.m_A = 1000;//不可访问
	//s3.m_B = 1000;//不可访问
}
int main()
{
	system("pause");
	return 0;
}
