#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    int i = size1, j = size2;
    int k = size1 + size2;
    for (int i = 0; i < size1; i++)
    {
        list3[i] = list1[i];
    }
    while (i > 0 && j > 0)
    {
        if (list3[i-1] < list2[j-1])
        {
            list3[k-1] = list2[j-1];
            k--;
            j--;
        }
        else
        {
            list3[k-1] = list1[i-1];
            k--;
            i--;
        }
        while (j > 0)
        {
            list3[k - 1] = list2[j - 1];
            k--;
            j--;
        }
    }
}
    int main()
{
    int list1[80];
    int list2[80];
    int list3[160];
    cout << "请输入两个排列好的数组，注意第一个数字为数组的元素数" << endl;
    int size1;
    cin >> size1;
    for (int i = 0; i < size1; ++i)
    {
        cin >> list1[i];
    }
    "\r";
    int size2;
    cin >> size2;
    for (int i = 0; i < size2; ++i)
    {
        cin >> list2[i];
    }
    merge(list1, size1, list2, size2, list3);
    cout << "the merged list is:" << endl;
    for (int i = 0; i < (size1 + size2); i++)
    {
        cout << list3[i] << " ";
    }
    return 0;
}


