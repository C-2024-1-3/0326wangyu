#include <iostream>
using namespace std;
void count1(const char s[], int counts[])
{
    for (int i = 0; i < 26; i++)
    {
        counts[i] = 0;
    }
    for (int i = 0; s[i] != '\0'; ++i)
    {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z')
        {
            counts[c - 'a']++;
        }
    }
}
int main()
{
    cout << "enter a string:" << endl;
    char s1[80];
    int counts[25];
    cin >> s1;
    count1(s1, counts);
    for (int i = 0; i < 26; i++)
    {
        if (counts[i] != 0)
        {
            char let = static_cast<char>(i + 97);
            cout << let << ":" << counts[i] << "times" << endl;
        }
    }
}

