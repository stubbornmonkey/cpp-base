//#include<iostream>
//using namespace std;
//#include<string>
//class Building;
//class GoodGay
//{
//public: 
//	Building* building;
//	GoodGay();
//	void test();
//	void test_02();
//};
//class Building
//{
//	//������Ա��������Ԫ
//	friend void GoodGay::test();
//public:
//	Building();
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//Building::Building()
//{
//	m_BedRoom = "����";
//	m_SittingRoom = "����";
//}
//void GoodGay::test()
//{
//	cout << "����ķ���:" << building->m_SittingRoom << endl;
//	cout << "����ķ���:" << building->m_BedRoom << endl;
//}
//void GoodGay::test_02() 
//{
//	cout << "����ķ���:" << building->m_SittingRoom << endl;
//	//cout << "����ķ���:" << building->m_BedRoom << endl;//���ǲ����Է���
//}
//void test()
//{
//	GoodGay gg;
//	gg.test();
//	gg.test_02();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}