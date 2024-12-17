#include<iostream>
using namespace std;
class student
{
private:
	int num;
	int score;
public:
	student(int n, int s)
	{
		num = n;
		score = s;
	}
	int getnum()
	{
		return num;
	}
	int getscore()
	{
		return score;
	}
	void max(student* students[],int n)
	{
		int a = 0;
		for (int i = 1; i < n; i++)
		{
			if (students[i]->getscore() > students[a]->getscore())
			{
				a = i;
			}
		}
		cout << students[a]->getnum();
	};
};
int main()
{
	student* stu[5];
	stu[0] = new student(301, 86);
	stu[1] = new student(302, 87);
	stu[2] = new student(303, 84);
	stu[3] = new student(304, 89);
	stu[4] = new student(305, 82);
	stu[0]->max(stu, 5);
	for (int i = 0; i < 5; i++) 
	{
		delete stu[i];
	}
	return 0;
}
