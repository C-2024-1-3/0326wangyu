#include <iostream>
using namespace std;
double sawp(double n1, double n2)
{
    double temp = n1;
    n1 = n2;
    n2 = temp;
    return n1, n2;
}
int main()
{
    double arr[10] = { 1,4,3,2,6,7,8,9,5,10 };
    cout << "输入十个数字" << endl;
    for (int j = 0; j < 9; j++)
    {
        for (int k = 0; k < 10-j-1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                swap(arr[k], arr[k + 1]);
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "\t";
    }
}

