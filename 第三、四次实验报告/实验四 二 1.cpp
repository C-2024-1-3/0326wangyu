#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int num;
	string str1 = s1;
	string str2 = s2;
	size_t found = str1.find(s2);
	if (found == string::npos)
	{
		return -1;
	}
	else
	{
		return found;
	}
}
int main()
{
	cout << "enter the first string" << endl;
	char s1[80];
	cin >> s1;
	"\r";
	cout << "enter the second string" << endl;
	char s2[80];
	cin >> s2;
	cout << indexOf(s1, s2);
	return 0;
}

