#include <iostream>
using namespace std;
int main()
{
    int arr[] = {57, 83, 65, 34, 65, 234, 23, 13, 6, 32, 4, 233};
    int value = 6;
    int index = -1;

    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == value)
        {
            index = i;
        }
    }

    if (index == -1)
    {
        cout << "Element not found.." << endl;
    }
    else
    {
        cout << "Element found at position = " << index << endl;
    }
    return 0;
}