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
//�����̳�
class Son1 :public Base
{
public:
	void test()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100;//�������������Է��ʣ���˽�б��������Է���
	}
};
void test_01()
{
	Son1 s1;
	s1.m_A = 1000;
	//s1.m_B = 1000;//���ɷ��ʣ�Ȩ�ޱ����protected
}
class Son2 :protected Base
{
public:
	void test()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100;//�޷�����
	}
};
void test_02()
{
	Son2 s2;
	//s2.m_A = 1000;�޷����ʣ������protected
	//s2.m_B = 1000;�޷����ʣ������protected
}
class Son3 :private Base
{
public:
	void test()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100;���ɷ���
	}
};
void test_03()
{
	Son3 s3;
	//s3.m_A = 1000;//���ɷ���
	//s3.m_B = 1000;//���ɷ���
}
int main()
{
	system("pause");
	return 0;
}
