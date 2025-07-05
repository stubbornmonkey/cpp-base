#include<iostream>
using namespace std;
class Person 
{
public:
	void func01()
	{
		cout << "func01()被调用" << endl;
	}
	void func02()
	{
		//报错
		//原因:当调用m_Age时，调用的是this->m_Age因为该对象是一个空指针所以调用时this也是空的所以报错
		cout << "当前对象的年龄" << m_Age << endl;
	}
	int m_Age  = 10;
};
void test01()
{

	Person* p = NULL;
	p->func01();
	//p->func02();
}
int main()
{
	test01();
	system("pause");
	return 0;
}