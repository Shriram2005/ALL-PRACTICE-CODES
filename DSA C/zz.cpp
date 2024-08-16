#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size)
{
    int minIndex;
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int arr[] = {2, 5, 4, 3, 8, 6, 7, 10, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, size);
    cout << "Sorted array is :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}