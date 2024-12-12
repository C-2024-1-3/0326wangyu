#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 1, c = 0;
    while(a<10)
    {
        c = (b+1) * 2;
        b = c;
        a++;
    }
    cout<<"小猴第一天摘的桃子有" <<c<< endl;
    return 0;
}
