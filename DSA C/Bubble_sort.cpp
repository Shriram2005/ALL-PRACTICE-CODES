#include <iostream>
using namespace std;
int main()
{
    int arr[] = {22, 5, 3, 45, 23, 34, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-i-1; j++)   //
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array is = " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}