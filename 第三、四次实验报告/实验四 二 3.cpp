#include <iostream>
using namespace std;
void order(int* arr, int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(*(arr+i)>*(arr+j))
                {
                int temp = *(arr + i);
                *(arr + i)=*(arr + j);
                *(arr + j) = temp;
                }
        }
    }
}
int main()
{
    int size;
    cout << "请输入数组元素个数" << endl;
    cin >> size;
    int* arr = new int[size];
    cout << "请输入数组元素" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    order(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << *(arr+i)<<" ";
    }
    delete[]arr;
    return 0;
}

