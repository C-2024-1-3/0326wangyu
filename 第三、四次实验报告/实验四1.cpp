
#include <iostream>
using namespace std;
int main() 
{
	cout << "请输入十个数" << endl;
	int arr[10];
	int b = 0;
	for (int i = 0; i < 10; ++i) {
		int a;
		cin >> a;
		bool diff = true;
		for (int j = 0; j < b; ++j) {
			if (arr[j] == a) {
				diff  = false;
				break;
			}
		}
		if (diff) 
		{
			arr[b++] = a;
		}
	}
	for (int i = 0; i < b; ++i) 
	{
		cout << arr[i] << " ";
	}
	return 0;
}