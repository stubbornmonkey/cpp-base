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
//	//声明成员函数做友元
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
//	m_BedRoom = "卧室";
//	m_SittingRoom = "客厅";
//}
//void GoodGay::test()
//{
//	cout << "进入的房间:" << building->m_SittingRoom << endl;
//	cout << "进入的房间:" << building->m_BedRoom << endl;
//}
//void GoodGay::test_02() 
//{
//	cout << "进入的房间:" << building->m_SittingRoom << endl;
//	//cout << "进入的房间:" << building->m_BedRoom << endl;//还是不可以访问
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