// 实验二4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    char a;
    int d,e;
    float b, c;
    cout << "请你需要进行的计算方式输入对应的符号" << endl;
    cin >> a;
    switch (a)
    {
    case'+':
        cout << "请输入两个数字" << endl;
        cin >> b >> c;
        cout << "结果为" << b + c << endl;
    case'-':
        cout << "请输入两个数字" << endl;
        cin >> b >> c;
        cout << "结果为" << b - c << endl;
    case'*':
        cout << "请输入两个数字" << endl;
        cin >> b >> c;
        cout << "结果为" << b * c << endl;
    case'/':
        cout << "请输入两个数字" << endl;
        cin >> b >> c;
        if (c == 0)
        {
            cout << "除数不能为零" << endl;
        }
        else cout << "结果为" << b / c << endl;
    case'%':
        cout << "请输入两个数字" << endl;
        cin >> d >> e;
        if (e == 0)
        {
            cout << "取余时除数不能为零" << endl;
        }
        else cout << "结果为" << d % e << endl;
    default:cout << "运算符非法" << endl;
    }
    return 0;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
