#include<iostream>
using namespace std;
class Person 
{
public:
	void func01()
	{
		cout << "func01()������" << endl;
	}
	void func02()
	{
		//����
		//ԭ��:������m_Ageʱ�����õ���this->m_Age��Ϊ�ö�����һ����ָ�����Ե���ʱthisҲ�ǿյ����Ա���
		cout << "��ǰ���������" << m_Age << endl;
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