//#include<iostream>
//using namespace std;
////��Ԫ:���Է������˽�г�Ա
//#include<string>
//class Building
//{
//	//����һ��ȫ�꺯����Ԫ,������Ԫ�������ȫ�ֺ����з���˽�����͵ı�����
//	friend void BuildingFriend(Building* building);
//public:
//	Building()
//	{
//		m_BedRoom = "����";
//		m_SittingRoom = "����";
//	}
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//void BuildingFriend(Building *building)
//{
//	cout << "���ʵķ�������:" << building->m_SittingRoom << endl;
//	cout << "���ʵķ�������:" << building ->m_BedRoom <<endl;//�������ʲ���
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