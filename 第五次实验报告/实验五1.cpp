#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:
	int hour;
	int minute;
	int sec;
public:              // 数据成员为公用的
	void settime()
	{
		int t1;
		cin >> hour;     //输入设定的时间 
		cin >> minute;
		cin >> sec;
	}
	void showtime()
	{
		cout << hour << "：" << minute << "：" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.settime();
	t1.showtime();
	return 0;
}