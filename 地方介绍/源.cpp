#include<iostream>
using namespace std;


struct sit_point
{
	double	x = 0;
	double	y = 0;
	double	z = 0;
};
enum opentime
{
	MON,
	TUES,
	WED,
	THUR,
	FRI,
	SAT,
	SUN
};
struct place
{
	sit_point threesit = {};
	string name;
	string food[3] = {};
	opentime time = MON;
};
string yesNo = "no";int TIME;int number = 0;

string dcfood();opentime totime();string timenum(opentime t);



int main()
{

	place sit[10] = {};
	for (int i = 0;i < 10;i++)
	{
		cout << "请输入这个地方3个最好吃的美食：" << endl;

		for (int k = 0;k < 3;k++)
		{
			sit[i].food[k] = dcfood();
		}

		cout << "请输入这个地方的三维坐标：" << endl;
		cin >> sit[i].threesit.x >> sit[i].threesit.y >> sit[i].threesit.z;

		cout << "请输入这个地方的名字：" << endl;
		cin >> sit[i].name;

		cout << "请输入这个地方开放的时间：" << endl;
		sit[i].time = totime();

		cout << "是否结束录入？(yes or no)" << endl;
		cin >> yesNo;
		number++;
		if (yesNo == "no")
		{
			continue;
		}
		else
		{

			break;
		}
	}
	cout << "您的信息为：" << endl;
	for (int i = 0;i < number;i++)
	{
		cout << "这个地方3个最好吃的美食为：" << endl;
		for (int k = 0;k < 3;k++)
		{
			cout << sit[i].food[k] << endl;
		}
		cout << "这个地方名字为：" << endl;
		cout << sit[i].name << endl;
		cout << "这个地方坐标为：" << endl;
		cout << sit[i].threesit.x << " " << sit[i].threesit.y << " " << sit[i].threesit.z << " " << endl;
		cout << "这个地方开放时间为：" << endl;
		cout << timenum(sit[i].time) << endl;
	}
	system("pause");

	return 0;
}



string dcfood()
{
	string food;
	cin >> food;
	return food;
}
opentime totime()
{
F:
	cout << "1-MON\n2-TUES\n3-WED\n4-THUR\n5-FRI\n6-SAT\n7-SUN" << endl;
	cin >> TIME;
	switch (TIME)
	{
	case 1:return MON;
	case 2:return TUES;
	case 3:return WED;
	case 4:return THUR;
	case 5:return FRI;
	case 6:return SAT;
	case 7:return SUN;
	default: cout << "error" << endl;
		goto F;
	}
}
string timenum(opentime t)
{
	switch (t)
	{
	case MON:return "Mon";
	case TUES:return "Tues";
	case WED:return "Wed";
	case THUR:return "Thur";
	case FRI:return "Fri";
	case SAT:return "Sat";
	case SUN:return "Sun";
	}
}