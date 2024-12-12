#include<iostream>
using namespace std;
int way(int a, int b)
{
    int fac, mul;
    int c = (a > b) ? a % b :b% a;
    if (c == 0)
    {
        fac = (a > b) ? b : a;
        mul = (a > b) ? a : b;
    }
    else
    {   
        int d = min(a, b);
        int e = max(a, b);
        while (c != 0)
        {
            e = d;
            d = c;
            c = e% d;
        }
        fac = d;
        mul = a * b / fac;
        return fac;
    }
}
int max(int n1, int n2)
{
    return n1 * n2/way(n1,n2);
}
int main()
{
    int num1, num2;
    cout << "请输入两个数字" << endl;
    cin >> num1 >> num2;
    cout << "最大公因数为" << way(num1, num2) << endl;
    cout << "最小公倍数为" << max(num1, num2) << endl;
    return 0;
}