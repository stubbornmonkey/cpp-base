//#include<iostream>
//using namespace std;
////�̳��е���������
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
////����һ�³�Ա����
//void test_01()
//{
//	Son s;
//	cout << "son �е�m_A  = " << s.m_A << endl;
//	//���ø����е�m_A
//	cout << "Base �е�m_A  = "<< s.Base::m_A<<endl;//���ø����������ĳ�Ա����Ҫ������
//}
////������������
//void test_02()
//{
//	Son s;
//	s.func();
//	//������������Ҳ��Ҫ����
//	s.Base::func();
//
//	//s.func(100);//�����������еĺ����������еĺ�������ʱ�������еĺ���ȫ�����Ǹ����еĺ��������Ҫ���ñ���Ҫ������
//	s.Base::func(100);
//}
//int main()
//{
//	//test_01();
//	test_02();
//	system("pause");
//	return 0;
//}