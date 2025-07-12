//#include<iostream>
//using namespace std;
//#include<string>
//class Person
//{
//public:
//	int m_Age;
//	string m_Name;
//	Person(int age,string name)
//	{
//		m_Age = age;
//		m_Name = name;
//	}
//	//==的重载
//	bool operator==(Person & p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name) 
//		{
//			return true;
//		}
//		return false;
//	}
//	//!=的重载
//	bool operator!=(Person & p)
//	{
//		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
//		{
//			return false;
//		}
//		return true;
//	}
//};
//void test()
//{
//	Person p1(18,"tom");
//	Person p2(28, "tom");
//	if (p1 == p2)
//	{
//		cout << "p1 和 p2 相等" << endl;
//	}
//	else
//	{
//		cout << "p1 和 p2 不相等" << endl;
//	}
//	if (p1 != p2)
//	{
//		cout << "p1 和 p2 不相等" << endl;
//	}
//	else
//	{
//		cout << "p1 和 p2 相等" << endl;
//	}
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}