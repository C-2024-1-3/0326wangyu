#include<iostream>
using namespace std;
class volumn
{
private:
	int length;
	int width;
	int height;
public:
	void set()
	{
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void showvolumn()
	{
		cout << length * width * height << endl;
	}
};
int main()
{
	cout << "请输入长方体的长宽高" << endl;
	volumn v1;
	v1.set();
	v1.showvolumn();
	return 0;
}