#include <iostream>
using namespace std;
int parseHex(const char* const hexString)
{
    int sum = 0;
    for (int i = 0;hexString[i]!='\0'; i++)
    {
        char c = hexString[i];
        if (c >= '0' && c <= '9')
        {
            sum = sum * 16 + (c - '0');
        }
        else if (c >= 'A' && c <= 'F')
        {
            sum = sum * 16 + (c - 'A' + 10);
        }
    }
    return sum;
}
int main()
{
    cout<<parseHex("A5");
}
