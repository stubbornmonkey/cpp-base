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
//	//ǰ��++���أ��������ã����Խ�����ʽ��̣�
//	MyInteger& operator++()
//	{
//		m_Num++;
//		return *this;
//	}
//	//����++����(���ض��󣬲��ᷢ����ʽ��̵��������int��ռλ����ʾ����++)
//	MyInteger operator++(int)
//	{
//		MyInteger temp = *this;
//		m_Num++;
//		return temp;
//	}
//private:
//	int m_Num;
//};
////���������������
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