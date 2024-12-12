#include <iostream>
using namespace std;
int main() {
    bool lockers[100];
    for (int i = 0; i < 100; ++i) 
    {
        lockers[i] = false;
    }
    for (int s = 1; s <= 100; ++s) 
    {
        for (int locker = s-1; locker <100; locker += s) 
        {
            lockers[locker] = !lockers[locker];
        }
    }
    cout << "开着的存物柜号码为：";
    for (int i = 0; i <100; ++i)
    {
        if (lockers[i]) 
        {
            cout <<(i+1)<< " ";
        }
    }
    return 0;
}