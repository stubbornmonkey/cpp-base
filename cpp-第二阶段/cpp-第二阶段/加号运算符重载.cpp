//#include<iostream>
//using namespace std;
//class Person 
//{
//public:
//	int m_A;
//	int m_B;
//	//成员函数的加法运算符重载
//	//Person operator+(Person &p) 
//	//{
//	//	Person temp;
//	//	temp.m_A = this->m_A + p.m_A;
//	//	temp.m_B = this->m_A + p.m_B;
//	//	return temp;
//	//}
//};
////全局函数重载运算符
//Person operator+(Person &p1,Person &p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
////运算符重载之后也可以重载
//Person operator+(Person &p,int num)
//{
//	Person temp;
//	temp.m_A = p.m_A + num;
//	temp.m_B = 10;
//	return temp;
//}
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//	//Person p3 = p1 + p2;//本质p1.operator+(p2)
//	Person p3 = p1 + p2;//本质operator+(p1,p2)
//	cout << "p3.m_A = " << p3.m_A << endl;
//	cout << "p3.m_B = " << p3.m_B << endl;
//	Person p4 = p1 + 100;
//	cout << "p4.m_A = " << p4.m_A << endl;
//	cout << "p4.m_B = " << p4.m_B << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//注意事项:不要滥用运算符重载