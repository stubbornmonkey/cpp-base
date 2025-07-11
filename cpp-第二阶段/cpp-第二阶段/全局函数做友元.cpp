//#include<iostream>
//using namespace std;
////友元:可以访问类的私有成员
//#include<string>
//class Building
//{
//	//定义一个全年函数友元,定义友元后就能在全局函数中访问私有类型的变量了
//	friend void BuildingFriend(Building* building);
//public:
//	Building()
//	{
//		m_BedRoom = "卧室";
//		m_SittingRoom = "客厅";
//	}
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//void BuildingFriend(Building *building)
//{
//	cout << "访问的房间类型:" << building->m_SittingRoom << endl;
//	cout << "访问的房间类型:" << building ->m_BedRoom <<endl;//报错，访问不了
//}
//void test()
//{
//	Building building;
//	BuildingFriend(&building);
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}