//#include<iostream>
//using namespace std;
//class Person 
//{
//public:
//	//this��һ��ָ�볣�� Person * const this;
//	//�������ײ�ʱ�޸ĵ�thisָ���� ����ָ��ǰ��const ��ɲ����޸�ֵ
//	//�����������޸ĳ�Ա����
//	void func_01() const
//	{
//		//m_Age = 100;//�������޸�
//		m_Salary = 10000;//�����޸ģ�ԭ��:m_Salary��һ����������������ڳ��������޸�
//	}
//	void func_02()
//	{
//		//��Ա�����п����޸�����
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
////������
//void test_02()
//{
//	const Person p;
//	//p.func_02();//�������ܵ��ó�Ա����,ԭ��:��Ա���������޸ĳ�Ա���ԣ�����������Բ����޸ģ����Բ��ܵ��ó�Ա����
//	//������ֻ�ܵ��ó�����
//	//p.func_01();
//}
//int main()
//{
//	system("pause");
//	return 0;
//}