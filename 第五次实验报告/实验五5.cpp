#include<iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point()
	{
		x = 60;
		y = 80;
	}
	void setpoint(int i,int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point p;
	p.setpoint(10, 10);
	p.display();
	return 0;
}
