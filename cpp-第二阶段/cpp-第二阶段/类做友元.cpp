//#include<iostream>
//using namespace std;
//#include<string>
////建筑类
//class Building
//{
//	//声明友元类
//	friend class GoodGay;
//public:
//	Building();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
////友元类
//class GoodGay
//{
//public:
//	GoodGay();
//	Building* building;
//	void visit();
//};
////类外写函数
//Building::Building()
//{
//	m_BedRoom = "卧室";
//	m_SittingRoom = "客厅";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "访问的房间:" << building->m_SittingRoom << endl;
//	cout << "访问的房间:" << building->m_BedRoom << endl;//报错
//}
//void test()
//{
//	GoodGay goodGay;
//	goodGay.visit();
//}
/*int main()
{
	test();
	system("pause");
	return 0;
}*/ 