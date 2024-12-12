#include <iostream>
using namespace std;
bool is_prime(int num)
{
	int a = 2, b;
	bool c = true;
	if (num == 2) {
		c == true;
	}
	else {
		for (int a = 2; a < num; a++)
		{
			b = num % a;
			if (b == 0)
			{
				c = false;
				break;
			}
			else c = true;
		}
	}
	return c;
}
int main()
{
	int count = 0;
	for (int d = 2; count<200; d++)
		{
			bool e = is_prime(d);
			if (e == true)
			{
				cout << d <<"\t";
				count++;
			}
			if (count % 10 == 0)
			{
				cout << endl;
			}
		}
}