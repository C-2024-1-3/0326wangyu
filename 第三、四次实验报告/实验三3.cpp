#include <iostream>
#include "mytemperature.h"
using namespace std;
int main()
{
	cout << "请选择要进行的换算，摄氏度转华氏度按1，华氏度换摄氏度按0" << endl;
	bool a;
	cin >> a;
	if (a ==1)
	{
		cout << "请输入摄氏温度" << endl;
		double s;
		cin >> s;
		cout << "转换为华氏度是" << celsius_to_fah(s) << endl;
	}
	else
	{
		cout << "请输入华氏温度" << endl;
		double s;
		cin >> s;
		cout << "转换为摄氏度是" << fah_to_celsius(s) << endl;
	}
	return 0;
}