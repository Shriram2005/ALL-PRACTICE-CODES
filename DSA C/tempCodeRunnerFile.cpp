#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int value)
{
    int low, high, mid;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        else if (value < arr[mid])
        {
            high = mid - 1;
        }
        else if (value > arr[mid])
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 44, 54, 64, 68, 77, 82, 99, 138, 154};
    int value = 99;
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = BinarySearch(arr, size, value);

    if (index == -1)
    {
        cout << "Element does not exist..." << endl;
    }
    else
    {
        cout << "Element found at position = " << index;
    }
    return 0;
}